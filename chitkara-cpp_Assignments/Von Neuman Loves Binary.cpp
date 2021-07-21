#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n!=0)
	{
		int x;
		cin>>x;
		int p=0;
		int num=0;
		while(x!=0)
		{
			num=num+pow(2,p)*(x%10);
			x=x/10;
			p++;
		}
		cout<<num;
		cout<<"\n";
		n--;
	}
	return 0;
}