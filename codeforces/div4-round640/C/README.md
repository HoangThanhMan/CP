# K-th Not Divisible by n (1352C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 C
- **Tags:** `math` `binary-search`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tìm số thứ `k` trong dãy các số nguyên dương **không** chia hết cho `n`.

## Quan sát

- Trong mỗi khối `n` số liên tiếp có đúng `n - 1` số không chia hết cho `n`.
- Vậy đáp án là `k` cộng với số bội của `n` đã bị bỏ qua, tức `k + (k-1) / (n-1)`.

## Ý tưởng

In `k + (k - 1) / (n - 1)`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Cách khác an toàn hơn khi không chắc công thức: binary search giá trị `x` nhỏ nhất sao cho `x - x/n >= k`.
- `n = 1` sẽ chia cho 0 — đề thường loại, nhưng nên kiểm tra.

## Bài học

'Phần tử thứ k của dãy sau khi loại bỏ một số phần tử' luôn có hai lời giải: công thức đếm, hoặc binary search trên đáp án. Binary search chậm hơn nhưng khó sai hơn.
