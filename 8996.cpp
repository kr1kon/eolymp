#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s; getline(cin, s); map <char,bool> m;
	for(int i=0; i<s.size(); i++){
		if(m[s[i]]==1){
			s.erase(i,1); i--;
		} else{
			m[s[i]]=1;
		}
	}
	cout << s << endl;
	return 0;
}

