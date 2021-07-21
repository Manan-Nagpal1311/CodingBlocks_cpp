#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<1;
	cout<<"\n";
	for(int i=1;i<n;i++)
	{
		cout<<n-(n-i);
		for(int j=2;j<=i;j++)
		{
			cout<<0;
		}
		cout<<n-(n-i);
		cout<<"\n";

	}
	return 0;
}