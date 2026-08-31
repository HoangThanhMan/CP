# Divide and Equalize (1881D)

- **Nguồn:** https://codeforces.com/contest/1881/problem/D
- **Độ khó:** Div3 D
- **Tags:** `number-theory` `factorization` `sieve`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho N số. Mỗi thao tác lấy một ước của `a[i]` chuyển sang `a[j]`. Hỏi có thể làm mọi số bằng nhau không.

## Quan sát

- Thao tác chỉ **di chuyển** thừa số nguyên tố giữa các phần tử, không tạo/xoá.
- Vậy điều kiện cần và đủ: với mỗi số nguyên told `p`, tổng số mũ của `p` trên toàn mảng phải chia hết cho `N`.
- Cần phân tích thừa số nhanh cho tới `10^5` số -> **sàng ước nguyên tố nhỏ nhất** (smallest prime factor).

## Ý tưởng

Sàng SPF tới `max(a)`. Phân tích từng số bằng cách chia liên tiếp cho `spf[num]`, cộng dồn số mũ vào map. Kiểm tra mọi số mũ chia hết `N`.

## Độ phức tạp

- Thời gian: `O(maxA log log maxA + N log maxA)`
- Bộ nhớ: `O(maxA)`

## Cạm bẫy

- **Dựng lại sàng trong mỗi test case** như code hiện tại rất chậm khi có nhiều test. Nên sàng **một lần** tới `10^5` ở ngoài `main`.
- Vòng kiểm tra `for(i = 2; i <= Max; i++)` cũng chạy lại mỗi test — nên duyệt trực tiếp trên map.
- *(Trước đây file thiếu `#include <climits>` nên không biên dịch được — đã sửa.)*

## Bài học

Thao tác 'chuyển ước qua lại' = bảo toàn tổng số mũ nguyên tố. Hễ thấy phép biến đổi bảo toàn một đại lượng, hãy tìm ngay **bất biến** đó — nó thường chính là lời giải.
