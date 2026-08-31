# The Corridor or There and Back Again (1872B)

- **Nguồn:** https://codeforces.com/contest/1872/problem/B
- **Độ khó:** Div3 B
- **Tags:** `greedy` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hành lang có các bẫy ở vị trí `d` với thời gian kích hoạt `s`. Đi tới ô `k` rồi phải quay về. Tìm `k` lớn nhất còn thoát được.

## Quan sát

- Với bẫy ở `d` kích hoạt sau `s` giây: đi tới `d` mất `d` giây, muốn về kịp thì `k` phải thoả `2k - d <= d + s - 1`, tức `k <= d + (s - 1) / 2`.
- Đáp án là min của giới hạn do từng bẫy áp đặt.

## Ý tưởng

Với mỗi bẫy tính giới hạn `d + (s - 1) / 2`, lấy min qua tất cả bẫy.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Code duyệt `i` từ 1 tới 10^7** để tìm giới hạn — chậm không cần thiết, chỉ cần duyệt N bẫy.
- Dùng `mp[d]` với `if(mp[d])` sẽ hiểu nhầm giá trị 0 là 'chưa có'.

## Bài học

Ràng buộc 'đi và về' luôn cho bất đẳng thức dạng `2k - d <= ...`. Viết bất đẳng thức ra giấy trước, rồi chỉ việc lấy min/max qua các ràng buộc.
