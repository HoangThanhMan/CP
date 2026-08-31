# Sale (34B)

- **Nguồn:** https://codeforces.com/problemset/problem/34/B
- **Độ khó:** 800
- **Tags:** `greedy` `sorting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho giá `m` chiếc TV (có thể âm — nghĩa là được trả tiền để nhận). Mua tối đa `n` chiếc, tối đa hoá tiền kiếm được.

## Quan sát

- Chỉ nên nhận các TV **giá âm**, và nhận những cái âm nhất trước.
- Sắp xếp tăng dần rồi lấy `n` phần tử đầu, nhưng dừng khi gặp số không âm.

## Ý tưởng

Sắp xếp tăng dần, cộng `-v[i]` cho `n` phần tử đầu mà `v[i] < 0`.

## Độ phức tạp

- Thời gian: `O(M log M)`
- Bộ nhớ: `O(M)`

## Cạm bẫy

- Phải dừng ở phần tử không âm — nhận TV giá dương làm giảm lợi nhuận. Code có kiểm tra `v[i] < 0`, đúng.
- Tên biến `m`, `n` trong code đọc ngược thứ tự đề — dễ gây nhầm khi đọc lại.

## Bài học

Bài tham lam có giá âm: sắp xếp tăng dần, lấy các phần tử âm, **dừng khi hết âm**. Đừng lấy đủ `n` phần tử một cách máy móc.
