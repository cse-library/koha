[% USE Koha %]
<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Patrons Admin Resident Search Box -->
<div id="header_search">
 <div id="patron_category_search" class="residentsearch">
 <p class="tip">Nhập kiểu bạn đọc:</p>
 <form action="[% script_name %]" method="post">
 <input class="head-searchbox" type="text" name="description" size="40" value="[% searchfield %]" />
 <input class="submit" type="submit" name="search" value="Tìm kiếm" />
 </form> 
 </div>
 [% INCLUDE 'patron-search-box.inc' %]
 [% IF ( CAN_user_catalogue ) %]
 <div id="catalog_search" class="residentsearch">
 <p class="tip">Nhập từ khóa tìm kiếm:</p>
 <form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
 [% IF ( Koha.Preference('IntranetCatalogSearchPulldown') ) %][% INCLUDE 'search_indexes.inc' %][% END %]
 <input size="40" type="text" name="q" id="search-form" class="head-searchbox form-text" title="Nhập thuật ngữ bạn muốn tìm kiếm." value="" />
 <input type="submit" class="submit" value="Tìm kiếm" />
 </form>
 </div>[% END %]

 <ul>
 <li><a class="keep_text" href="#patron_category_search">Tìm kiểu bạn đọc</a></li>
 [% IF ( CAN_user_circulate_circulate_remaining_permissions ) %]<li><a class="keep_text" href="#circ_search">Ghi mượn</a></li>[% END %]
 [% IF ( CAN_user_catalogue ) %]<li><a class="keep_text" href="#catalog_search">Tìm tài liệu</a></li>[% END %]
 </ul> 
</div>
</div>
<!-- End Patrons Admin Resident Search Box -->
