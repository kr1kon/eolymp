#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	uint n,m,x; cin >> n; int a[n+2];
	for(int i=1;i<=n;i++) cin >> a[i];
	cin >> m;
	for(int i=1;i<=m;i++){
		cin >> x; a[x]-=1;
	}
	for(int i=1;i<=n;i++){
		(a[i]<0)? cout << "yes" << endl : cout << "no" << endl;
	}
	return 0;
}

