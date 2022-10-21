
#include <iostream>
#include <algorithm>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

const int N = 2e5+7, I = 1e9+7;
int n, k, a[N];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	//
	int res = I;
	for (int l = 0, r = k-1; r < n; l++, r++) {
		res = min(res, a[r] - a[l]);
	}
	cout << res << "\n";
	return 0;
}
