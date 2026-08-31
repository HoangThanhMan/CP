# Don't Try to Count (1881A)

- **Nguồn:** https://codeforces.com/contest/1881/problem/A
- **Độ khó:** Div3 A
- **Tags:** `strings` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho chuỗi `x` và `s`. Mỗi thao tác nhân đôi `x` (`x += x`). Cần ít nhất bao nhiêu thao tác để `s` là chuỗi con của `x`, hoặc -1.

## Quan sát

- Độ dài `x` và `s` đều nhỏ (<= 25), nên sau vài lần nhân đôi `x` đã dài hơn `s` rất nhiều.
- Nếu sau khoảng 5-6 lần vẫn không chứa `s` thì mãi mãi không chứa.

## Ý tưởng

Lặp: kiểm tra `s` có nằm trong `x` không (dùng `x.find(s)`); chưa thì nhân đôi `x` và tăng bộ đếm. Vượt ngưỡng an toàn thì trả -1.

## Độ phức tạp

- Thời gian: `O(giới hạn * |x| * |s|)`
- Bộ nhớ: `O(|x|)`

## Cạm bẫy

- Ngưỡng dừng phải đủ lớn để chắc chắn; code dùng `x.size()/s.size() > 10`, hơi tuỳ tiện — an toàn hơn là lặp cố định 6 lần rồi kết luận.
- `x.substr(i, m)` khi `i + m` vượt độ dài sẽ trả chuỗi ngắn hơn chứ không lỗi — dùng `x.find(s) != string::npos` sạch hơn.

## Bài học

Khi độ dài nhân đôi mỗi bước, số bước cần thiết là logarit và rất nhỏ — cứ đặt một ngưỡng cố định rộng rãi rồi kết luận.
