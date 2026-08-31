# Two Tables (CF 1555B)

- **Nguồn:** https://codeforces.com/contest/1555/problem/B
- **Độ khó:** Div3 B
- **Tags:** `geometry` `greedy` `case-analysis`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Trong phòng `W x H` đã có một bàn ở vị trí `(x1,y1)-(x2,y2)`. Cần đặt thêm bàn `w x h` không chồng lên bàn cũ, được phép đẩy bàn cũ. Tìm quãng đường đẩy nhỏ nhất, hoặc -1 nếu không thể.

## Quan sát

- Bàn mới luôn nên đặt sát một cạnh tường — đẩy nó vào góc không bao giờ tệ hơn.
- Chỉ có 4 hướng đẩy bàn cũ (trái, phải, lên, xuống); với mỗi hướng, quãng đường cần đẩy tính được ngay.
- Nếu khoảng trống sẵn có ở một phía đã đủ rộng thì đáp án là 0.

## Ý tưởng

Kiểm tra 4 phía: nếu khoảng trống đã `>= w` (hoặc `>= h`) thì trả 0. Ngược lại, với mỗi hướng thử đẩy bàn cũ vừa đủ để chừa chỗ, kiểm tra bàn cũ có còn nằm trong phòng không, lấy quãng đường nhỏ nhất. Không hướng nào khả thi thì -1.

## Độ phức tạp

- Thời gian: `O(1) mỗi test`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Phải kiểm tra bàn cũ **sau khi đẩy vẫn nằm trong phòng** — đây là chỗ dễ quên nhất.
- Đáp án là số nguyên; code hiện tại trả `double` và in `setprecision(9)`, không sai nhưng thừa.

## Bài học

Bài hình học có ít hướng: liệt kê đủ các hướng, mỗi hướng viết đúng hai điều kiện 'có chừa đủ chỗ' và 'vẫn hợp lệ'. Đừng cố tìm công thức chung.
