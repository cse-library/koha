[% IF ( borrowernumber ) %]
<div id="menu">
 <ul>
 [% IF ( circview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/circ/circulation.pl?borrowernumber=[% borrowernumber %]">Ghi mượn</a></li>
 [% IF ( detailview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/moremember.pl?borrowernumber=[% borrowernumber %]">Thông tin cá nhân</a></li>
 [% IF ( CAN_user_updatecharges ) %]
 [% IF ( finesview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/boraccount.pl?borrowernumber=[% borrowernumber %]">Tiền phạt</a></li>
 [% END %]
 [% IF ( intranetreadinghistory ) %]
 [% IF ( readingrecordview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/readingrec.pl?borrowernumber=[% borrowernumber %]">Lịch sử ghi mượn tài liệu</a></li>
 [% END %]
 [% IF ( CAN_user_tools_view_system_logs ) %]
 [% IF ( logview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/tools/viewlog.pl?do_it=1&amp;modules=MEMBERS&amp;action=MODIFY&amp;object=[% borrowernumber %]">Nhật ký điều chỉnh</a></li>
 [% END %]
 [% IF ( sentnotices ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/notices.pl?borrowernumber=[% borrowernumber %]">Thông báo</a></li>
 [% IF (  statisticsview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/statistics.pl?borrowernumber=[% borrowernumber %]">Thống kê</a></li>
 [% IF EnableBorrowerFiles %]
 [% IF ( borrower_files ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/files.pl?borrowernumber=[% borrowernumber %]">Tệp tin</a></li>
 [% END %]
 [% IF CAN_user_borrowers_edit_borrowers && useDischarge %]
 [% IF dischargeview %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/discharge.pl?borrowernumber=[% borrowernumber %]">Discharge</a></li>
 [% END %]
 [% IF Koha.Preference('HouseboundModule') %]
 [% IF houseboundview %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/members/housebound.pl?borrowernumber=[% borrowernumber %]">Housebound</a></li>
 [% END %]
 </ul>
</div>
[% END %]
