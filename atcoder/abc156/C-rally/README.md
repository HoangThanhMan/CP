# Rally (ABC156 C)

- **Nguồn:** https://atcoder.jp/contests/abc156/tasks/abc156_c
- **Độ khó:** ABC C
- **Tags:** `brute-force` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

N người ở các toạ độ trên trục. Chọn một điểm tập trung nguyên P; chi phí của người ở `x` là `(x - P)^2`. Tìm tổng chi phí nhỏ nhất.

## Quan sát

- Toạ độ tới 100 nên **duyệt hết mọi P từ 1 tới 100** là xong, chỉ `100 * N` phép tính.
- Về lý thuyết P tối ưu nằm quanh trung bình cộng, nhưng vì cần P nguyên nên duyệt vẫn an toàn hơn.

## Ý tưởng

Với mỗi `P` trong miền toạ độ, tính tổng `(x - P)^2` rồi lấy min.

## Độ phức tạp

- Thời gian: `O(100*N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Vòng lặp phải phủ **toàn bộ** miền toạ độ hợp lệ. Code hiện tại chạy `i` từ 0 tới 101 rồi dùng `v[j] - i - 1`, tức P thực sự là `i+1` — cách viết dễ gây lệch biên, nên đặt thẳng `P` chạy từ 1 tới 100.
- `sort` trong code không cần thiết cho cách làm này.

## Bài học

Miền giá trị nhỏ (<= vài trăm) là lời mời duyệt toàn bộ đáp án. Nhanh hơn nghĩ công thức và ít sai hơn.
