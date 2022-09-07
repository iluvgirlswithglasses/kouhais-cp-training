#include <iostream>
using namespace std;

long long res;
int n;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a; 
		cin >> a;
		if (a > 0)
			res += a;
	}
	cout << res << "\n";
	return 0;
}
