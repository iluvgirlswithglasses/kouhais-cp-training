
#include <iostream>
using namespace std;

const int N = 1e6+7;
int  n;
bool m[N];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j+=i)
			m[j] ^= 1;
	int res = 0;
	for (int i = 1; i <= n; i++)
		res += m[i];
	cout << res << "\n";
	return 0;
}
