#include<iostream>
using namespace std;
int main() {
	char o;
    int a,b;
	
	do{
		cin>>o;
		long long res=0;
		if(o=='x' || o=='X')
		{
			break;
		}
        else if(o=='+')
         {
			 cin>>a>>b;
			 res=a+b;
             
         }
         else if(o=='-')
         {
			 cin>>a>>b;
             res=a-b;
         }
         else if(o=='*')
         {
			 cin>>a>>b;
             res=a*b;
         }
         else  if(o=='%')
         {
			 cin>>a>>b;
             res=a%b;
         }
         else if(o=='/')
         {
			 cin>>a>>b;
             res=a/b;
         }
         else
         {
             cout <<"Invalid operation. Try again.";  
         }
    if(o=='+' || o=='-' || o=='/' || o=='%' || o=='*')
	{
     cout<<res;
	}
	 cout<<"\n";
	}while(o!='x' || o!='X');
	return 0;
}