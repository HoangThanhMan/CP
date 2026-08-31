# Gift Carpet (1862A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `strings` `greedy` `grid`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Ma trận ký tự `n x m`. Hỏi có chọn được mỗi cột nhiều nhất một ký tự (theo thứ tự cột từ trái sang) để ghép thành chuỗi `vika` không.

## Quan sát

- Duyệt cột từ trái sang, tham lam: cột nào chứa ký tự đang cần thì nhận ngay.
- Nhận sớm không bao giờ tệ hơn — vì càng để dành ít cột thì càng khó.

## Ý tưởng

Giữ chỉ số `index` trong chuỗi `vika`. Với mỗi cột, nếu có ô nào bằng `vika[index]` thì tăng `index`. Đi hết mà `index == 4` thì YES.

## Độ phức tạp

- Thời gian: `O(N*M)`
- Bộ nhớ: `O(N*M)`

## Cạm bẫy

- Điều kiện kết thúc nên là `index == 4` sau vòng lặp, gọn hơn cách đặt cờ `is_vika` ngay trong vòng như code hiện tại (dễ lệch một đơn vị).

## Bài học

Bài 'ghép chuỗi con theo thứ tự': tham lam nhận ký tự khớp sớm nhất luôn tối ưu. Đây là thuật toán kiểm tra subsequence chuẩn.
