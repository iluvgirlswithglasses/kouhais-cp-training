
#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, m, a[N];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		a[x-1] = a[x] = a[x+1] = 0;
	}
	long long res = 0;
	for (int i = 1; i <= n; i++)
		res += a[i];
	cout << res << "\n";
	return 0;
}
