#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, x, a[N];
double l, r;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;
	//
	for (int i = 0; i < x; i++) {
		l += a[i];
	}
	for (int i = x; i < n; i++) {
		r += a[i];
	}
	//
	l /= x;
	r /= (n-x);
	//
	cout << l << " " << r << "\n";
	return 0;
}
