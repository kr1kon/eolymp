#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	double xa, ya, xb, yb, xc, yc, vids;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	vids=sqrt(pow(xc-xb,2)+pow(yc-yb,2));
	(sqrt(pow(xc-xb,2)+pow(yc-yb,2))==sqrt(pow(xb-xa,2)+pow(yb-ya,2))+sqrt(pow(xc-xa,2)+pow(yc-ya,2)))? cout << 1 << endl : cout << 0 << endl;
	return 0;
}

