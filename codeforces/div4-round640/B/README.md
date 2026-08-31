# Same Parity Summands (1352B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 B
- **Tags:** `math` `constructive` `parity`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Viết `n` thành tổng đúng `k` số nguyên dương **cùng tính chẵn lẻ**.

## Quan sát

- Toàn số lẻ: dùng `k-1` số 1, số cuối là `n - (k-1)`; cần nó dương và **lẻ**.
- Toàn số chẵn: dùng `k-1` số 2, số cuối là `n - 2(k-1)`; cần nó dương và **chẵn**.
- Chỉ có đúng hai phương án này, thử cả hai là đủ.

## Ý tưởng

Thử phương án toàn lẻ trước, rồi phương án toàn chẵn; không phương án nào được thì NO.

## Độ phức tạp

- Thời gian: `O(K)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Phải kiểm tra **cả hai** điều kiện: dương và đúng tính chẵn lẻ.
- Tính chẵn lẻ của `n` và `k` quyết định phương án nào khả thi — viết bảng ra giấy sẽ thấy ngay.

## Bài học

Bài dựng tổng với ràng buộc chẵn lẻ: dùng `k-1` phần tử nhỏ nhất có thể (1 hoặc 2), dồn hết phần dư vào phần tử cuối. Rồi chỉ kiểm tra phần tử cuối.
