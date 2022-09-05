
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 22 08:52:29 2021
tab-width:	4 spaces

I sexually identify myself as an Attack Helicopter
*/

#include <fstream>
#include <string>
using namespace std;

const int N = 1e6+7;
int n, x;
long double l, r, a[N];

void gen(ifstream &cin, ofstream &cout) {
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
	if (l < r) {
		cout << "L < R\n";
	} else if (l == r) {
		cout << "L = R\n";
	} else {
		cout << "L > R\n";
	}
}

int main() {
	for (int t = 0; t < 20; t++) {
		l = 0;
		r = 0;
		//
		string f = to_string(t);
		if (f.length() == 1) f = "0" + f;
		ifstream cin("TestData\\" + f + ".in");
		ofstream cout("TestData\\" + f + ".ans");
		gen(cin, cout);
	}
	return 0;
}

