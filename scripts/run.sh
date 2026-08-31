#!/usr/bin/env bash
# Biên dịch và chạy lời giải của một bài, đưa input.txt vào stdin nếu có.
#
#   ./scripts/run.sh codeforces/1800-div2/A-shovels
#   ./scripts/run.sh leetcode/problems/0001-two-sum
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
[ $# -eq 1 ] || { echo "Dùng: $0 <đường-dẫn-thư-mục-bài>" >&2; exit 1; }

dir="${1%/}"
[ -d "$dir" ] || { echo "Không thấy thư mục: $dir" >&2; exit 1; }

stdin_file=/dev/null
[ -s "$dir/input.txt" ] && stdin_file="$dir/input.txt"

if [ -f "$dir/solution.cpp" ]; then
    flags=(-std=c++20 -O2 -Wall -Wextra -DLOCAL -I "$ROOT/templates/cpp")
    if grep -qE '^[^/]*\bint[[:space:]]+main[[:space:]]*\(' "$dir/solution.cpp"; then
        bin="$(mktemp -d)/solution"
        g++ "${flags[@]}" -o "$bin" "$dir/solution.cpp"
        echo "--- output ---"
        "$bin" < "$stdin_file"
    else
        # Bài kiểu LeetCode: không có main() nên chỉ kiểm tra biên dịch.
        g++ "${flags[@]}" -fsyntax-only "$dir/solution.cpp"
        echo "Biên dịch OK (không có main() nên không chạy được — bỏ comment phần main để chạy thử)."
    fi
elif [ -f "$dir/solution.py" ]; then
    echo "--- output ---"
    python3 "$dir/solution.py" < "$stdin_file"
else
    echo "Không tìm thấy solution.cpp hay solution.py trong $dir" >&2
    exit 1
fi
