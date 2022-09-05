#include <iostream>
#include <string>
using namespace std;

const int N = 1e6+7;
int n;
string a[N];

// 7
// A B C dat de vao chuong

// chuong vao de dat C B A

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n-1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}
