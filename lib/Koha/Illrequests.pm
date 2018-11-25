package Koha::Illrequests;

# Copyright PTFS Europe 2016
#
# This file is part of Koha.
#
# Koha is free software; you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation; either version 3 of the License, or (at your option) any later
# version.
#
# Koha is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
# A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with Koha; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

use Modern::Perl;

use Koha::Database;
use Koha::Illrequest;
use Koha::Illrequest::Config;

use base qw(Koha::Objects);

=head1 NAME

Koha::Illrequests - Koha Illrequests Object class

=head1 API

=head2 Class Methods

=head3 _type

=cut

sub _type {
    return 'Illrequest';
}

=head3 object_class

=cut

sub object_class {
    return 'Koha::Illrequest';
}

##### To be implemented Facade

=head3 new

    my $illRequests = Koha::Illrequests->new();

Create an ILLREQUESTS object, a singleton through which we can interact with
ILLREQUEST objects stored in the database or search for ILL candidates at API
backends.

=cut

sub new {
    my ( $class, $attributes ) = @_;

    my $self = $class->SUPER::new($class, $attributes);

    my $config = Koha::Illrequest::Config->new; # <- Necessary
    $self->{_config} = $config;                 # <- Necessary

    return $self;
}

=head3 search_incomplete

    my $requests = $illRequests->search_incomplete;

A specialised version of `search`, returning all requests currently
not considered completed.

=cut

sub search_incomplete {
    my ( $self ) = @_;
    $self->search( {
        status => [
            -and => { '!=', 'COMP' }, { '!=', 'GENCOMP' }
        ]
    } );
}

=head1 AUTHOR

Alex Sassmannshausen <alex.sassmannshausen@ptfs-europe.com>

=cut

1;
