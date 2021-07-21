#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	while(a<=b)
	{
		int f=(5*(a-32))/9;
		cout<<a;
		cout<<" ";
		cout<<f;
		cout<<"\n";
        a=a+c;		
	}
	return 0;
}