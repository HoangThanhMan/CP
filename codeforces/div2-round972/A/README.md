# Simple Palindrome (Round 972 Div2 A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div2 A
- **Tags:** `constructive` `strings` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Dựng chuỗi độ dài `n` chỉ gồm nguyên âm `aeiou`, sao cho số dãy con đối xứng (palindromic subsequence) là ít nhất.

## Quan sát

- Dãy con đối xứng sinh ra từ các ký tự **giống nhau**; muốn ít thì phải chia đều 5 nguyên âm.
- Và phải nhóm các ký tự giống nhau **liền khối** (`aaabbbccc...`), không xen kẽ.
- Chia `n` cho 5, phần dư rải cho các nhóm đầu.

## Ý tưởng

Chia `n` thành 5 nhóm chênh nhau nhiều nhất 1, in lần lượt `a...a b...b ... u...u`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Trường hợp `n < 5` phải xét riêng (mỗi nguyên âm nhiều nhất một lần) — code có nhánh riêng, đúng.
- Phân bổ phần dư phải đều, dồn hết vào một nhóm sẽ không tối ưu.

## Bài học

Bài dựng hình 'ít cấu trúc lặp nhất': chia đều các ký tự và gom thành khối. Xen kẽ hầu như luôn tạo ra **nhiều** dãy con hơn, không phải ít hơn.
