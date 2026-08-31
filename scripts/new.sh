#!/usr/bin/env bash
# Tạo khung thư mục cho một bài mới.
#
#   ./scripts/new.sh leetcode 0001 two-sum
#   ./scripts/new.sh codeforces 1800-div2 A-shovels
#   ./scripts/new.sh atcoder abc300 C-count
#   ./scripts/new.sh usaco 2023-dec-bronze candy
#   ./scripts/new.sh hackerrank strings sherlock-anagrams
#
# Ngôn ngữ mặc định là C++, đổi bằng: LANG_CHOICE=py ./scripts/new.sh ...
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
LANG_CHOICE="${LANG_CHOICE:-${LANG_OVERRIDE:-cpp}}"

usage() {
    sed -n '2,12p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'
    exit 1
}

[ $# -ge 2 ] || usage

site="$1"; shift

case "$site" in
    leetcode)
        [ $# -eq 2 ] || usage
        dir="$ROOT/leetcode/problems/$1-$2"
        title="$(echo "$2" | tr '-' ' ')"
        url="https://leetcode.com/problems/$2/"
        ;;
    codeforces|atcoder|usaco|hackerrank|others)
        [ $# -eq 2 ] || usage
        dir="$ROOT/$site/$1/$2"
        title="$(echo "$2" | tr '-' ' ')"
        url=""
        ;;
    *)
        echo "Site chưa biết: $site (dùng leetcode|codeforces|atcoder|usaco|hackerrank|others)" >&2
        exit 1
        ;;
esac

if [ -d "$dir" ]; then
    echo "Đã tồn tại: $dir" >&2
    exit 1
fi

mkdir -p "$dir"

# README từ template
sed -e "s|{{TITLE}}|$title|" \
    -e "s|{{URL}}|${url:-<dán link đề bài>}|" \
    -e "s|{{DATE}}|$(date +%Y-%m-%d)|" \
    "$ROOT/templates/PROBLEM_TEMPLATE.md" > "$dir/README.md"

# File code
if [ "$LANG_CHOICE" = "py" ] || [ "$LANG_CHOICE" = "python" ]; then
    src=$([ "$site" = "leetcode" ] && echo leetcode.py || echo main.py)
    cp "$ROOT/templates/python/$src" "$dir/solution.py"
else
    src=$([ "$site" = "leetcode" ] && echo leetcode.cpp || echo main.cpp)
    cp "$ROOT/templates/cpp/$src" "$dir/solution.cpp"
fi

[ "$site" = "leetcode" ] || : > "$dir/input.txt"

echo "Đã tạo $dir"
ls "$dir"
