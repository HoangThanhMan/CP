# Peak (ABC326 C)

- **Nguồn:** https://atcoder.jp/contests/abc326/tasks/abc326_c
- **Độ khó:** ABC C
- **Tags:** `sorting` `two-pointers` `sliding-window`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

N món quà ở các toạ độ. Chọn một đoạn nửa mở độ dài M là `[x, x+M)`. Tìm số quà nhiều nhất có thể phủ được.

## Quan sát

- Đoạn tối ưu luôn có thể đẩy sao cho đầu trái trùng một món quà — nên chỉ cần thử N vị trí.
- Sau khi sắp xếp, số quà trong `[v[i], v[i]+M)` là một cửa sổ trượt: `r` chỉ tăng khi `i` tăng.

## Ý tưởng

Sắp xếp toạ độ. Dùng two pointers: với mỗi `i`, đẩy `r` tới khi `v[r] >= v[i] + M`; đáp án là `max(r - i)`.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Đoạn là **nửa mở**: quà ở đúng `v[i] + M` không được tính.
- Code thêm phần tử canh `9000000000000` vào `vector<int>` — giá trị này **tràn `int`**. Phải khai báo `vector<long long>` hoặc dùng canh nhỏ hơn.

## Bài học

'Chọn cửa sổ độ dài cố định phủ nhiều điểm nhất' = sắp xếp + two pointers. Mẫu này lặp lại rất nhiều.
