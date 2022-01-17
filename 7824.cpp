#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s; ull ans=0, cmp; cin >> s;
	unsigned short a[s.size()+2], la[11];
	for(int i=0;i<11;i++) la[i] = -1;
	for(int i=1;i<=s.size();i++) a[i]=s[i]-'0';
	
	for(int i=1;i<=s.size();i++){
		if(la[a[i]]==-1){
			ans = ans*10 + a[i];
			la[a[i]]=i;
		} else {
			cmp=0;
			for(int j=0;j<i;j++){
				
			}
			if()
		}
	}
	
	//for(int i=0;i<s.size();i++) cout << a[i] << " ";
	return 0;
}

