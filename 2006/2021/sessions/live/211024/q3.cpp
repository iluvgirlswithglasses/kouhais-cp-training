#include <iostream>
using namespace std;

const int N = 1e5+7;
int n, a[N];

// 2 4 6 8	--> 1
// 2 3 6 8	--> 0

/*
<type> name(<parameters>) {
	// write your code here
	<type> res;
	return res;
}
*/

/*
if (statement) {
	// statement != 0
}
*/

bool f() {
	for (int i = 0; i < n; i++)
		if (a[i]&1) return 0;
	return 1;
}

bool g() {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) return 0;
	}
	return 1;
}

int h() {
	int res = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			res = 0;
			break;
		}
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//
	cout << f() << "\n";
	//
	return 0;
}
