# Templates

| File | Khi nào dùng |
|---|---|
| `cpp/main.cpp` | Mặc định cho Codeforces/AtCoder/USACO. Ngắn, đủ dùng cho hầu hết bài. |
| `cpp/leetcode.cpp` | Bài LeetCode (chỉ `class Solution`, không có `main`). |
| `cpp/full-template.cpp` | Khi cần sẵn số học modular, sàng, tổ hợp, pbds. Nặng 98 dòng. |
| `cpp/debug.hpp` | `dbg(x, y)` in biến ra stderr, chỉ bật khi biên dịch với `-DLOCAL`. |
| `python/main.py` | Bài đọc stdin thông thường. |
| `python/leetcode.py` | Bài LeetCode. |
| `PROBLEM_TEMPLATE.md` | Khung README cho mỗi bài (script `new.sh` tự dùng). |

## Ghi chú

Nhiều lời giải cũ trong repo dán nguyên `full-template.cpp` vào đầu file (khoảng 80 dòng
boilerplate lặp lại ở hàng chục bài). Code đã nộp được giữ nguyên làm bản ghi lịch sử,
nhưng **bài mới nên bắt đầu từ `main.cpp`** và chỉ lấy `full-template.cpp` khi thật sự cần.
