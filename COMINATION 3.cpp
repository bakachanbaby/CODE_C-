#include<iostream>
using namespace std;
int n, a[100];
bool ok[100];
void res()
{
	for(int i=1;i<=n;i++)
	   cout<< a[i];
	   cout<<" ";
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(!ok[j])
		{
			a[i]=j;
			ok[j]=true;
			if(i==n)
			    res();
			else Try(i+1);
			ok[j]=false;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		Try(1);
		cout<<endl;
	}
	return 0;
}