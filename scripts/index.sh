#!/usr/bin/env bash
# Quét toàn bộ thư mục bài và sinh lại SOLUTIONS.md.
# Độ khó / tags được đọc từ dòng tương ứng trong README.md của mỗi bài.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
out="$ROOT/SOLUTIONS.md"

field() {  # field <file> <nhãn>
    sed -n "s/^- \*\*$2:\*\* *//p" "$1" | head -n1
}

{
    echo "# Các bài đã giải"
    echo
    echo "_Tự sinh bằng \`./scripts/index.sh\` — đừng sửa tay._"
    echo
} > "$out"

total=0
for site in leetcode hackerrank codeforces atcoder usaco others; do
    [ -d "$ROOT/$site" ] || continue
    rows=$(mktemp)
    while IFS= read -r readme; do
        dir="$(dirname "$readme")"
        rel="${dir#"$ROOT"/}"
        name="$(basename "$dir")"
        diff_="$(field "$readme" 'Độ khó')"
        tags="$(field "$readme" 'Tags')"
        date_="$(field "$readme" 'Ngày giải')"
        langs=""
        [ -f "$dir/solution.cpp" ] && langs="C++"
        [ -f "$dir/solution.py" ] && langs="${langs:+$langs, }Python"
        printf '| [%s](%s) | %s | %s | %s | %s |\n' \
            "$name" "$rel" "${diff_:--}" "${tags:--}" "${langs:--}" "${date_:--}" >> "$rows"
    done < <(find "$ROOT/$site" -mindepth 2 -name README.md | sort)

    count=$(wc -l < "$rows" | tr -d ' ')
    if [ "$count" -gt 0 ]; then
        {
            echo "## ${site} ($count)"
            echo
            echo "| Bài | Độ khó | Tags | Ngôn ngữ | Ngày |"
            echo "|---|---|---|---|---|"
            cat "$rows"
            echo
        } >> "$out"
        total=$((total + count))
    fi
    rm -f "$rows"
done

echo "**Tổng cộng: $total bài.**" >> "$out"
echo "Đã cập nhật $out ($total bài)."
