# Milk Pails

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `brute-force`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Có hai xô dung tích X và Y, cần đong lượng sữa gần M nhất nhưng không vượt quá M. Tìm lượng lớn nhất `X*i + Y*j <= M`.

## Quan sát

- `M <= 1000` nên `i, j` đều nhỏ hơn `M`, duyệt hai vòng `O(M^2)` chỉ `10^6` phép.
- Thực ra chỉ cần một vòng: cố định `i`, `j` tối ưu là `(M - X*i) / Y`.

## Ý tưởng

Duyệt số lần dùng xô X là `i`, dừng khi `X*i > M`; với mỗi `i` lấy `j` lớn nhất còn vừa. Cập nhật max.

## Độ phức tạp

- Thời gian: `O(M) nếu tính j trực tiếp, O(M^2) nếu duyệt cả hai`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Nhớ `break` khi vượt M, nếu không sẽ duyệt thừa hoặc tràn.

## Bài học

Bài hai biến với giới hạn nhỏ: cố định biến ngoài, biến trong thường tính được bằng công thức thay vì duyệt — giảm ngay một bậc độ phức tạp.
