# Sakurako's Hobby (2008D)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 D
- **Tags:** `permutation` `cycles` `dfs`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho hoán vị `p` và màu của từng vị trí (0 hoặc 1). Với mỗi `i`, đếm số vị trí đen tới được khi đi theo `i -> p[i] -> p[p[i]] -> ...`

## Quan sát

- Hoán vị chia tập vị trí thành các **chu trình** rời nhau.
- Mọi vị trí trong cùng một chu trình đều tới được đúng cùng một tập vị trí -> **cùng đáp án**.
- Vậy chỉ cần với mỗi chu trình đếm số ô đen một lần rồi gán cho cả chu trình.

## Ý tưởng

Duyệt các vị trí chưa thăm; đi hết chu trình lần một để đếm số ô đen `sz`, đi lần hai để gán `b[i] = sz` cho mọi vị trí trong chu trình.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Cần **hai lần đi** (hoặc lưu danh sách chu trình) vì lần một chưa biết tổng. Code dùng mảng `mark` với ba trạng thái 0/1/2 để phân biệt hai lượt — cách này gọn.
- `ll mark[n+1] = {0}` là mảng độ dài biến (VLA), không chuẩn C++ và dễ tràn stack với `n` lớn. Nên dùng `vector`.
- Sửa biến vòng lặp `i` bên trong vòng `for` là kỹ thuật dễ gây lỗi — nên dùng biến `j` riêng.

## Bài học

Hoán vị = tập chu trình. Hễ đề hỏi 'đi theo p tới được những đâu' thì câu trả lời chỉ phụ thuộc vào chu trình, tính một lần cho cả chu trình.
