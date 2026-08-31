# Kiểm tra từ khoá trong văn bản

- **Nguồn:** https://codeforces.com/contest/1884/problem/A
- **Độ khó:** ?
- **Tags:** `strings` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Code KHÔNG khớp tên thư mục — xem ghi chú

> Thư mục cũ đặt tên 'A. Simple Design' (Codeforces 1884A), nhưng code lại đọc nhiều dòng văn bản và kiểm tra sự xuất hiện của các từ "Welcome Hue University of Sciences" — có vẻ là bài của một cuộc thi khác. Cần xác định lại nguồn.

## Đề bài (tóm tắt)

Đọc toàn bộ văn bản nhiều dòng, tách thành từ, kiểm tra xem có xuất hiện từ nào trong danh sách cấm hay không. In YES nếu không có từ nào, NO nếu có.

## Quan sát

- `getline` + `stringstream` là cách chuẩn để tách từ khi input là nhiều dòng có dấu cách.

## Ý tưởng

Đọc từng dòng bằng `getline`, dùng `stringstream` tách từ, đánh dấu vào map. Cuối cùng kiểm tra 5 từ khoá.

## Độ phức tạp

- Thời gian: `O(tổng số ký tự)`
- Bộ nhớ: `O(số từ)`

## Cạm bẫy

- So khớp từ ở đây phân biệt hoa thường và không bỏ dấu câu — nếu đề yêu cầu bỏ qua những thứ đó thì phải chuẩn hoá trước.

## Bài học

Đọc văn bản nhiều dòng: `while (getline(cin, s))` rồi `stringstream` để tách từ. Mẫu này cần nhớ.
