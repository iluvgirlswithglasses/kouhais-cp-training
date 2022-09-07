
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Thu Oct 21 18:01:04 2021
tab-width:	4 spaces

I sexually identify myself as an Attack Helicopter
*/

#include <iostream>
using namespace std;

const int N = 2e6+7;
int n, a[N];

int main() {
	cin.tie(0)->sync_with_stdio(false); 
	cin >> n;
	// n<<1 == n*2
	for (int i = 0; i < (n<<1); i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
		cout << (a[i] + a[(n<<1)-i-1]) << " ";
	return 0;
}

