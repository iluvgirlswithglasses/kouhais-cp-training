
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Sat Nov 27 14:26:27 2021
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
using namespace std;

const int N = 1e6+7;
int n, a[N];
int cr = 1, res = 1;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] >= a[i-1]) {
			res = max(res, ++cr);
		} else {
			cr = 1;
		}
	}
	cout << res << "\n";
	return 0;
}
