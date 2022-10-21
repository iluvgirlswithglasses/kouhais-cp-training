
#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, a[N];

bool increase() {
	for (int i = 1; i < n; i++)
		if (a[i-1] > a[i]) return false;
	return true;
}

bool decrease() {
	for (int i = 1; i < n; i++)
		if (a[i-1] < a[i]) return false;
	return true;
}

bool check() {
	return increase() || decrease();
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n < 3 || check())
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
