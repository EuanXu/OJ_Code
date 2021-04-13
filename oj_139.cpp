/*************************************************************************
	> File Name: oj_139.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 01:08:24 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i;j++){
			cout<<"A";
		}
		cout<<endl;
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i;j++){
			cout<<"A";
		}
		cout<<endl;
	}
	return 0;
}

