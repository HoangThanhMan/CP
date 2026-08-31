# 1D Eraser (1873D)

- **Nguồn:** https://codeforces.com/contest/1873/problem/D
- **Độ khó:** Div4 D
- **Tags:** `greedy` `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Chuỗi gồm `W` và `B`. Mỗi thao tác tẩy trắng một đoạn liên tiếp độ dài `k`. Cần ít nhất bao nhiêu thao tác để hết `B`.

## Quan sát

- Tham lam từ trái sang: gặp `B` đầu tiên thì đặt đoạn tẩy **bắt đầu ngay tại đó** — phủ được nhiều nhất về bên phải.
- Đặt lệch sang trái chỉ lãng phí vì bên trái đã sạch.

## Ý tưởng

Duyệt `i`; gặp `B` thì tăng bộ đếm và nhảy `i += k`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Nhảy phải là `i += k - 1` khi vòng `for` còn `i++` nữa — code viết đúng như vậy.

## Bài học

Phủ đoạn bằng cửa sổ độ dài cố định: luôn đặt cửa sổ bắt đầu tại phần tử chưa phủ **trái nhất**. Đây là lập luận tham lam chuẩn, chứng minh bằng đối sánh.
