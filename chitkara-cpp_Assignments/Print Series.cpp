#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int m;
	cin>>m;
	int i=1;
	int ct=1;
	while(ct<=n && i<=100)
	{
		int x=3*i+2;
		if(x%m!=0)
		{
			cout<<x;
			cout<<"\n";
			ct++;
		}
		i++;
	}
	return 0;
}