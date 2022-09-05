
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Sat Nov 27 14:31:18 2021
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

// this code become legacy code immediately after it is written

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	srand((unsigned) time(0));
	int start, end; cin >> start >> end;
	int n, l, pre, cr; cin >> n >> l;
	//
	for (int i = start; i < end; i++) {
		string t = to_string(i);
		ofstream out("TestData/" + t + ".in");
		// test gen
		out << n << "\n";
		pre = rand() % l;
		out << pre << " ";
		for (int i = 1; i < n; i++) {
			cr = rand() % l;
			switch (rand() % 2) {
				case 0:
					cr += pre;
					out << cr << " ";
					break;
				case 1:
					cr -= pre;
					out << abs(cr) << " ";
					break;
			}
			//
			pre = abs(cr);
		}
		out << "\n";
		out.close();
	}
	return 0;
}
