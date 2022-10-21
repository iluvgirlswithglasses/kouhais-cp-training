
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 13:11:11 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

ll llrand(ll lim) {
    ll r = 0;
    for (int i = 0; i < 5; i++) {
        r = (r << 15) | (rand() & 0x7FFF);
    }
    return (r & 0xFFFFFFFFFFFFFFFFULL) % lim;
}

unsigned sd;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	sd = chrono::high_resolution_clock::now().time_since_epoch().count();
	srand(sd);
	//
	int t, n;
	ll  lim;
	double zero_rate; 
	cin >> t >> n >> lim >> zero_rate;
	n /= t;
	//
	cout << t << "\n";
	while (t--) {
		cout << n << "\n";
		for (int i = 0; i < n; i++) {
			if (1.0 * (rand() % 100) < zero_rate)
				cout << "0 ";
			else
				cout << (llrand(lim<<1) - lim) << " ";
		}
		cout << "\n";
	}
	return 0;
}
