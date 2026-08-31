# Binary String Reconstruction (1352F)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 F
- **Tags:** `constructive` `strings`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Dựng chuỗi nhị phân có đúng `n0` cặp liền kề `00`, `n1` cặp `01`/`10`, và `n2` cặp `11`.

## Quan sát

- `n1` là số lần **đổi ký tự**, nên khung sườn là chuỗi xen kẽ độ dài `n1 + 1`.
- Sau đó chèn thêm `n0` số 0 vào một khối 0 có sẵn, và `n2` số 1 vào một khối 1 — chèn vào khối có sẵn không tạo thêm lần đổi.
- `n1 = 0` là trường hợp biên: chuỗi chỉ gồm một loại ký tự.

## Ý tưởng

`n1 = 0` -> in `n0+1` số 0 hoặc `n2+1` số 1. Ngược lại dựng chuỗi xen kẽ `1010...` độ dài `n1+1`, chèn `n0` số 0 vào khối 0 đầu tiên và `n2` số 1 vào đầu chuỗi.

## Độ phức tạp

- Thời gian: `O(n0 + n1 + n2)`
- Bộ nhớ: `O(n0 + n1 + n2)`

## Cạm bẫy

- Trường hợp `n1 = 0` **và** cả `n0`, `n2` đều bằng 0 — cần in một ký tự bất kỳ.
- Chèn phải vào đúng khối cùng loại, chèn nhầm chỗ sẽ làm `n1` thay đổi.

## Bài học

Bài dựng chuỗi theo số cặp liền kề: dựng **khung xen kẽ** trước (quyết định `n1`), rồi bơm thêm ký tự vào các khối có sẵn (không đổi `n1`).
