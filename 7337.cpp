#include <bits/stdc++.h>
using namespace std;

int main (){
	unsigned short t, x; cin >> t;
	for(int i=0;i<t;i++){
		cin >> x;
		if(x%3==0)
			cout << "GCV" << endl;
		else if(x%3==2)
			cout << "CVG" << endl;
		else 
			cout << "VGC" << endl;
	}
	return 0;
}
