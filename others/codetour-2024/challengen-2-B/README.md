# CodeTour 2024 — Challenge 2, bài B (Thông điệp vũ trụ)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Vừa
- **Tags:** `sieve` `number-theory` `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi chưa AC — xem Cạm bẫy

## Đề bài (tóm tắt)

Cho N, phân tích ra các ước nguyên tố phân biệt rồi ánh xạ mỗi ước thành một chữ cái để giải mã thông điệp.

## Quan sát

- Chỉ cần các ước nguyên tố **phân biệt**, không cần số mũ.
- Phân tích thừa số bằng cách chia thử tới `sqrt(N)` là `O(sqrt N)` — đủ nhanh và **không cần sàng**.

## Ý tưởng

Chia thử `i` từ 2 tới `sqrt(N)`; mỗi `i` chia hết thì ghi nhận rồi chia sạch. Còn dư `> 1` thì đó cũng là một ước nguyên tố. Sau đó ánh xạ sang chữ cái theo quy tắc đề.

## Độ phức tạp

- Thời gian: `O(sqrt N)`
- Bộ nhớ: `O(số ước)`

## Cạm bẫy

- **Code hiện tại sàng tới `N`** (`sieve(N)` với `N` kiểu `long long`) — nếu `N` lớn thì vừa hết bộ nhớ vừa quá chậm. Chia thử tới `sqrt(N)` là đủ.
- Quy tắc ánh xạ `'A' + prime % 26` và hàm so sánh `a%26 < b%26` trông đáng ngờ — cần đối chiếu lại với đề (file PDF trong `_statements/`).
- Phiên bản cũ dùng chia thử nằm ở phần comment đầu file.

## Bài học

Phân tích thừa số nguyên tố của **một** số chỉ tốn `O(sqrt N)` — đừng sàng cả miền chỉ để phân tích một số.
