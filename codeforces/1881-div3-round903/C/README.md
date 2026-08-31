# Perfect Square (1881C)

- **Nguồn:** https://codeforces.com/contest/1881/problem/C
- **Độ khó:** Div3 C
- **Tags:** `grid` `greedy` `symmetry`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Ma trận `n x n`. Cần biến nó thành 'hình vuông hoàn hảo': bất biến khi xoay 90 độ. Mỗi thao tác tăng một ký tự lên 1 (`a`->`b`). Tìm số thao tác ít nhất.

## Quan sát

- Phép xoay 90 độ chia ma trận thành các **nhóm 4 ô** phải bằng nhau.
- Trong mỗi nhóm, đích tối ưu là ký tự **lớn nhất** (vì chỉ tăng được, không giảm).
- Chi phí mỗi nhóm là `4*max - tổng`.

## Ý tưởng

Duyệt phần tư trên trái, với mỗi ô lấy ra 4 ô cùng quỹ đạo xoay, cộng `4*max - tổng` vào đáp án.

## Độ phức tạp

- Thời gian: `O(N^2)`
- Bộ nhớ: `O(N^2)`

## Cạm bẫy

- Xác định đúng 4 ô cùng quỹ đạo: `(i,j)`, `(j, n-1-i)`, `(n-1-i, n-1-j)`, `(n-1-j, i)`.
- Duyệt đúng **một phần tư** ma trận, nếu không sẽ đếm mỗi nhóm nhiều lần.
- Mảng `char sq[1007][1007]` khai báo **trong vòng lặp test** — cấp phát 1MB trên stack mỗi test, rất dễ tràn stack. Nên khai báo toàn cục hoặc dùng `vector`.

## Bài học

Bài đối xứng xoay: xác định các **quỹ đạo** (orbit) của phép biến đổi, rồi tối ưu độc lập trên từng quỹ đạo. Ý này dùng cho cả đối xứng gương và đối xứng vòng.
