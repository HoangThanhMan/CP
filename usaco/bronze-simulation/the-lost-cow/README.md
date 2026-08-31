# The Lost Cow

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `simulation` `math`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bessie ở vị trí `x`, đi tìm John ở `y`. Cô đi 1 bước sang phải, rồi 2 bước sang trái, rồi 4 sang phải, ... (mỗi lần gấp đôi và đổi chiều), luôn quay lại xuất phát điểm giữa các lượt. Tính quãng đường tới lúc gặp John.

## Quan sát

- Vị trí sau lượt `n` luôn là `x ± 2^n` so với xuất phát điểm, dấu đổi luân phiên.
- Vì khoảng cách gấp đôi mỗi lượt nên chỉ khoảng 30 lượt là phủ hết miền giá trị — mô phỏng thoải mái.

## Ý tưởng

Mô phỏng từng lượt: tính vị trí mới `x + (-1)^n * 2^n`, cộng quãng đường đi được. Dừng khi lượt này vượt qua `y`, rồi trừ đi phần đi quá.

## Độ phức tạp

- Thời gian: `O(log |x - y|)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Trường hợp `x == y` phải trả 0 ngay.
- `pow()` trả `double`, với số mũ lớn sẽ sai số — nên dùng dịch bit `1LL << n`.
- Phần 'trừ đi đoạn đi quá' dễ nhầm dấu giữa hai hướng.

## Bài học

Tăng gấp đôi mỗi lượt = số lượt logarit. Thấy 'gấp đôi' là biết mô phỏng thẳng vẫn nhanh.
