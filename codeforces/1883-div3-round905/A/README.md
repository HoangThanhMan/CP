# Morning (1883A)

- **Nguồn:** https://codeforces.com/contest/1883/problem/A
- **Độ khó:** Div3 A
- **Tags:** `implementation` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bàn phím có các phím 1..9 và 0 (0 nằm sau 9). Con trỏ bắt đầu ở phím 1. Để gõ một chuỗi 4 chữ số, tính tổng số thao tác (di chuyển + nhấn).

## Quan sát

- Coi '0' là giá trị 10 thì bàn phím thành đường thẳng 1..10, chi phí di chuyển là hiệu tuyệt đối.
- Luôn có 4 lần nhấn, cộng thêm tổng quãng đường di chuyển.

## Ý tưởng

Chi phí = `4` (số lần nhấn) + `|d[0] - 1|` + tổng `|d[i] - d[i-1]|`, với '0' quy thành 10.

## Độ phức tạp

- Thời gian: `O(4)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Phải nhớ **con trỏ bắt đầu ở phím 1**, không phải phím đầu tiên của chuỗi.
- Quy đổi '0' thành 10 là mấu chốt — coi nó là 0 sẽ sai hết.

## Bài học

Bàn phím/vòng số: đổi ký hiệu sang giá trị vị trí trước, rồi bài toán thành khoảng cách trên đường thẳng.
