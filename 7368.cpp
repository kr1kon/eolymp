#include <bits/stdc++.h>
using namespace std;

int main (){
    unsigned int n, m,k; cin >> n >> m; double a[n+2], x; vector <double> ans;
    for(int i=0;i<m;i++){
    	double minn=101, maxx=0; x=0; k=0; 
		for(int j=0;j<n;j++){cin >> a[j]; minn=min(minn,a[j]); maxx=max(maxx,a[j]);}
		for(int j=0;j<n;j++){
			if(a[j]!=minn && a[j]!=maxx){
				x+=a[j]; k++;
			}
		}
		ans.push_back(x/k);
	}
	for(int j=0;j<m;j++){cout << fixed << setprecision(2) << ans[j] << " ";}
    return 0;
}
