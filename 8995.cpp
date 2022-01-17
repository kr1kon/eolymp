#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s; bool fl=0; getline(cin, s);
	map <char, short> m;
	
	for(int i=0;i<s.size();i++){
		m[s[i]]+=1;
	}
	
	for(int i=0;i<s.size();i++){
		if(m[s[i]]>1){
			cout << s[i];
			m[s[i]]=0; fl=1;
		}
	}	if(!fl) cout << "NO";
	
	cout << endl;
	return 0;
}

