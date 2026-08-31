# KTSMT — Luỹ thừa với số mũ khổng lồ (VNOI)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Vừa
- **Tags:** `modular-arithmetic` `fast-power` `big-numbers`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho `a`, `b` là các số rất lớn (dạng chuỗi) và mô-đun `c`. Tính `a^b mod c`.

## Quan sát

- Cơ số rút gọn được ngay bằng Horner: `x = (x*10 + chữ số) % c`.
- Số mũ quá lớn để rút gọn, nhưng có thể xử lý **từng chữ số**: `a^(d1 d2 ... dk) = ((a^d1)^10 * a^d2)^10 * ...`
- Cách này không cần tới định lý Fermat nên đúng với **mọi** `c`, kể cả `c` không nguyên tố.

## Ý tưởng

Rút gọn `a` theo `c`. Duyệt các chữ số của `b` từ trái sang: `res = res * power(x, chữ số) % c`, rồi `x = power(x, 10)`. (Cách viết trong code là biến thể tương đương của ý này.)

## Độ phức tạp

- Thời gian: `O(|a| + |b| * log)`
- Bộ nhớ: `O(|a| + |b|)`

## Cạm bẫy

- Cách dùng Fermat (rút số mũ theo `c - 1`) **chỉ đúng khi `c` nguyên tố**. Cách xử lý từng chữ số ở đây tổng quát hơn.
- Mọi phép nhân phải là `long long`, nếu không tràn ngay với `c` cỡ `10^9`.

## Bài học

Có hai cách trị số mũ khổng lồ: Fermat (cần mô-đun nguyên tố) và xử lý từng chữ số (luôn đúng). Biết cả hai và biết khi nào dùng cái nào.
