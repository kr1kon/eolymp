#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, a, b, c, d; cin >> n >> a >> b >> c >> d; int ar[n+2];
	for(int i=1;i<=n;i++) ar[i]=i;
	for(int i=a;i<=(a+b)/2;i++) swap(ar[i],ar[b-i+1]);
	for(int i=c;i<=(c+d)/2;i++) swap(ar[i],ar[d-i+1]);
	for(int i=1;i<=n;i++) cout << ar[i] << " ";
	return 0;
}

