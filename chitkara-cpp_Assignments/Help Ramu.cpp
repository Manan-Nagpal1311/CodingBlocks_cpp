#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int c1,c2,c3,c4;
		int n,m;
		
	while(t--!=0)
	{
		
		cin>>c1>>c2>>c3>>c4;
		cin>>n>>m;
		int r[n];
		int c[m];
		for(int i=0;i<n;i++)
		{
			cin>>r[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>c[i];
		}
		int minr=0,minc=0,res=0;
		for(int i=0;i<n;i++)
		{
			minr+=min(c1*r[i],c2);
		}
		minr=min(minr,c3);
		for(int i=0;i<m;i++)
		{
			minc+=min(c1*c[i],c2);
		}
		minc=min(minc,c3);
		res=min(minc+minr,c4);
		cout<<res;
		cout<<"\n";
	}
	return 0;
}