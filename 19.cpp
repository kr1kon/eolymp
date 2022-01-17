#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	short n[11], k=0, j; string s; 
	getline(cin, s);
	
	for(int i=0;i<s.size();i++)
		n[i]=s[i]-'0';
	
	(s.size()%2==0)? j=s.size()/2 : j=s.size()/2+1;
	for(int i=0;i<j;i++)
		if(n[i]==n[s.size()-i-1])
			k++;
		
	cout << k << endl;
	return 0;
}

