# Power of Large Numbers

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Medium
- **Tags:** `number-theory` `modular-arithmetic` `fermat`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho hai số nguyên rất lớn a và b (tới 100000 chữ số, đưa vào dạng chuỗi), tính `a^b mod (10^9 + 7)`.

## Quan sát

- Cơ số rút gọn được trực tiếp: đọc chuỗi và lấy dư dần theo `M = 10^9+7`.
- Số mũ **không** rút gọn theo `M` được. Theo định lý Fermat nhỏ, vì `M` nguyên tố nên `a^b ≡ a^(b mod (M-1)) (mod M)` — số mũ rút gọn theo `M - 1`.
- Đây là mấu chốt của bài: hai mô-đun khác nhau cho cơ số và số mũ.

## Ý tưởng

Đọc `a` theo từng chữ số, tính `a mod M` bằng Horner. Đọc `b` tương tự nhưng lấy dư theo `M - 1`. Rồi luỹ thừa nhanh (bình phương liên tiếp).

## Độ phức tạp

- Thời gian: `O(|a| + |b| + log M)`
- Bộ nhớ: `O(|a| + |b|)`

## Cạm bẫy

- Fermat chỉ áp dụng được khi `gcd(a, M) = 1`. Với `M` nguyên tố thì chỉ hỏng khi `a` chia hết cho `M` — cần xét riêng nếu đề cho phép.
- Số mũ lấy dư theo `M - 1`, **không phải** `M`. Nhầm chỗ này là sai toàn bộ.
- Phép nhân trong luỹ thừa nhanh phải là `long long`, nếu không tràn ngay.

## Bài học

Số mũ khổng lồ + mô-đun nguyên tố = định lý Fermat nhỏ, rút số mũ theo `M - 1`. Đây là một trong những công cụ số học hay gặp nhất.
