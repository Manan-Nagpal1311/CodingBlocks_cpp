#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"\t";
		}
		int k=i;
		for(int j=1;j<=i;j++)
		{
			cout<<k;
			cout<<"\t";
			k++;
		}
		k--;
		k--;
		for(int j=1;j<=i-1;j++)
		{
			cout<<k;
			cout<<"\t";
			k--;
		}
		cout<<"\n";
	}
	return 0;
}