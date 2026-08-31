# AMR11E — Distinct Primes (SPOJ)

- **Nguồn:** https://www.spoj.com/problems/AMR11E/
- **Độ khó:** Dễ
- **Tags:** `sieve` `number-theory` `precomputation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tìm số nhỏ nhất thứ N có ít nhất 3 ước nguyên tố phân biệt.

## Quan sát

- Số nhỏ nhất có 3 ước nguyên tố phân biệt là `2*3*5 = 30`.
- Đáp án thứ 1000 vẫn dưới 2700 — nên **tiền xử lý một lần** rồi trả lời mọi truy vấn trong `O(1)`.
- Sàng biến thể: thay vì đánh dấu hợp số, **đếm** số ước nguyên tố phân biệt của từng số.

## Ý tưởng

Sàng tới 2700: với mỗi `i` chưa bị chạm (tức `i` nguyên tố), cộng 1 vào `was[j]` cho mọi bội `j` của `i`. Sau đó `was[x]` chính là số ước nguyên tố phân biệt của `x`. Gom các `x` có `was[x] >= 3` vào mảng theo thứ tự tăng dần, trả lời truy vấn bằng tra bảng.

## Độ phức tạp

- Thời gian: `O(L log log L) tiền xử lý + O(1) mỗi truy vấn`
- Bộ nhớ: `O(L)`

## Cạm bẫy

- Code có hai bản: `solve1` (sàng đếm ước, đúng và nhanh) và `solve2` (dựng lại sàng trong **mỗi** truy vấn, rất chậm và sàng cũng viết sai với `j *= i` thay vì `j += i`). `main` gọi `solve1` — bản đúng. Nên xoá `solve2` đi.
- Chặn trên 2700 chỉ đủ cho `N <= 1000`; đọc kỹ ràng buộc trước khi tin.

## Bài học

Sàng không chỉ để tìm nguyên tố: đổi phép gán thành phép **cộng dồn** là có ngay số ước nguyên tố phân biệt của mọi số. Rất hay dùng.
