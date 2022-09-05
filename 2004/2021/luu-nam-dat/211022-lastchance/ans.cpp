
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 22 08:52:29 2021
tab-width:	4 spaces

I sexually identify myself as an Attack Helicopter
*/

#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, x;
long double l, r, a[N];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
	//
	for (int i = 0; i < x; i++)
		l += a[i];
	for (int i = x; i < n; i++)
		r += a[i];
	l /= x;
	r /= (n-x);
	//
	if (l < r) {
		cout << "L < R\n";
	} else if (l == r) {
		cout << "L = R\n";
	} else {
		cout << "L > R\n";
	}
	return 0;
}

