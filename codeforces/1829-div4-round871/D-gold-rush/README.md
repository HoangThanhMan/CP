# Gold Rush (1829D)

- **Nguồn:** https://codeforces.com/contest/1829/problem/D
- **Độ khó:** Div4 D
- **Tags:** `recursion` `dfs` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Từ đống vàng `n`, mỗi bước nếu chia hết cho 3 thì tách thành `n/3` và `2n/3`, giữ lại một phần. Hỏi có đạt được đúng `m` không.

## Quan sát

- Mỗi bước chia `n` cho 3, nên độ sâu chỉ `log_3(n)` — cây tìm kiếm rất nông.
- Số trạng thái khác nhau ít, đệ quy thẳng là đủ, không cần nhớ hoá.

## Ý tưởng

Đệ quy `DFS(s)`: bằng `m` thì true; `s` chia hết 3 thì thử cả hai nhánh `s/3` và `2s/3`; không chia hết thì false.

## Độ phức tạp

- Thời gian: `O(2^log3(n))`
- Bộ nhớ: `O(log n)`

## Cạm bẫy

- Nếu `n` không chia hết cho 3 ngay từ đầu thì chỉ có `n == m` mới đúng.
- `2*s` có thể tràn `int` với `s` lớn — nên dùng `long long`.

## Bài học

Nhánh phân đôi nhưng độ sâu logarit thì tổng số trạng thái vẫn nhỏ — cứ đệ quy thẳng, đừng sợ `2^k`.
