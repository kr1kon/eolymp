#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	string s; set <int> st; set<int>::iterator it;
	
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(s[i]>='0' && s[i]<='9') st.insert(s[i]-'0');
	}
	cout << 10-st.size() << endl;
	if(10!=st.size()){
		for(int i = 0; i < 10; i++){
			if(st.find(i)==st.end())cout << i << " ";
		} cout << endl;
	}
	return 0;
}

