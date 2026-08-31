# Sakurako and Kosuke (2033A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `math` `simulation` `parity`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Con dấu bắt đầu ở 0. Lượt `i` dịch nó `2i-1` đơn vị, đổi chiều mỗi lượt. Ai là người khiến con dấu vượt ra khỏi `[-n, n]` thì thua.

## Quan sát

- Mô phỏng thẳng là đủ vì bước nhảy tăng nhanh, chỉ vài lượt là vượt biên.
- Thực ra vị trí sau lượt `i` là `±i`, nên đáp án chỉ phụ thuộc tính chẵn lẻ của `n`.

## Ý tưởng

Mô phỏng tới khi `|x| > n`, xét lượt cuối là lẻ hay chẵn để in tên người thắng.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Điều kiện dừng `x <= n && x >= -n` phải khớp đúng với định nghĩa 'vượt ra ngoài' của đề.
- Có công thức đóng dựa trên tính chẵn lẻ của `n` — nhanh hơn nhưng mô phỏng an toàn hơn khi thi.

## Bài học

Khi bước nhảy tăng tuyến tính, số lượt tới lúc vượt biên chỉ cỡ `sqrt` hoặc tuyến tính nhỏ — mô phỏng thẳng thường vừa đủ nhanh vừa ít sai.
