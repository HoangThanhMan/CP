# Normal Problem (2044B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 B
- **Tags:** `strings` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Lật ngược chuỗi, đồng thời đổi `p` thành `q` và `q` thành `p` (`w` giữ nguyên).

## Quan sát

- Đây là phép **lật gương**: `p` và `q` là ảnh gương của nhau, `w` đối xứng nên không đổi.

## Ý tưởng

Duyệt chuỗi từ phải sang trái, in ký tự đã đổi `p <-> q`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Phải làm **cả hai** việc: lật thứ tự **và** đổi ký tự. Quên một trong hai là sai.

## Bài học

Bài đối xứng gương: hỏi 'ảnh gương của từng ký tự là gì' rồi lật thứ tự. Hai bước tách bạch.
