# Thứ tự gọi constructor/destructor khi kế thừa (C++ và Java)

- **Nguồn:** bài tập OOP, không phải bài thi đấu
- **Ngày:** theo lịch sử git

> File này nằm nhầm trong `CODEFORCES/DIV4_ROUND952/TEST/` ở repo cũ. Nó không phải lời giải
> bài Codeforces nào, mà là chương trình thử nghiệm nên chuyển ra đây.

## Mục đích

Hai chương trình song song (C++ và Java) in ra thứ tự gọi constructor, copy constructor,
toán tử gán, destructor và cách phân giải hàm ảo, để so sánh hành vi của hai ngôn ngữ.

## Những điểm cần chú ý

- **Constructor lớp cơ sở luôn chạy trước** lớp dẫn xuất; destructor chạy ngược lại.
- `Derived(int t, int k)` không gọi `Base(int, int)` tường minh nên C++ gọi `Base()` mặc định —
  đây là chỗ dễ bất ngờ nhất.
- Truyền tham số **theo tham chiếu** (`Base& first`) giữ được tính đa hình; truyền **theo giá trị**
  (`Derived second`) gây object slicing.
- `doSth` là `virtual` nên phân giải theo kiểu thực; `doSthE` **không** `virtual` nên phân giải
  theo kiểu tĩnh — đây là khác biệt then chốt của bài.
- Java không có object slicing (mọi biến đối tượng đều là tham chiếu) và mọi phương thức
  mặc định đã là ảo — nên output hai bên khác nhau.

## Chạy thử

```bash
g++ -std=c++20 -o /tmp/demo InheritanceDemo.cpp && /tmp/demo
javac Main.java && java Main
```
