# Dragons (230A)

- **Nguồn:** https://codeforces.com/problemset/problem/230/A
- **Độ khó:** 800
- **Tags:** `greedy` `sorting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hiệp sĩ có sức mạnh `s`, đánh `n` con rồng. Thắng con có sức mạnh `x` nếu `s > x`, sau đó được cộng `y`. Hỏi có thắng hết không.

## Quan sát

- Tham lam: đánh rồng theo thứ tự **sức mạnh tăng dần** — nếu thứ tự nào thắng được thì thứ tự này cũng thắng được.
- Vì sức mạnh chỉ tăng, đánh con yếu trước luôn tốt nhất.

## Ý tưởng

Sắp xếp rồng theo sức mạnh tăng dần, duyệt: nếu `s <= x` thì thua, ngược lại `s += y`.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Điều kiện thắng là **`s > x`** chứ không phải `s >= x` — đọc kỹ đề.
- `s` có thể vượt `int` sau nhiều lần cộng.

## Bài học

Bài 'tích luỹ sức mạnh': luôn sắp xếp theo ngưỡng tăng dần. Đổi thứ tự không bao giờ giúp được vì sức mạnh chỉ tăng.
