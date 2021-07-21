#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=n-i+1;j<=2*n-i;j++)
		{
			if(i==1 || i==n)
			{
			cout<<"*";
			}
			else if(j!=n-i+1 || j!=2*n-i-1)
			{
				//cout<<j+i;
				if(j+i==n+1 || j+i==2*n)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			
			
		}
		
		cout << "\n" ;
	}
	return 0;
}