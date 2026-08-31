# Sequence Game (1862B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `constructive` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Dãy `b` sinh ra từ `a` bằng cách chỉ giữ lại `a[i]` nếu `a[i] >= a[i-1]`. Cho `b`, dựng lại một `a` bất kỳ.

## Quan sát

- Chỗ nào `b[i] >= b[i-1]` thì giữ nguyên, không cần chèn gì.
- Chỗ nào `b[i] < b[i-1]` thì phải chèn một phần tử nhỏ hơn hoặc bằng `b[i]` vào trước — chèn chính `b[i]` là gọn nhất và luôn hợp lệ.

## Ý tưởng

Duyệt `b`; nếu `b[i] < b[i-1]` thì đẩy `b[i]` hai lần, ngược lại đẩy một lần. In độ dài và dãy.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Chèn `b[i] - 1` như code làm cũng đúng, nhưng phải xét riêng `b[i] == 1` để không ra 0 (code có nhánh riêng). Chèn thẳng `b[i]` thì không cần trường hợp riêng nào — gọn hơn.

## Bài học

Bài dựng ngược: chọn phương án chèn **đơn giản nhất còn hợp lệ**, đừng chọn phương án chặt nhất — nó sinh ra trường hợp biên không cần thiết.
