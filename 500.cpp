#include <bits/stdc++.h>
using namespace std;

int main (){
	unsigned int t, l, w, h, s; cin >> t;
	for(int i=0;i<t;i++){
		cin >> l >> w >> h;
		s = 2*h*(l+w);
		(s%16==0)? cout << s/16 << endl : cout << (s/16)+1 << endl;
	}
	return 0;
}
