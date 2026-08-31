# Mixing Milk

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `simulation`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Ba xô sữa có dung tích và lượng sữa ban đầu. Thực hiện 100 lượt rót: lượt `i` rót từ xô `i%3` sang xô kế tiếp, rót tới khi xô nguồn cạn hoặc xô đích đầy. In lượng sữa cuối cùng.

## Quan sát

- Chỉ 100 lượt và 3 xô — mô phỏng thẳng là cách nhanh nhất, không cần tìm chu kỳ.
- Mỗi lượt chỉ có hai khả năng: nguồn cạn trước, hoặc đích đầy trước.

## Ý tưởng

Lặp 100 lần, mỗi lần tính lượng rót `= min(sữa ở nguồn, chỗ trống ở đích)` rồi cập nhật hai xô.

## Độ phức tạp

- Thời gian: `O(100)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Chỉ số xô nguồn/đích phải đúng thứ tự vòng tròn 1->2->3->1.
- Đề đánh số lượt từ 1; lệch một đơn vị là ra sai toàn bộ.

## Bài học

Số bước nhỏ và cố định (100, 1000) là tín hiệu đề muốn bạn mô phỏng thẳng — đừng đi tìm quy luật.
