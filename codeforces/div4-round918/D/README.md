# Tách âm tiết CV/CVC

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4
- **Tags:** `strings` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi chưa AC — xem Cạm bẫy

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Chia chuỗi thành các âm tiết dạng phụ âm+nguyên âm (CV) hoặc phụ âm+nguyên âm+phụ âm (CVC), in ra có dấu chấm ngăn cách.

## Quan sát

- Với bảng chữ cái giới hạn, phân loại từng ký tự thành C hoặc V trước.
- Tham lam từ trái sang: gặp CV thì xem ký tự tiếp theo, là C thì lấy CVC, là V thì dừng ở CV.

## Ý tưởng

Duyệt từ trái, mỗi lần cắt một âm tiết CV hoặc CVC theo quy tắc trên, in kèm dấu chấm.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Nhánh `if(n-i<=3)` in thẳng ký tự mà không kiểm tra gì** — logic phần đuôi chuỗi không khớp với phần thân, nhiều khả năng sai.
- **Nếu điều kiện `mp[s[i]]=='C' && mp[s[i+1]]=='V'` không thoả thì không in gì cả** — ký tự bị nuốt mất. Cần nhánh `else`.
- `mp` chỉ ánh xạ 5 ký tự `a,e,c,d,b`; ký tự khác trả về giá trị mặc định 0, không phải 'C' hay 'V'.

## Bài học

Tham lam cắt chuỗi: phải bảo đảm **mọi ký tự đều được tiêu thụ đúng một lần**. Cách kiểm tra nhanh: độ dài output (bỏ dấu chấm) phải bằng độ dài input.
