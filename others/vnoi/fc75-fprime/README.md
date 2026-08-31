# FPRIME — Kiểm tra nguyên tố (VNOI)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Dễ
- **Tags:** `sieve` `number-theory`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

K truy vấn, mỗi truy vấn hỏi số `n` (nhỏ) có phải số nguyên tố không.

## Quan sát

- Giới hạn nhỏ (tới 100) nên sàng một lần rồi tra bảng.
- Sàng một lần luôn tốt hơn kiểm tra từng số riêng lẻ khi có nhiều truy vấn.

## Ý tưởng

Sàng Eratosthenes tới `maxN` một lần trong `main`, sau đó mỗi truy vấn chỉ tra `isPrimes[n]`.

## Độ phức tạp

- Thời gian: `O(maxN log log maxN + K)`
- Bộ nhớ: `O(maxN)`

## Cạm bẫy

- `memset(isPrimes, true, sizeof(...))` chỉ hoạt động đúng với `bool` vì `true` là byte 0x01 — với `int` thì sai. Dùng `vector<bool> v(n+1, true)` rõ ràng hơn.
- Vòng sàng viết `i*i <= maxN` nhưng mảng chỉ tới `maxN` — cẩn thận lệch biên khi `maxN` là kích thước chứ không phải giá trị lớn nhất.

## Bài học

Nhiều truy vấn trên miền nhỏ = tiền xử lý một lần. Đây là phản xạ cơ bản nhất của số học thi đấu.
