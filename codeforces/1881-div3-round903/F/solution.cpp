#include <iostream>
#include <vector>
#include <stack>
#define MaxN 2*100000

using namespace std;

void DFS() {

}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		bool marked[MaxN];
		int dist[MaxN];
		vector <int> g[MaxN];
		for (int i = 0; i < k; i++) {
			int x; cin >> x;
			marked[x] = 1;
		}
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			g[a].push_back(b);
			g[b].push_back(a);
		}

	}
}