#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=0;
	int b=1;

	cout<<a;
	cout<<"\n";
	int f=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<f;
			cout<<"\t";
			f=a+b;
			a=b;
			b=f;
		}
		cout<<"\n";
	}
	return 0;
}