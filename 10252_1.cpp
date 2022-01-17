#include <bits/stdc++.h>
using namespace std;

int main(){
	int st[], k=0, kp=0;
	string s;
	getline(cin,s);

	for(int i=0;i<s.length()-2;i++){
		st.insert(s[i]);
		st.insert(s[i+1]);
		for(int j=i+2;j<s.length();j++){
			p = st.count(s[j]);
			if(p == 1 && st.size() == 2){
				k++;
			}
			else if(p == 0 && st.size() == 1){
				st.insert(s[j]);
				k++;
			}
			else if(p == 1 && st.size() == 1){
				continue;
			}
			else{
				break;
			}
		}
		st.clear();
	}
	cout << k << endl;	
	return 0;
}
