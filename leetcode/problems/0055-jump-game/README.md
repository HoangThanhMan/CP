# Jump Game

- **Nguồn:** https://leetcode.com/problems/jump-game/
- **Độ khó:** Medium
- **Tags:** `greedy` `array`
- **Ngày giải:** 2026-07-29
- **Kết quả:** CHƯA GIẢI — file code rỗng

> File chỉ có phần include, chưa có lời giải. Phần dưới là hướng làm để quay lại sau.

## Đề bài (tóm tắt)

Mảng `nums`, đứng ở vị trí `i` nhảy được tối đa `nums[i]` bước. Bắt đầu ở vị trí 0, hỏi có tới được vị trí cuối không.

## Quan sát

- Không cần biết nhảy **thế nào**, chỉ cần biết **xa nhất tới đâu**.
- Nếu tại vị trí `i` mà tầm với xa nhất vẫn `< i` thì kẹt vĩnh viễn.

## Ý tưởng

Duyệt một lượt, giữ biến `reach = max(reach, i + nums[i])`. Nếu `i > reach` thì trả `false`. Đi hết mảng mà không kẹt thì `true`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Phải kiểm tra `i > reach` **trước** khi cập nhật `reach` bằng `nums[i]`.
- Quy hoạch động `O(N^2)` cũng đúng nhưng thừa — tham lam đủ.

## Bài học

Bài về khả năng đi tới: thay vì mô phỏng mọi đường đi, chỉ theo dõi **biên xa nhất** đạt được. Cùng mẫu này giải luôn Jump Game II.
