#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
			cout<<"\t";
		}
		for(int j=1;j<=2*n-2*i-1;j++)
		{
			cout<<" ";
			cout<<"\t";
		}
		if(i==n)
		{
			for(int j=i-1;j>=1;j--)
		    {
			cout<<j;
			cout<<"\t";
		    }
		}
		else
		{
		for(int j=i;j>=1;j--)
		{
			cout<<j;
			cout<<"\t";
		}
		}
		cout<<"\n";
	}
	return 0;
}