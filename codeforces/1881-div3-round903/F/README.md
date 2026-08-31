# Minimum Maximum Distance (1881F)

- **Nguồn:** https://codeforces.com/contest/1881/problem/F
- **Độ khó:** Div3 F
- **Tags:** `trees` `bfs` `dp-on-trees`
- **Ngày giải:** 2026-07-29
- **Kết quả:** CHƯA GIẢI — mới đọc input, chưa có thuật toán

> Code mới dừng ở phần đọc đồ thị, hàm `DFS()` còn rỗng. Phần dưới là hướng làm.

## Đề bài (tóm tắt)

Cây `n` đỉnh với `k` đỉnh được đánh dấu. Tìm đỉnh sao cho khoảng cách tới đỉnh đánh dấu **xa nhất** là nhỏ nhất; in khoảng cách đó.

## Quan sát

- Đây là bài tìm 'tâm' theo tập đỉnh đánh dấu — tương tự đường kính cây.
- Mẹo hai lần BFS: từ một đỉnh đánh dấu bất kỳ, BFS tìm đỉnh đánh dấu xa nhất `u`; từ `u` BFS tìm đỉnh đánh dấu xa nhất `v`. Đáp án là `ceil(dist(u,v) / 2)`.
- Cách khác: DP trên cây hai chiều (xuống rồi lên) để tính khoảng cách xa nhất tới đỉnh đánh dấu cho **mọi** đỉnh.

## Ý tưởng

Dùng mẹo hai lần BFS ở trên. Đáp án `(dist(u, v) + 1) / 2`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Code hiện tại khai báo `vector<int> g[200000]` **trong vòng lặp test** — cấp phát lại 200 nghìn vector mỗi test, cực chậm. Phải khai báo ngoài và chỉ xoá phần đã dùng.
- `marked` và `dist` là mảng cục bộ chưa khởi tạo — giá trị rác.
- Đọc `n` cạnh trong khi cây chỉ có `n - 1` cạnh.

## Bài học

'Đường kính cây' và biến thể của nó đều giải được bằng mẹo hai lần BFS. Nhớ mẫu này, nó xuất hiện liên tục ở các bài cây.
