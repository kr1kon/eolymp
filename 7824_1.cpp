#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s, ans="", cmp; getline(cin, s);
	short la[11], y;
	for(int i=0;i<11;i++) la[i] = -1;

	for(int i=0;i<s.size();i++){
		y=s[i]-'0';
		//cout << i << " s[i]= " << y << " la[i]= " << la[y];
		if(la[y]==-1){
			ans=ans+s[i];
			la[y]=i;
		} else {
			cmp=ans+s[i]; cmp.erase(la[y],1);
			//cout << endl << "*cmp* ans= " << ans << " cmp= " << cmp << endl;
			if(cmp>ans){
				//cout << " !cmp > ans! " << endl;
				ans=cmp;
			}
		}
		for(int j=0;j<ans.size();j++) {
			la[ans[j]-'0']=j;
			//cout << " *updated* la[ans[j]]= " << la[ans[i]-'0'] << " ans[j]= " << ans[j] << endl;
		}
		//cout << " ans= " << ans << endl;
		//cout << " data of LA " << endl;
		//for(int j=0;j<11;j++) cout << " i= " << j << " data= " << la[j] << endl;
	}
	for(int j=0;j<ans.size();j++){
		cout << ans[j]-'0';
	}
	cout << endl;
	return 0;
}

