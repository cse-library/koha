<div id="menu">
<ul>
[% IF ( acquisitions ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=acquisitions" title="Phân hệ bổ sung">Phân hệ bổ sung</a></li>
[% IF ( admin ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Quản trị hệ thống" href="/cgi-bin/koha/admin/preferences.pl?tab=admin">Quản trị hệ thống</a></li>
[% IF ( authorities ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập thông số dữ liệu kiểm soát" href="/cgi-bin/koha/admin/preferences.pl?tab=authorities">Dữ liệu kiểm soát</a></li>
[% IF ( cataloguing ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=cataloguing" title="Phân hệ biên mục">Phân hệ biên mục</a></li>
[% IF ( circulation ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Phân hệ lưu thông" href="/cgi-bin/koha/admin/preferences.pl?tab=circulation">Phân hệ lưu thông</a></li>
[% IF ( enhanced_content ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập nội dung nâng cao" href="/cgi-bin/koha/admin/preferences.pl?tab=enhanced_content">NỘI DUNG NÂNG CAO</a></li>
[% IF ( i18n_l10n ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=i18n_l10n" title="Thiết lập thông số ngôn ngữ hiển thị">NGÔN NGỮ HIỂN THỊ</a></li>
[% IF ( local_use ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/systempreferences.pl">Sử dụng nội bộ</a></li>
[% IF ( logs ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=logs" title="Chế độ ghi Log">Nhật ký hệ thống</a></li>
[% IF ( opac ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Thiết lập thông số giao diện OPAC" href="/cgi-bin/koha/admin/preferences.pl?tab=opac">Giao diện OPAC</a></li>
[% IF ( patrons ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Bạn đọc" href="/cgi-bin/koha/admin/preferences.pl?tab=patrons">Bạn đọc</a></li>
[% IF ( searching ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="TÌM KIẾM" href="/cgi-bin/koha/admin/preferences.pl?tab=searching">TÌM KIẾM</a></li>
[% IF ( serials ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="Ấn phẩm định kỳ" href="/cgi-bin/koha/admin/preferences.pl?tab=serials">Ấn phẩm định kỳ</a></li>
[% IF ( staff_client ) %]<li class="active">[% ELSE %]<li>[% END %]<a title="GIAO DIỆN NHÂN VIÊN" href="/cgi-bin/koha/admin/preferences.pl?tab=staff_client">GIAO DIỆN NHÂN VIÊN</a></li>
[% IF ( tools ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=tools" title="Công cụ bổ trợ">Công cụ bổ trợ</a></li>
[% IF ( web_services ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/admin/preferences.pl?tab=web_services" title="Thiết lập thông số dịch vụ WEB">Thiết lập thông số dịch vụ WEB</a></li>
</ul>
</div>
