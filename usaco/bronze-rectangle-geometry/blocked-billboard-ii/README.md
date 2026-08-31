# Blocked Billboard II

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `geometry` `rectangles` `case-analysis`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bảng quảng cáo hình chữ nhật bị một tờ giấy hình chữ nhật che một phần. Phần còn thấy được bảo đảm vẫn là hình chữ nhật. Tính diện tích nhỏ nhất của hình chữ nhật bao phần còn thấy.

## Quan sát

- Đề bảo đảm phần còn lại là hình chữ nhật, nghĩa là tờ giấy chỉ có thể **cắt ngang hoàn toàn** một dải của bảng, không thể khoét lỗ giữa.
- Đếm số góc của bảng nằm trong tờ giấy cho biết ta đang ở trường hợp nào.

## Ý tưởng

Đếm số góc của bảng bị tờ giấy phủ. 0 hoặc 1 góc -> tờ giấy không cắt trọn dải nào, diện tích giữ nguyên. 4 góc -> bị che hết, đáp án 0. 2 góc -> tờ giấy cắt trọn một dải, trừ đi diện tích phần giao.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Trường hợp 2 góc vẫn phải tính giao đúng, không được giả định tờ giấy nằm gọn trong bảng.

## Bài học

Khi đề *bảo đảm* kết quả có dạng đẹp, hãy dùng chính bảo đảm đó để thu hẹp số trường hợp phải xét — đó thường là ý đồ ra đề.
