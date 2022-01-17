#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	uint n; bool fl=0; cin >> n; 
	int a[n+2]; map <int, short> m;
	for(int i=0;i<n;i++){
		cin >> a[i]; m[a[i]]+=1;
	}
	
	for(int i=0;i<n;i++){
		if(m[a[i]]>1){
			m[a[i]]=0; fl=1;
			cout << a[i] << " ";
		}
	} if(!fl) cout << "NO";
	
	cout << endl;
	return 0;
}
