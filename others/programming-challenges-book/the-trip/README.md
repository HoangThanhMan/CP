# The Trip (UVa 10137)

- **Nguồn:** https://onlinejudge.org/external/101/10137.pdf
- **Độ khó:** Dễ-vừa
- **Tags:** `math` `precision` `greedy`
- **Ngày giải:** 2023-12-31
- **Kết quả:** CHƯA GIẢI — file code rỗng

> File rỗng, chưa có lời giải. Phần dưới là hướng làm để quay lại sau.

## Đề bài (tóm tắt)

N sinh viên chi các khoản tiền khác nhau. Cần san bằng chi phí; tìm tổng số tiền nhỏ nhất phải chuyển tay, chính xác tới xu.

## Quan sát

- **Làm việc bằng số xu (số nguyên), tuyệt đối không dùng `double`** — đây là toàn bộ độ khó của bài.
- Tổng không chia hết cho N thì phần dư `r` sẽ khiến `r` người phải trả nhiều hơn 1 xu.

## Ý tưởng

Đổi mọi số tiền sang xu (số nguyên). Tính trung bình `avg = tổng / N` và dư `r = tổng % N`. Đáp án là tổng phần chênh dương so với mức trung bình, có tính tới `r` người phải trả `avg + 1`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Đọc `12.34` rồi nhân 100 kiểu `double` sẽ ra `1233.9999` — phải đọc dạng chuỗi hoặc `round(x * 100)`.
- Đáp án in với đúng 2 chữ số thập phân.

## Bài học

Hễ đề nói 'chính xác tới xu' là tín hiệu chuyển hết sang số nguyên. Số thực chỉ nên xuất hiện ở dòng in kết quả.
