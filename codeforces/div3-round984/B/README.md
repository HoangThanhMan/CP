# Startup (2036B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `greedy` `sorting` `heap` `counting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

`k` chai nước, mỗi chai có nhãn hiệu và giá. Có `n` kệ, mỗi kệ chỉ đặt chai cùng một nhãn hiệu. Tối đa hoá tổng giá bán.

## Quan sát

- Số chai mỗi kệ không giới hạn -> mỗi nhãn hiệu chiếm đúng 1 kệ.
- Vậy chỉ cần gộp tổng giá theo nhãn hiệu rồi chọn `n` nhãn hiệu có tổng lớn nhất.

## Ý tưởng

Cộng dồn giá theo nhãn hiệu vào map, đẩy các tổng vào max-heap (hoặc sắp xếp giảm dần), cộng `n` giá trị đầu.

## Độ phức tạp

- Thời gian: `O(k log k)`
- Bộ nhớ: `O(k)`

## Cạm bẫy

- Vòng `for(i = 1; i <= k; i++) pq.push(mp[i])` sẽ đẩy cả **những nhãn hiệu không tồn tại** (giá trị 0) vào heap — vô hại ở đây nhưng nên duyệt trực tiếp trên map cho sạch.
- Tổng giá có thể tràn `int` — nên `long long`.

## Bài học

'Nhóm theo khoá rồi chọn K nhóm tốt nhất' = map cộng dồn + sắp xếp/heap. Mẫu rất hay gặp.
