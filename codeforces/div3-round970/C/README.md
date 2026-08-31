# Longest Good Array (2008C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `math` `binary-search` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Dựng dãy tăng dài nhất trong `[l, r]` sao cho hiệu giữa hai phần tử liên tiếp cũng tăng dần (chênh lệch tối thiểu 1, 2, 3, ...).

## Quan sát

- Dãy dài `k` cần ít nhất `1 + 2 + ... + (k-1) = k(k-1)/2` khoảng cách.
- Điều kiện: `l + k(k-1)/2 <= r`. Vế trái tăng theo `k` -> tìm `k` lớn nhất bằng binary search hoặc giải phương trình bậc hai.

## Ý tưởng

Tìm kiếm nhị phân `k` lớn nhất thoả `l + k(k-1)/2 <= r`.

## Độ phức tạp

- Thời gian: `O(log r)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- `mid*(mid+1)/2` tràn `int` rất nhanh — phải `long long`. Code đã dùng đúng.
- Chú ý dùng `k(k-1)/2` hay `k(k+1)/2` tuỳ cách đếm phần tử hay khoảng cách; lệch một đơn vị ở đây là WA.

## Bài học

'Dãy dài nhất với chi phí cộng dồn 1+2+3+...' quy về bất phương trình bậc hai. Binary search an toàn hơn giải công thức vì tránh lỗi làm tròn.
