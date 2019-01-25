#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,k=0;				//10, 20, 50, 100, 200
	cin >> a;
	
	if(a%10!=0){
		cout << -1 << endl;
		return 0;
	} 
	
	while(a>0){
		if(a>=500){
			a=a-500;
			k++;
		} 
		else if(a>=200){
			a=a-200;
			k++;
		} 
		else if(a>=100){
			a=a-100;
			k++;
		} 
		else if(a>=50){
			a=a-50;
			k++;
		} 
		else if(a>=20){
			a= a-20;
			k++;
		} 
		else if(a>=10){
			a= a-10;
			k++;
		} 
	}
	cout << k << endl;
	return 0;
}
