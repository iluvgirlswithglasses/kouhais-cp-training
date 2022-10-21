
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

const int I = 1e7+7;

struct Eratos {
	int  n, cnt;
	ll   p[I];	// p[i] == the i-th prime, 0-indexed
	bool e[I];	// e[i] == 0 --> `i` is prime

	void init(int _n) {
		n = _n;
		e[0] = e[1] = true;
		for (ll i = 2; i <= n; i++) if (!e[i]) {
			p[cnt++] = i;
			for (ll j = i*i; j <= n; j+=i) e[j] = true;
		}
	}

	vector<int> gen() {
		vector<int> res;
		for (int i = 0; i < cnt; i++)
			for (int j = i; p[i]*p[j] < (int) 1e6+7; j++)
				res.push_back(p[i] * p[j]);
		sort(all(res));
		return res;
	}
} er;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	er.init((int) 1e6+7);
	vector<int> res = er.gen();
	int n; cin >> n;
	cout << res[n-1] << "\n";
	return 0;
}
