#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s, s1="&"; getline(cin, s);
	for(int i=0; i<s.size(); i++){
		if(s[i]!=s1[s1.size()-1]){
			s1=s1+s[i];
		}
	} s1.erase(0,1);
	cout << s1 << endl;
	return 0;
}

