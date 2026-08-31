# Mr. Perfectly Fine (1829C)

- **Nguồn:** https://codeforces.com/contest/1829/problem/C
- **Độ khó:** Div4 C
- **Tags:** `greedy` `case-analysis`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

N cuốn sách, mỗi cuốn tốn thời gian `a` và dạy kỹ năng theo mặt nạ 2 bit (`00`, `01`, `10`, `11`). Tìm thời gian ít nhất để học đủ cả hai kỹ năng.

## Quan sát

- Sách `00` vô dụng, bỏ qua ngay.
- Chỉ có hai cách đạt mục tiêu: một cuốn `11`, hoặc một cuốn `01` cộng một cuốn `10`.
- Với mỗi loại chỉ cần giữ **cuốn rẻ nhất** — không cần sắp xếp gì thêm.

## Ý tưởng

Giữ ba biến min cho ba loại `01`, `10`, `11`. Đáp án là `min(min01 + min10, min11)`, bỏ qua tổ hợp nào không tồn tại; không tổ hợp nào có thì -1.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Dùng giá trị vô cực làm mặc định, nhưng nhớ **không cộng hai vô cực** rồi so sánh — dễ tràn. Code dùng cờ `check01/check10/check11` để tránh, cách này an toàn.

## Bài học

Khi số 'loại' đối tượng là hữu hạn và nhỏ, chỉ cần giữ phần tử tốt nhất của mỗi loại rồi xét vài tổ hợp. Không cần thuật toán.
