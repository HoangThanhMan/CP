// In nhanh biến khi debug local: dbg(x, y);
// Biên dịch với -DLOCAL để bật, nộp bài thì tự động tắt.
#pragma once
#include <bits/stdc++.h>

#ifdef LOCAL
template <class T> void _print(const T& x) { std::cerr << x; }
template <class A, class B> void _print(const std::pair<A, B>& p) {
    std::cerr << '('; _print(p.first); std::cerr << ", "; _print(p.second); std::cerr << ')';
}
template <class T> void _print(const std::vector<T>& v) {
    std::cerr << '['; bool f = true;
    for (const auto& e : v) { if (!f) std::cerr << ", "; _print(e); f = false; }
    std::cerr << ']';
}
inline void _dbg() { std::cerr << '\n'; }
template <class H, class... T> void _dbg(const H& h, const T&... t) {
    _print(h); if (sizeof...(t)) std::cerr << " | "; _dbg(t...);
}
#define dbg(...) (std::cerr << "[" << #__VA_ARGS__ << "] = ", _dbg(__VA_ARGS__))
#else
#define dbg(...) ((void)0)
#endif
