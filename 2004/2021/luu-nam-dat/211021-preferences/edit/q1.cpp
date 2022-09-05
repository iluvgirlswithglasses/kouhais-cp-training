
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Thu Oct 21 18:00:04 2021
tab-width:	4 spaces

I sexually identify myself as an Attack Helicopter
*/

#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, a[N], b[N];

int main() {
	cin.tie(0)->sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i =0 ; i < n; i++)
		cout << a[i] + b[i] << " ";
	return 0;
}

