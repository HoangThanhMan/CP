# Cow Gymnastics

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `brute-force` `set` `pairs`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

K buổi tập, mỗi buổi là một hoán vị xếp hạng N con bò. Đếm số cặp (a, b) mà a luôn xếp trên b ở **mọi** buổi.

## Quan sát

- `N, K <= 10..20` nên duyệt hết mọi cặp ở mọi buổi (`O(K*N^2)`) là thoải mái.
- 'Luôn đúng ở mọi buổi' = giao của các tập cặp, hoặc loại dần cặp bị phản chứng.

## Ý tưởng

Với mỗi buổi, xét mọi cặp vị trí `(i, j)` với `i < j` để biết ai trên ai. Giữ tập các cặp có thứ tự còn nhất quán; hễ gặp một buổi cho thứ tự ngược lại thì loại cặp đó vĩnh viễn. Đáp án là số cặp còn lại.

## Độ phức tạp

- Thời gian: `O(K*N^2 log)`
- Bộ nhớ: `O(N^2)`

## Cạm bẫy

- Phải loại cặp **vĩnh viễn** khi thấy mâu thuẫn, nếu chỉ xoá khỏi tập hiện tại thì buổi sau nó chèn lại được — đó là lý do code dùng thêm tập `used`.

## Bài học

Bài 'điều kiện đúng với mọi lần thử': nghĩ theo hướng *loại trừ* (bắt đầu từ tất cả rồi gạch dần) thường gọn hơn nghĩ theo hướng tích luỹ.
