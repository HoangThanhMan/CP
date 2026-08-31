# Two Sum

- **Nguồn:** https://leetcode.com/problems/two-sum/
- **Độ khó:** Easy
- **Tags:** `array` `hash-map`
- **Ngày giải:** 2026-08-31
- **Kết quả:** AC lần 1

> Đây là bài mẫu cho thấy một README bài nên viết như thế nào. Xoá đi khi bạn bắt đầu.

## Đề bài (tóm tắt)

Cho mảng `nums` và số `target`. Trả về chỉ số của hai phần tử có tổng bằng
`target`. Đề bảo đảm có đúng một đáp án và không được dùng cùng một phần tử hai lần.

Ràng buộc: `2 <= n <= 10^4`, `-10^9 <= nums[i], target <= 10^9`.

## Quan sát

- Duyệt hai vòng lặp là `O(n^2)` — với `n = 10^4` thì `10^8` phép, sát giới hạn và thừa thãi.
- Khi đứng ở vị trí `i`, phần tử cần tìm là **xác định**: `target - nums[i]`.
  Vậy câu hỏi thu về "số này đã xuất hiện trước đó chưa?" — đúng việc của hash map.

## Ý tưởng

Duyệt mảng một lần, giữ một map `giá trị -> chỉ số` cho các phần tử **đã đi qua**.
Tại mỗi `i`, tra `target - nums[i]` trong map: có thì trả về ngay cặp chỉ số,
không thì ghi `nums[i] -> i` vào map rồi đi tiếp.

Chỉ tra trong phần đã đi qua nên không bao giờ ghép một phần tử với chính nó,
và cũng không cần kiểm tra trùng chỉ số.

## Độ phức tạp

- Thời gian: `O(n)`
- Bộ nhớ: `O(n)`

## Cạm bẫy

- Ghi vào map **sau** khi tra, không phải trước — nếu không, `nums = [3, 3]`,
  `target = 6` sẽ ghép phần tử với chính nó.
- `nums[i]` tới `10^9`, nhưng ở đây chỉ trừ nên không tràn `int`. Nếu đề đổi
  thành *cộng* hai phần tử để so sánh thì phải dùng `long long`.

## Bài học

Dạng "tìm cặp có tổng cho trước": biến bài toán tìm-kiếm-2-chiều thành
tra-cứu-1-chiều bằng cách hỏi "phần bù của phần tử hiện tại là gì?".
Mẫu này còn dùng cho 3Sum (cố định 1 phần tử rồi Two Sum), subarray-sum-equals-k
(phần bù trên prefix sum).
