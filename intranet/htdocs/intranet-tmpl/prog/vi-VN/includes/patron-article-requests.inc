<div id="article-requests">
[% IF patron.article_requests_current.count %]
 <table id="article-requests-table" class="table table-bordered table-striped">
 <thead>
 <tr>
 <th class="article-request-record-title anti-the">Record title</th>
 <th class="article-request-created_on psort">Ngày đặt hàng</th>
 <th class="article-request-title anti-the">Nhan đề</th>
 <th class="article-request-author">Tác giả</th>
 <th class="article-request-volume">Tập</th>
 <th class="article-request-issue">Kỳ</th>
 <th class="article-request-date">Thời gian</th>
 <th class="article-request-pages">Pages</th>
 <th class="article-request-chapters">Chapters</th>
 <th class="article-request-notes">Ghi chú</th>
 <th class="article-request-status">Trạng thái</th>
 <th class="article-request-branchcode">Thư viện nhận tài liệu</th>
 </tr>
 </thead>

 <tbody>
 [% FOREACH ar IN patron.article_requests_current %]
 <tr>
 <td class="article-request-record-title">
 <a class="article-request-title" href="/cgi-bin/koha/circ/request-article.pl?biblionumber=[% ar.biblionumber %]">
 [% ar.biblio.title %]
 [% ar.item.enumchron %]
 </a>
 [% ar.biblio.author %]
 [% IF ar.itemnumber %] <i>(only [% ar.item.barcode %])</i>[% END %]
 </td>

 <td class="article-request-created_on">
 [% ar.created_on | $KohaDates %]
 </td>

 <td class="article-request-title">
 [% ar.title %]
 </td>

 <td class="article-request-author">
 [% ar.author %]
 </td>

 <td class="article-request-volume">
 [% ar.volume %]
 </td>

 <td class="article-request-issue">
 [% ar.issue %]
 </td>

 <td class="article-request-date">
 [% ar.date %]
 </td>

 <td class="article-request-pages">
 [% ar.pages %]
 </td>

 <td class="article-request-chapters">
 [% ar.chapters %]
 </td>

 <td class="article-request-patron-notes">
 [% ar.patron_notes %]
 </td>

 <td class="article-request-status">
 [% IF ar.status == 'PENDING' %]
 Pending
 [% ELSIF ar.status == 'PROCESSING' %]
 Processing
 [% ELSIF ar.status == 'COMPLETED' %]
 Completed
 [% ELSIF ar.status == 'CANCELED' %]
 Canceled
 [% END %]
 </td>

 <td class="article-request-branchcode">
 [% ar.branch.branchname %]
 </td>
 </tr>
 [% END %]
 </tbody>
 </table>
 [% ELSE %]
 Patron has no current article requests.
 [% END %]
</div>
