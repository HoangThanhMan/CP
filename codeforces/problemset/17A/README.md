# Noldbach problem (17A)

- **Nguồn:** https://codeforces.com/problemset/problem/17/A
- **Độ khó:** ?
- **Tags:** `sieve` `number-theory`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Đếm số nguyên tố `<= n` viết được dưới dạng tổng của **hai số nguyên tố liền kề** cộng 1. Hỏi số đó có `>= k` không.

## Quan sát

- Sàng nguyên tố tới `n` trước.
- Duyệt các cặp nguyên tố liền kề trong danh sách, kiểm tra `p[i] + p[i+1] + 1` có nguyên tố và `<= n` không.

## Ý tưởng

Sàng Eratosthenes, gom danh sách nguyên tố, duyệt cặp liền kề và đếm.

## Độ phức tạp

- Thời gian: `O(N log log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Kiểm tra `arr[sum+1] && sum+1 <= n` sai thứ tự** — phải kiểm tra biên **trước** khi truy cập mảng, nếu không sẽ đọc ngoài mảng. Đổi thành `sum+1 <= n && arr[sum+1]`.
- Cách quản lý `cnt`/`sum` trong code khá rối; gom danh sách nguyên tố vào `vector` rồi duyệt cặp `(p[i], p[i+1])` sẽ rõ hơn nhiều.

## Bài học

Trong C/C++, `&&` đánh giá ngắn mạch từ trái sang — **luôn đặt kiểm tra biên ở vế trái**. Đây là lỗi đọc ngoài mảng kinh điển.
