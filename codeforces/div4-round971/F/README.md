# Truy vấn tổng đoạn trên dãy ghép các phép quay vòng

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 F
- **Tags:** `prefix-sum` `modular-indexing` `queries`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Dãy `b` là ghép của `n` phép quay vòng của mảng `a`, độ dài `n^2`. Trả lời các truy vấn tổng đoạn `[l, r]` trên `b`.

## Quan sát

- Phần tử thứ `i` của `b` là `a[(i % n + i / n) % n]` — mỗi khối `n` phần tử là một phép quay vòng.
- Mỗi **khối đầy đủ** đóng góp đúng `sum(a)`, nên chỉ cần xử lý riêng hai khối đầu và cuối.

## Ý tưởng

Nếu `l` và `r` cùng khối thì cộng trực tiếp. Ngược lại: cộng `(số khối đầy đủ) * sum(a)`, cộng phần đuôi của khối chứa `l` và phần đầu của khối chứa `r`.

## Độ phức tạp

- Thời gian: `O(N + Q*N) trường hợp xấu`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Phần bù hai đầu vẫn duyệt tới `n` phần tử mỗi truy vấn** -> `O(Q*N)`, dễ TLE. Lời giải nhanh dùng tổng tiền tố của `a` (kể cả tiền tố vòng) để trả lời mỗi truy vấn `O(1)`.
- Biến `i` của vòng trong che mất biến `i` vòng ngoài — nên đổi tên.

## Bài học

Cấu trúc lặp khối: tách truy vấn thành 'khối đầu + các khối đầy đủ + khối cuối'. Phần khối đầy đủ nhân thẳng; hai đầu phải trả lời bằng tổng tiền tố chứ không duyệt.
