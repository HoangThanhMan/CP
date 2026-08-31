# ab (ABC327 A)

- **Nguồn:** https://atcoder.jp/contests/abc327/tasks/abc327_a
- **Độ khó:** ABC A
- **Tags:** `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho chuỗi S, hỏi có tồn tại hai ký tự liền nhau là 'ab' hoặc 'ba' không.

## Quan sát

- Chỉ cần quét một lượt và nhìn từng cặp liền kề.

## Ý tưởng

Duyệt `i` từ 1, kiểm tra `(s[i], s[i-1])` có phải cặp a-b theo thứ tự nào đó không.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Bài học

Bài 'có tồn tại cặp liền kề thoả điều kiện' luôn là một vòng quét đơn giản — đừng phức tạp hoá.
