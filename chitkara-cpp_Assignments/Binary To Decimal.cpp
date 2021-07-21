#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int res=0;
	int x=1;
	while(n!=0)
	{
		res=res+x*(n%10);
		x=x*2;
		n=n/10;
	}
	cout<<res;
	return 0;
}