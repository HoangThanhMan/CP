# Chemistry (1883B)

- **Nguồn:** https://codeforces.com/contest/1883/problem/B
- **Độ khó:** Div3 B
- **Tags:** `strings` `counting` `palindrome`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho chuỗi độ dài `n`, phải xoá đúng `k` ký tự. Hỏi phần còn lại có sắp xếp lại thành chuỗi đối xứng được không.

## Quan sát

- Chuỗi sắp xếp lại thành đối xứng được khi và chỉ khi **số ký tự có tần suất lẻ <= 1**.
- Gọi `odd` là số ký tự tần suất lẻ. Mỗi lần xoá 1 ký tự làm `odd` đổi 1 đơn vị.
- Điều kiện đơn giản: `odd <= k + 1`... chính xác hơn là `odd - k <= 1`.

## Ý tưởng

Đếm tần suất, đếm `odd`. In YES nếu `odd <= k + 1` (tương đương `odd - k <= 1`).

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Code hiện tại xử lý rất vòng vo** với hai biến `le`/`chan` và nhiều nhánh — điều kiện thật chỉ là một dòng `odd - k <= 1`. Nên viết lại cho gọn và chắc.
- Chú ý tính chẵn lẻ: nếu `odd < k` thì phần dư xoá vào ký tự chẵn vẫn không phá được điều kiện.

## Bài học

Điều kiện 'sắp xếp lại thành palindrome' = số ký tự tần suất lẻ nhiều nhất là 1. Thuộc câu này thì cả họ bài palindrome trở nên dễ.
