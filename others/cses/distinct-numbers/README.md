# Distinct Numbers (CSES)

- **Nguồn:** https://cses.fi/problemset/task/1621
- **Độ khó:** CSES Sorting & Searching
- **Tags:** `sorting` `set`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho N số, đếm số giá trị phân biệt.

## Quan sát

- `set` tự loại trùng — một dòng là xong.
- Cách nhanh hơn (tránh cây cân bằng): sắp xếp rồi đếm số vị trí `v[i] != v[i-1]`.

## Ý tưởng

Nhét hết vào `set` rồi in `size()`.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- `N` tới `2*10^5` nên `set` vẫn kịp, nhưng với `10^6` thì `sort` + đếm hoặc `unordered_set` sẽ an toàn hơn về thời gian.

## Bài học

'Đếm giá trị phân biệt' = `set`, hoặc `sort` + `unique`. Nhớ cả hai vì giới hạn quyết định chọn cái nào.
