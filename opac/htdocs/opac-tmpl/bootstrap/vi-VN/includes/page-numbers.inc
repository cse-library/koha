[% IF ( PAGE_NUMBERS ) %]
 <div class="pagination pagination-small noprint">
 [% IF hits_to_paginate < total %]<h6>[% hits_to_paginate %] of [% total %] results loaded, refine your search to view other records</h6>[% END %]
 <ul>
 [% IF ( previous_page_offset.defined ) %]
 <li><a href="/cgi-bin/koha/opac-search.pl?[% query_cgi |html %][% limit_cgi |html %][% IF ( sort_by ) %]&amp;sort_by=[% sort_by |html %][% END %]">Lần 1</a></li>
 <li><a href="/cgi-bin/koha/opac-search.pl?[% query_cgi |html %][% limit_cgi |html %]&amp;offset=[% previous_page_offset %][% IF ( sort_by ) %]&amp;sort_by=[% sort_by |html %][% END %]">&laquo; Previous</a></li>
 [% END %]
 [% FOREACH PAGE_NUMBER IN PAGE_NUMBERS %]
 [% IF ( PAGE_NUMBER.highlight ) %]
 <li class="active"><a href="#">[% PAGE_NUMBER.pg %]</a></li>
 [% ELSE %]
 <li><a href="/cgi-bin/koha/opac-search.pl?[% query_cgi |html %][% limit_cgi |html %]&amp;offset=[% PAGE_NUMBER.offset %][% IF ( sort_by ) %]&amp;sort_by=[% sort_by |html%][% END %]">[% PAGE_NUMBER.pg %]</a></li>
 [% END %]
 [% END %]
 [% IF ( next_page_offset ) %]
 <li><a href="/cgi-bin/koha/opac-search.pl?[% query_cgi |html %][% limit_cgi |html %]&amp;offset=[% next_page_offset %][% IF ( sort_by ) %]&amp;sort_by=[% sort_by |html %][% END %]">Trang sau &raquo;</a></li>
 <li><a href="/cgi-bin/koha/opac-search.pl?[% query_cgi |html %][% limit_cgi |html %]&amp;offset=[% last_page_offset %][% IF ( sort_by ) %]&amp;sort_by=[% sort_by |html %][% END %]">Trước</a></li>
 [% END %]
 </ul>
 </div>
[% END %]
