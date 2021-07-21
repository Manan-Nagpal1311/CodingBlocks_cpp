#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<n/2+1;i++)
	{
		
		if(i==1)
		{
			cout<<"*";
			for(int j=1;j<n/2;j++)
			{
				cout<<" ";
			}
			for(int j=1;j<=n/2+1;j++)
			{
				cout<<"*";
			}
			
		}
		
		
		else 
		{
			cout<<"*";
			for(int j=1;j<n/2;j++)
			{
				cout<<" ";
			}
			cout<<"*";
			
		}
		cout<<"\n";
		
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i=1;i<n/2;i++)
	{
		for(int j=1;j<=n/2;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int j=1;j<n/2;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<"\n";
	}
	for(int i=1;i<=n/2+1;i++)
	{
		cout<<"*";
	}
	for(int j=1;j<n/2;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<"\n";
	return 0;
}