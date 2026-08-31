# Sakurako and Water (2033B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `greedy` `matrix` `diagonals`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Ma trận `n x n`. Mỗi thao tác cộng 1 vào mọi ô của một hình vuông con nằm trên đường chéo chính. Tìm số thao tác ít nhất để không còn giá trị âm.

## Quan sát

- Mỗi thao tác chỉ ảnh hưởng các ô trên **cùng một đường chéo** (theo hướng chéo chính).
- Các đường chéo độc lập nhau -> tối ưu từng đường chéo riêng.
- Trên một đường chéo, số thao tác cần là `|giá trị âm nhỏ nhất|`.

## Ý tưởng

Với mỗi đường chéo (xác định bởi ô bắt đầu ở hàng 0 hoặc cột 0), tìm giá trị âm nhỏ nhất, cộng trị tuyệt đối của nó vào đáp án.

## Độ phức tạp

- Thời gian: `O(N^2)`
- Bộ nhớ: `O(N^2)`

## Cạm bẫy

- Liệt kê đường chéo đúng một lần: xuất phát từ `(i, 0)` và `(0, j)`, nhớ **không đếm hai lần** đường chéo chính `(0,0)`.
- Mảng `long long a[501][501]` khai báo trong vòng lặp test — 2MB trên stack mỗi test, dễ tràn. Nên khai báo toàn cục.

## Bài học

Thao tác chỉ ảnh hưởng một đường chéo -> bài rã thành các bài con độc lập theo đường chéo. Luôn tìm cách tách bài toán theo chiều mà các phần không ảnh hưởng nhau.
