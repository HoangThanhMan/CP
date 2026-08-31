# Bovine Genomics

- **Nguồn:** http://www.usaco.org/index.php?page=viewproblem2&cpid=739
- **Độ khó:** Bronze
- **Tags:** `brute-force` `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC (code hiện tại nghi sai chỉ số — xem Cạm bẫy)

## Đề bài (tóm tắt)

Cho N bò có đốm và N bò không đốm, mỗi con một chuỗi gen dài M ký tự trong {A,C,G,T}. Đếm số vị trí j mà chỉ cần nhìn ký tự ở vị trí đó là phân biệt được hai nhóm: tập ký tự xuất hiện ở vị trí j của nhóm đốm không giao với tập của nhóm không đốm.

## Quan sát

- `N, M <= 100` nên duyệt toàn bộ `O(N*M)` thoải mái.
- Mỗi vị trí độc lập với các vị trí khác — không cần nghĩ tổ hợp, chỉ cần xét từng cột một.

## Ý tưởng

Duyệt từng vị trí (cột) `j`. Gom tập ký tự xuất hiện ở cột `j` của nhóm có đốm và tập của nhóm không đốm. Nếu hai tập rời nhau thì cột `j` giải thích được, tăng đáp án.

## Độ phức tạp

- Thời gian: `O(N*M)`
- Bộ nhớ: `O(N*M)`

## Cạm bẫy

- **Code hiện tại đang lặp `v[i][j]` với `i` chạy theo cột và `j` chạy theo hàng — ngược chỉ số**, và chỉ đọc N chuỗi trong khi đề cho 2N chuỗi. Cần đọc lại đề và sửa.
- Dễ nhầm: điều kiện là hai *tập* rời nhau, không phải hai chuỗi khác nhau.

## Bài học

Bài kiểu 'xét từng cột độc lập': đừng cố nghĩ thuật toán khéo, cứ tách bài toán theo chiều mà các phần không ảnh hưởng nhau rồi duyệt thẳng.
