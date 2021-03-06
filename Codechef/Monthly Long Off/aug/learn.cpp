#include <cstdio>
#include <algorithm>

using namespace std;

#define FOR(i, n) for (int i = 1; i <= n; ++i)

int main() {
	int n, m, a, b, c;
	int w[320][320];
	long long s;

	scanf("%d", &n);
	FOR(i, n) FOR(j, n) scanf("%d", &w[i][j]);
	scanf("%d", &m);
	FOR(k, m) {
		scanf("%d%d%d", &a, &b, &c);
		s = 0;
		FOR(i, n) FOR(j, n) s += (w[i][j] = min(w[i][j], min(w[i][a] + c + w[b][j], w[i][b] + c + w[a][j])));
		printf("%I64d\n", s / 2);
	}

	return 0;
}

