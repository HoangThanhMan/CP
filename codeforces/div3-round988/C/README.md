# Codeforces Round 988 Div3 — C

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `constructive` `sieve` `number-theory`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Dựng hoán vị `1..n` sao cho tổng của hai phần tử liền kề nào đó không phải số nguyên tố (hoặc theo điều kiện tương tự của đề).

## Quan sát

- Xếp toàn bộ số lẻ trước rồi số chẵn sau: mọi cặp liền kề trong cùng nhóm có tổng chẵn -> không nguyên tố (trừ tổng bằng 2).
- Chỉ có **một** chỗ nối giữa nhóm lẻ và nhóm chẵn cần xử lý riêng.

## Ý tưởng

Sàng nguyên tố tới `2n`. Xếp các số lẻ, rồi chọn một số chẵn `tmp` sao cho tổng với số lẻ cuối không nguyên tố, đặt nó ngay sau, rồi tới các số chẵn còn lại.

## Độ phức tạp

- Thời gian: `O(N log log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **`is_prime[0] == is_prime[1] == true;` dùng `==` thay vì `=`** — dòng này không gán gì cả, chỉ so sánh rồi vứt kết quả. May là 0 và 1 không được dùng tới, nhưng đây là lỗi thật cần sửa.
- Sàng lại trong mỗi test case sẽ chậm nếu nhiều test — nên sàng một lần ngoài `main`.

## Bài học

Bài dựng hoán vị: tách theo tính chẵn lẻ khiến hầu hết các cặp liền kề tự động thoả điều kiện, chỉ còn **một** chỗ nối phải xử lý riêng.
