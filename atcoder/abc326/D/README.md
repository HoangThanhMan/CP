# ABC Puzzle (ABC326 D)

- **Nguồn:** https://atcoder.jp/contests/abc326/tasks/abc326_d
- **Độ khó:** ABC D
- **Tags:** `constructive` `backtracking` `grid`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Điền lưới `N x N` (N <= 5) bằng A, B, C và dấu chấm sao cho mỗi hàng và mỗi cột chứa đúng một A, một B, một C; đồng thời ký tự đầu tiên của hàng `i` phải là `R[i]`, của cột `i` phải là `C[i]`.

## Quan sát

- `N <= 5` nên quay lui (backtracking) là lời giải chuẩn của bài này.
- Điều kiện cần hiển nhiên: cả `R` và `C` phải dùng đủ 3 ký tự, và `R[0] == C[0]` (ô góc).

## Ý tưởng

Cách chuẩn: quay lui từng ô, giữ mảng đánh dấu ký tự đã dùng theo hàng và theo cột, kiểm tra ràng buộc 'ký tự đầu tiên' khi hoàn tất mỗi hàng/cột.

## Độ phức tạp

- Thời gian: `O(4^(N^2)) trường hợp xấu nhất, thực tế cắt tỉa rất mạnh`
- Bộ nhớ: `O(N^2)`

## Cạm bẫy

- **Code hiện tại dùng heuristic tham lam chứ không quay lui** — đặt ký tự đầu cho hàng/cột rồi lấp phần còn lại theo thứ tự A, B, C. Cách này không bảo đảm đúng với mọi input; nên viết lại bằng quay lui.
- Điều kiện `R[0] == C[0]` là cần nhưng **không đủ** để kết luận 'Yes'.

## Bài học

`N <= 5` gần như luôn là tín hiệu quay lui. Heuristic tham lam ở bài dựng hình rất dễ sai ở test biên.
