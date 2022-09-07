#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, c[N], k[N];

bool calc() {
	for (int i = 0; i < n; i++) {
		if (c[i] % k[i] != 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> c[i];
	for (int i = 0; i < n; i++)
		cin >> k[i];
	//
	if (calc()) {
		//
		for (int i = 0; i < n; i++)
			cout << c[i] / k[i] << " ";
	} else {
		cout << -1 << "\n";
	}
	return 0;
}
