# Block Sequence (1881E)

- **Nguồn:** https://codeforces.com/contest/1881/problem/E
- **Độ khó:** Div3 E
- **Tags:** `dp` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** CHƯA GIẢI — file code rỗng

> File rỗng, chưa có lời giải. Phần dưới là hướng làm để quay lại sau.

## Đề bài (tóm tắt)

Dãy gọi là 'đẹp' nếu chia được thành các khối, mỗi khối bắt đầu bằng số bằng đúng độ dài phần còn lại của khối. Tìm số phần tử ít nhất phải xoá để dãy trở nên đẹp.

## Quan sát

- Nghĩ từ **phải sang trái**: `dp[i]` = số phần tử ít nhất phải xoá trong hậu tố bắt đầu từ `i`.
- Tại `i` có hai lựa chọn: xoá `a[i]` (`dp[i+1] + 1`), hoặc dùng `a[i]` làm đầu khối (`dp[i + a[i] + 1]`, nếu chỉ số hợp lệ).

## Ý tưởng

Quy hoạch động hậu tố: `dp[n] = 0`; `dp[i] = min(dp[i+1] + 1, dp[i + a[i] + 1])`. Đáp án `dp[0]`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Kiểm tra `i + a[i] + 1 <= n` trước khi truy cập.
- Đi từ phải sang trái là mấu chốt — đi từ trái sang sẽ không có tính chất con tối ưu.

## Bài học

Bài 'chia dãy thành khối' hầu như luôn là DP một chiều theo tiền tố hoặc hậu tố. Chọn chiều sao cho lựa chọn tại mỗi vị trí chỉ nhìn về một phía.
