# Special Elements (1352E)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 E
- **Tags:** `prefix-sum` `brute-force` `counting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Đếm số phần tử của mảng bằng tổng của một đoạn con liên tiếp có độ dài ít nhất 2.

## Quan sát

- `n <= 8000` và tổng `n` bị chặn, nên duyệt hết `O(N^2)` đoạn là chấp nhận được.
- Tổng đoạn vượt `n` thì không thể là giá trị nào trong mảng (vì `a[i] <= n`) — cắt sớm.
- Dùng mảng đếm `cnt[value]` để cộng một lần rồi **xoá** (`cnt[sum] = 0`), tránh đếm cùng một phần tử nhiều lần.

## Ý tưởng

Duyệt mọi cặp `(i, j)` với `j > i`, cộng dồn tổng; nếu tổng `<= n` thì cộng `cnt[tổng]` vào đáp án rồi gán `cnt[tổng] = 0`.

## Độ phức tạp

- Thời gian: `O(N^2)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Bỏ qua đoạn độ dài 1 (`i == j`) — code có `continue`, đúng.
- Mẹo `cnt[sum] = 0` sau khi cộng là mấu chốt; quên nó sẽ đếm trùng.

## Bài học

'Đếm phần tử thoả một tính chất, mỗi phần tử tính một lần' — dùng mảng đếm rồi **xoá sau khi dùng**. Kỹ thuật nhỏ nhưng tránh được lỗi đếm trùng.
