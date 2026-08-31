# Counting Liars

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `brute-force` `sorting`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

N con bò, mỗi con nói vị trí Bessie 'lớn hơn (G)' hoặc 'nhỏ hơn (L)' một mốc p. Tìm số ít nhất con phải nói dối, tương đương tìm vị trí đặt Bessie sao cho nhiều lời khai đúng nhất.

## Quan sát

- Chỉ có `N` mốc, nên chỉ có `O(N)` khoảng vị trí thực sự khác nhau cho Bessie.
- Với mỗi vị trí ứng viên, đếm lời khai sai là `O(N)`.

## Ý tưởng

Thử tất cả vị trí ứng viên (các mốc p và ngay cạnh chúng). Với mỗi ứng viên, đếm số lời khai mâu thuẫn; lấy giá trị nhỏ nhất. Vì `N <= 1000`, `O(N^2)` là đủ.

## Độ phức tạp

- Thời gian: `O(N^2)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Vị trí đúng có thể nằm *giữa* hai mốc, không nhất thiết trùng một mốc — phải xét cả khoảng.
- Code hiện tại dùng `map<int,char>` nên hai lời khai cùng mốc p sẽ đè lên nhau, mất thông tin.

## Bài học

Khi số 'trạng thái đáng thử' bị chặn bởi số mốc trong input, cứ liệt kê hết các mốc rồi thử — không cần thuật toán tinh vi.
