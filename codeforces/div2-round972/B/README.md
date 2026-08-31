# Codeforces Round 972 Div2 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div2 B
- **Tags:** `math` `greedy` `case-analysis`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi chưa AC — công thức rất phức tạp, xem Cạm bẫy

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Đọc `n`, `m`, `q`, một mảng `b` (được sắp xếp) và một truy vấn `a`. Tuỳ `a` nằm trước, sau, hay giữa hai mốc `b[0]`, `b[1]` mà trả về một công thức khác nhau.

## Quan sát

- Ba trường hợp vị trí: trước mốc đầu, sau mốc cuối, và nằm giữa.
- Hai trường hợp biên cho công thức đơn giản `b[0] - 1` và `n - b[1]`.

## Ý tưởng

Sắp xếp `b`, phân ba trường hợp theo vị trí của `a`, mỗi trường hợp một công thức.

## Độ phức tạp

- Thời gian: `O(m log m) mỗi test`
- Bộ nhớ: `O(m)`

## Cạm bẫy

- **Công thức nhánh giữa dài một dòng và rất khó soát** — gần như chắc chắn nên viết lại thành vài biến trung gian có tên rõ ràng rồi mới ghép.
- Code chỉ dùng `b[0]` và `b[1]` dù đọc `m` phần tử — nếu `m > 2` thì logic sai.

## Bài học

Công thức một dòng dài quá 80 ký tự là dấu hiệu cần tách biến. Code thi đấu vẫn phải đọc được, nhất là khi cần sửa gấp lúc đang thi.
