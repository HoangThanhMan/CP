# Codeforces Round 991 Div3 — D

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 D
- **Tags:** `greedy` `strings` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi TLE — xem Cạm bẫy

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Chuỗi chữ số, được phép giảm một chữ số đi 1 rồi đổi chỗ nó với chữ số bên trái. Tìm chuỗi nhỏ nhất theo thứ tự từ điển.

## Quan sát

- Mỗi chữ số chỉ dịch được sang trái hạn chế vì mỗi lần dịch nó giảm 1 — một chữ số `d` dịch được nhiều nhất `d` bước.
- Vậy mỗi vị trí chỉ cần nhìn trong cửa sổ 9 phần tử kế tiếp -> có lời giải `O(9n)`.

## Ý tưởng

Với mỗi vị trí `i`, xét các `j` trong `[i, i+9]`, chọn `j` cho giá trị `s[j] - (j - i)` nhỏ nhất, đưa nó về vị trí `i`.

## Độ phức tạp

- Thời gian: `O(9N) nếu làm đúng cách`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Code hiện tại lặp `while(1)` quét lại toàn chuỗi sau mỗi lần đổi chỗ** — trường hợp xấu là `O(N^2)` hoặc tệ hơn, rất dễ TLE với `N` lớn.
- `for(i = 0; i < s.size() - 1; i++)` với chuỗi rỗng sẽ tràn vì `size()` không dấu.

## Bài học

'Đổi chỗ có chi phí giảm dần' luôn giới hạn tầm di chuyển trong một cửa sổ nhỏ. Nhận ra cửa sổ đó là cách biến `O(N^2)` thành `O(N)`.
