# Shell Game

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `simulation` `brute-force`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Trò úp vỏ sò: N lượt tráo hai vỏ, mỗi lượt Bessie đoán một vỏ. Không biết viên sỏi ban đầu ở vỏ nào; tìm số lần đoán đúng nhiều nhất có thể.

## Quan sát

- Chỉ có 3 vị trí ban đầu khả dĩ — thử cả 3 rồi lấy max.
- Thay vì chạy lại mô phỏng 3 lần, có thể theo dõi cả 3 viên sỏi cùng lúc: mảng `shell[i]` cho biết vỏ ở vị trí `i` hiện đang chứa viên sỏi xuất phát từ đâu.

## Ý tưởng

Giữ mảng hoán vị `shell[]` khởi tạo `shell[i] = i`. Mỗi lượt tráo thì `swap(shell[a], shell[b])`; nếu Bessie đoán vị trí `g` thì viên sỏi xuất phát `shell[g]` được cộng một điểm. Cuối cùng lấy max trên 3 điểm số.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Đề đánh số vỏ từ 1, code dùng chỉ số từ 0 — nhớ `--a; --b; --g;`.

## Bài học

Khi cần thử vài trạng thái ban đầu, thay vì chạy mô phỏng nhiều lần, hãy mô phỏng **một lần** trên một hoán vị theo dõi tất cả xuất phát điểm cùng lúc.
