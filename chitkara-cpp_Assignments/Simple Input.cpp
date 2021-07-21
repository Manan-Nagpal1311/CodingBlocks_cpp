#include<iostream>
using namespace std;
int main() {
	int n;
	int s=0;
	while(s>=0)
	{
		cin>>n;
		s=s+n;
		if(s<0)
		{
			break;
		}
		cout<<n;
		cout<<"\n";
	}
	return 0;
}