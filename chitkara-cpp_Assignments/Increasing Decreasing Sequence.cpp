#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x;
	if(n>=1)
	{
		cin>>x;
		n--;
	}
	
	
	int prev=x;
	while(n!=0)
	{
		cin>>x;
		if(x>=prev)
		{
			n--;
			break;
		}
		prev=x;

		n--;
	}
	int f=0;
	while(n!=0)
	{
		cin>>x;
		if(x<=prev)
		{
			f=1;
		}
		prev=x;
		n--;
	}
	if(f==0)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
	return 0;
}