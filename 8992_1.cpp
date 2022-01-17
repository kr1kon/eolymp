#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s; getline(cin, s);
	for(int i=0; i<s.size(); i++){
		if(s[i]==s[i+1]){
			s.erase(i,1); i--;
		}
	}
	cout << s << endl;
	return 0;
}
