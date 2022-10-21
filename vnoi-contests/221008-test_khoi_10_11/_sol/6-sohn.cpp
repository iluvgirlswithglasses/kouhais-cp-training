
#include <iostream>
using namespace std;

#define ll long long

const int N = 1e6+7;
int n;
ll  s[N];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	//
	for (int i = 1; i <= n; i++) {
		for (int j = i<<1; j <= n; j+=i) s[j] += i;
	}
	//
	for (int i = 2; i <= n; i++) {
		int j = s[i];
		if (i < j && j <= n && s[j] == i) cout << i << " " << j << "\n";
	}
	return 0;
}
