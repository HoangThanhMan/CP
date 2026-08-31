# Apartments (CSES)

- **Nguồn:** https://cses.fi/problemset/task/1084
- **Độ khó:** CSES Sorting & Searching
- **Tags:** `greedy` `two-pointers` `sorting`
- **Ngày giải:** 2023-12-31
- **Kết quả:** Nghi chưa AC — xem Cạm bẫy

## Đề bài (tóm tắt)

N người mỗi người muốn căn hộ diện tích `a`, M căn hộ có diện tích `b`. Ghép được nếu `|a - b| <= k`. Tìm số cặp ghép được nhiều nhất.

## Quan sát

- Ghép tham lam theo thứ tự tăng dần là tối ưu: người có yêu cầu nhỏ nhất nên lấy căn hộ hợp lệ nhỏ nhất, để dành căn lớn cho người sau.
- Sắp xếp cả hai danh sách rồi đi bằng two pointers là đủ.

## Ý tưởng

Sắp xếp cả mảng người và mảng căn hộ. Hai con trỏ `i`, `j`: nếu `b[j] < a[i] - k` thì căn hộ quá nhỏ, tăng `j`. Nếu `b[j] > a[i] + k` thì người này không có gì hợp, tăng `i`. Ngược lại ghép được, tăng cả hai và đếm.

## Độ phức tạp

- Thời gian: `O(N log N + M log M)`
- Bộ nhớ: `O(N + M)`

## Cạm bẫy

- **Code hiện tại dùng `set` + `upper_bound`/`lower_bound` với logic khá rối và có vẻ sai** (cộng `abs(mp[...] - mp[...]) + 1` vào biến đếm là không hợp lý — đáp án phải tăng 1 mỗi lần ghép). Nên viết lại bằng two pointers cho đúng và dễ soát.
- `set` cũng làm mất căn hộ trùng diện tích.

## Bài học

Bài ghép cặp có ngưỡng sai lệch: sắp xếp hai bên rồi two pointers. Dùng `set` ở đây vừa chậm hơn vừa dễ sai.
