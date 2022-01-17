#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	float x, sum = 0, n, k=0; cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x < 0) {
		k++; sum += x;
		} 	
	}
	cout <<  k << " " << fixed << setprecision(2) << sum << endl; 
	return 0;
}

