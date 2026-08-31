# CodeTour 2024 — Challenge 2, bài D

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Dễ
- **Tags:** `implementation` `game`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi chưa AC — xem Cạm bẫy

## Đề bài (tóm tắt)

Hai người chơi oẳn tù tì (R/S/P) qua N ván với bộ bài đã cho. Tính chênh lệch điểm.

## Quan sát

- Mỗi ván độc lập, chỉ cần bảng thắng thua: R thắng S, S thắng P, P thắng R.

## Ý tưởng

Duyệt từng ván, cộng điểm cho người thắng, cuối cùng in `|scoreA - scoreB|`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Chuỗi `else if` trong code không bao giờ chạy tới ba nhánh cuối**: nhánh `cardB == 'R' && cardA == 'S'` chính là nhánh `cardA == 'S' && cardB == 'R'`, mà điều kiện đó đã bị nhánh trên bắt mất. Kết quả là chỉ A được cộng điểm, B luôn 0 điểm. Cần tách thành hai khối `if` riêng hoặc dùng bảng tra.
- Đề nói 'chênh lệch lớn nhất' — nếu được phép sắp xếp lại bài thì đây là bài tham lam/ghép cặp chứ không phải so từng ván. Cần đọc lại đề trong `_statements/`.

## Bài học

Khi viết chuỗi `else if` cho luật đối xứng, rất dễ để nhánh sau bị nhánh trước che mất. Bảng tra `beats[x] == y` an toàn hơn nhiều.
