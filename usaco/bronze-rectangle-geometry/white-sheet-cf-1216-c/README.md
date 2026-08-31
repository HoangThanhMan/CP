# White Sheet (CF 1216C)

- **Nguồn:** https://codeforces.com/contest/1216/problem/C
- **Độ khó:** Div3 C
- **Tags:** `geometry` `rectangles`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Một tờ giấy trắng và hai tờ giấy đen (đều là hình chữ nhật trục chuẩn). Hỏi có còn nhìn thấy phần trắng nào không.

## Quan sát

- Cách nghĩ đơn giản nhất: nếu một tờ đen phủ trọn tờ trắng theo **cả một chiều** thì nó cắt gọn một dải, và phần trắng còn lại vẫn là hình chữ nhật.
- Cứ cắt lần lượt bằng tờ đen thứ nhất rồi tờ thứ hai; còn diện tích dương thì đáp án YES.

## Ý tưởng

Viết hàm `cut(A, B)`: nếu B phủ trọn A theo chiều y thì cắt A từ trái hoặc phải; nếu phủ trọn theo chiều x thì cắt từ trên hoặc dưới. Áp dụng `cut` với hai tờ đen rồi kiểm tra diện tích còn lại.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Cách này chỉ đúng vì chỉ có **hai** tờ đen. Với nhiều tờ hơn, phần còn lại không còn là hình chữ nhật và phải chuyển sang quét đường (sweep line) hoặc nén toạ độ.

## Bài học

Số lượng đối tượng nhỏ (2, 3) thường cho phép một lời giải hình học 'cắt dần' đơn giản mà trường hợp tổng quát không có.
