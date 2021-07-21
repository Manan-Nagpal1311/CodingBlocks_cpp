#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k=1;
	for(int j=1;j<=n;j++)
	{
		cout<<"*";
			cout<<"\t";
	}
	cout<<"\n";
	for(int i=2;i<=n/2+1;i++)
	{
		for(int j=1;j<=(n-k)/2;j++)
		{
			cout<<"*";
			cout<<"\t";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<" ";
			cout<<"\t";
		}
		for(int j=1;j<=(n-k)/2;j++)
		{
			cout<<"*";
			cout<<"\t";
		}
		k=k+2;
		cout<<"\n";
	}
	k=k-2;
	k=k-2;
	//cout<<k;
	for(int i=n/2+1;i<n-1;i++)
	{
		for(int j=1;j<=(n-k)/2;j++)
		{
			cout<<"*";
			cout<<"\t";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<" ";
			cout<<"\t";
		}
		for(int j=1;j<=(n-k)/2;j++)
		{
			cout<<"*";
			cout<<"\t";
		}
		k=k-2;
		cout<<"\n";
	}
	for(int j=1;j<=n;j++)
	{
		cout<<"*";
		cout<<"\t";
	}
	return 0;
}