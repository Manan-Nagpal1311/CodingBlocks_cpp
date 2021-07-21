#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--!=0)
	{
		int odd=0;
		int even=0;
		int num;
		cin>>num;
		while(num!=0)
		{
			int r=num%10;
			if(r%2==0)
			{
				even+=r;
			}
			if(r%2!=0)
			{
				odd+=r;
			}
			num=num/10;
		}
		if(odd%3==0 || even%4==0)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<"\n";
		
	
	}
	return 0;
}