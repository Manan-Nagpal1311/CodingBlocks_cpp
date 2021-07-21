#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k=1;
	for(int i=1;i<=n;i++)
	{
		cout<<i;
		cout<<" ";
	}
	cout<<"\n";
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<j;
			cout<<" ";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
			cout<<" ";

		}
		k=k+2;
		cout<<"\n";

	}
	return 0;
}