# Measuring Traffic

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `prefix-sum` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** CHƯA GIẢI — file mới chỉ in "hello"

> File hiện tại là khung rỗng, chưa có lời giải. Phần dưới là hướng làm để quay lại sau.

## Đề bài (tóm tắt)

Cho N đoạn đường, mỗi đoạn hoặc là 'none' (không đổi lưu lượng), hoặc thêm/bớt lưu lượng trong một khoảng `[lo, hi]`. Tìm khoảng lưu lượng khả dĩ ở đầu và ở cuối đường.

## Quan sát

- Lưu lượng ở mỗi điểm là một **khoảng** `[lo, hi]`, không phải một số.
- Đi xuôi từ đầu đường thì các đoạn 'on' cộng vào, 'off' trừ đi; đi ngược thì đảo lại.

## Ý tưởng

Duy trì một khoảng `[lo, hi]`, quét ngược từ cuối lên đầu để ra khoảng ở đầu, rồi quét xuôi từ đầu xuống cuối để ra khoảng ở cuối. Đoạn 'none' ép khoảng hiện tại giao với khoảng của đoạn đó.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Đoạn 'none' là phép **giao** khoảng, không phải cộng — quên chỗ này là sai ngay.

## Bài học

Khi đại lượng cần theo dõi là một khoảng thay vì một số, mọi phép toán phải nâng lên mức khoảng: cộng khoảng, trừ khoảng, giao khoảng.
