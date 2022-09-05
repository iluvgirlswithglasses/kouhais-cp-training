#include <iostream>
using namespace std;

// 7
// 4 3 2 1 2 3 4
// a[i] == a[n-i-1]

const int N = 1e6+7;
int n, a[N];

bool calc() {
	// n>>1 == n/2
	for (int i = 0; i < (n>>1); i++) {
		if (a[i] != a[n-i-1]) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//
	if (calc()) {
		cout << "yes\n";
	} else {
		cout << "no\n";
	}
	return 0;
}
