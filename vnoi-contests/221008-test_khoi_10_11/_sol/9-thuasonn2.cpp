
#include <iostream>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n; cin >> n;
	cout << (1ll<<(63 - __builtin_clzll(n))) << "\n";
	return 0;
}
