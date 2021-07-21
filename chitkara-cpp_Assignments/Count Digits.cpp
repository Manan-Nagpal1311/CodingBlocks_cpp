#include<iostream>
using namespace std;
int main() {
	int n,c;
	int ct=0;
	cin>>n>>c;
	while(n!=0)
	{
		if(n%10==c)
		{
			ct++;
		}
		n=n/10;
	}
	cout<<ct;
	return 0;
}