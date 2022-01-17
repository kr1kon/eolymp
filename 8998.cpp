#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s; char maxv=' '; getline(cin, s);
	map <char, short> m;
	
	for(int i=0;i<s.size();i++){
		m[s[i]]+=1;
		if(s[i]>maxv) {
			maxv=s[i];
		}
	}
	
	cout << maxv << " " << m[maxv] << endl;
	return 0;
}

