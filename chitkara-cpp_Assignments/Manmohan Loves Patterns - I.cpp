#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<1;
	cout<<"\n";
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<1;
			for(int j=2;j<=i-1;j++)
			{
				cout<<0;
			}
			cout<<1;
		}
		else
		{
			for(int j=1;j<=i;j++)
			{
				cout<<1;

			}
		}
		cout<<"\n";
	}
	return 0;
}