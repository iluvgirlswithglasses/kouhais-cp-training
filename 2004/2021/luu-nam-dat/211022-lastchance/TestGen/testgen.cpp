#include <bits/stdc++.h>
using namespace std;

int start, len, nlim, alim;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	srand((unsigned) time(0));
	//
	cin >> start >> len >> nlim >> alim;
	for (int i = start; len--; i++) {
		string f = "TestData\\" + to_string(i) + ".in";
		ofstream o(f);
		// n thuộc [2:2+nlim-2) = [2:nlim)
		int n = 2 + (rand()%(nlim-2));
		o << n << "\n";
		for (int i = 0; i < n; i++) {
			int a = (rand() % (alim<<1)) - alim;
			o << a << " ";
		}
		// x thuộc [0:n-1)
		int x = rand()%(n-1);
		// x thuộc [1:n)
		o << "\n" << x+1 << "\n";
		//
		o.close();
	}
	return 0;
}
