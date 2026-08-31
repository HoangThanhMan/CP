# Fence Painting

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `intervals` `geometry`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai đoạn `[a, b]` và `[c, d]` trên trục số được sơn. Tính tổng độ dài phần được sơn (hợp hai đoạn).

## Quan sát

- Chỉ có hai khả năng: hai đoạn giao nhau, hoặc rời nhau.
- Giao nhau -> hợp là `max(b, d) - min(a, c)`. Rời nhau -> hợp là `(b-a) + (d-c)`.
- Điều thú vị: **đáp án luôn là min của hai biểu thức đó**, không cần `if`.

## Ý tưởng

In ra `min(max(b, d) - min(a, c), (b - a) + (d - c))`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Nếu có nhiều hơn hai đoạn thì mẹo này sập — khi đó phải sắp xếp rồi gộp đoạn (interval merging).

## Bài học

Với đúng hai đoạn, hợp = `min(bao ngoài, tổng độ dài)`. Mẹo nhỏ nhưng tránh được một đống `if`.
