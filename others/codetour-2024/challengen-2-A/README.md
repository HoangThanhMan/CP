# CodeTour 2024 — Challenge 2, bài A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Vừa
- **Tags:** `sorting` `prefix-sum` `binary-search`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

N nhiệm vụ, mỗi nhiệm vụ có yêu cầu năng lực `b` và giá trị `a`. Q truy vấn: sinh viên có năng lực `x` làm được tổng giá trị bao nhiêu (mọi nhiệm vụ có `b <= x`).

## Quan sát

- Truy vấn 'tổng giá trị của mọi nhiệm vụ có yêu cầu <= x' -> sắp xếp theo yêu cầu + tổng tiền tố.
- Tìm vị trí cắt bằng `upper_bound` là `O(log N)` mỗi truy vấn.

## Ý tưởng

Sắp xếp nhiệm vụ theo yêu cầu năng lực, dựng mảng tổng tiền tố của giá trị. Mỗi truy vấn dùng `upper_bound` tìm số nhiệm vụ có yêu cầu `<= x`, in tổng tiền tố tại vị trí đó.

## Độ phức tạp

- Thời gian: `O(N log N + Q log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Tổng giá trị dễ tràn `int` — code đã dùng `vector<long long>` cho prefix sum, đúng.
- `upper_bound` trên `vector<pair>` cần khoá so sánh đúng: code truyền `make_pair(capability, 1000000000)` để lấy hết mọi cặp có `first == capability` — cách này phụ thuộc vào chặn trên của thành phần thứ hai, hơi mong manh. Dùng mảng khoá riêng sẽ rõ hơn.

## Bài học

'Nhiều truy vấn dạng tổng có điều kiện ngưỡng' = sắp xếp + tổng tiền tố + tìm kiếm nhị phân. Bộ ba này giải rất nhiều bài.
