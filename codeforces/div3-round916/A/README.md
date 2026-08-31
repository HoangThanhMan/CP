# Problemsolving Log (1914A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `counting` `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Chuỗi các chữ cái, chữ `A` là bài 1 tốn 1 phút, `B` là bài 2 tốn 2 phút, ... Đếm số bài giải xong (số phút dành cho bài đó >= chỉ số bài).

## Quan sát

- Chỉ cần bảng tần suất, không quan tâm thứ tự.
- Bài thứ `k` (chữ cái thứ `k`) cần `k` phút.

## Ý tưởng

Đếm tần suất từng chữ cái, đếm số chữ có `tần suất >= vị trí trong bảng chữ cái`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(26)`

## Bài học

Hễ đề không quan tâm thứ tự thì bảng tần suất là bước đầu tiên.
