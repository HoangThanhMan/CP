# The Bovine Shuffle

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `permutation` `simulation`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Một phép xáo trộn cố định `a[]` được áp dụng 3 lần: bò ở vị trí `i` chuyển sang vị trí `a[i]`. Cho thứ tự bò **sau** 3 lần xáo, tìm thứ tự ban đầu.

## Quan sát

- Đây là bài **đảo ngược hoán vị**. Xuôi là `new[a[i]] = old[i]`, nên ngược là `old[i] = new[a[i]]`.
- Không cần dựng hoán vị nghịch đảo tường minh — công thức ngược đã đủ gọn.

## Ý tưởng

Lặp 3 lần: `past[i] = id[a[i] - 1]`, rồi gán `id = past`. In `id`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Dễ nhất là làm nhầm chiều: viết `past[a[i]-1] = id[i]` là đi xuôi chứ không phải đi ngược.
- Chỉ số của đề bắt đầu từ 1, phải trừ 1.
- *(File này trước đây bị cắt cụt giữa dòng nên không biên dịch được — đã sửa.)*

## Bài học

Với hoán vị, luôn viết rõ ra giấy 'phần tử ở vị trí i đi đâu' trước khi code. Đảo chiều một hoán vị là đổi vế trái phải của phép gán.
