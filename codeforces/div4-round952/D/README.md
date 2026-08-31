# Manhattan Circle (1985D)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 D
- **Tags:** `grid` `geometry` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Lưới có một 'hình tròn Manhattan' đánh dấu bằng `#`. Tìm tâm của nó.

## Quan sát

- Hình tròn Manhattan là hình thoi, **đối xứng qua tâm theo cả hai trục**.
- Vậy tâm chính là trung điểm của hộp bao (bounding box) các ô `#`.

## Ý tưởng

Tìm `min/max` chỉ số hàng và cột của các ô `#`, in trung điểm `(minRow+maxRow)/2`, `(minCol+maxCol)/2` (nhớ chuyển sang đánh số từ 1).

## Độ phức tạp

- Thời gian: `O(N*M)`
- Bộ nhớ: `O(N*M)`

## Cạm bẫy

- Đề đánh số từ 1 — code cộng 2 rồi chia 2 để vừa lấy trung điểm vừa chuyển chỉ số, đúng nhưng nên tách hai bước cho rõ.
- Chỉ dùng bounding box được vì hình **đối xứng**; với hình bất kỳ thì không đúng.

## Bài học

Hình đối xứng qua tâm -> tâm là trung điểm bounding box. Không cần biết bán kính, không cần duyệt lại.
