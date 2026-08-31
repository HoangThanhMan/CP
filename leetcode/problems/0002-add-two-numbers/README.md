# Add Two Numbers

- **Nguồn:** https://leetcode.com/problems/add-two-numbers/
- **Độ khó:** Medium
- **Tags:** `linked-list` `math` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai số nguyên được lưu bằng danh sách liên kết, chữ số hàng đơn vị đứng đầu. Trả về tổng dưới dạng danh sách liên kết cùng định dạng.

## Quan sát

- Chữ số hàng đơn vị đứng đầu là điều kiện thuận lợi: cộng từ đầu danh sách chính là cộng từ hàng thấp lên hàng cao, đúng thứ tự cộng tay.
- Ba thứ có thể kết thúc không cùng lúc: hết `l1`, hết `l2`, và **còn nhớ**.

## Ý tưởng

Đi song song hai danh sách, mỗi bước lấy `num1 + num2 + nhớ`, tạo node mới với `sum % 10`, cập nhật `nhớ = sum / 10`. Vòng lặp chạy khi **còn bất kỳ thứ nào trong ba thứ trên**.

## Độ phức tạp

- Thời gian: `O(max(m, n))`
- Bộ nhớ: `O(max(m, n)) cho kết quả`

## Cạm bẫy

- Quên số nhớ cuối cùng: `999 + 1` phải ra 4 node chứ không phải 3. Điều kiện vòng lặp phải gồm cả `nhớ != 0`.
- Dùng node giả (dummy head) sẽ bỏ được nhánh `if (res == NULL)`, code gọn hơn hẳn.

## Bài học

Mẫu 'cộng có nhớ trên danh sách': điều kiện vòng lặp là `l1 || l2 || carry`. Nhớ mẫu này thì làm được cả loạt bài họ hàng.
