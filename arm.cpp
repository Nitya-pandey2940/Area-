#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=pow(a[i],3);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
		
		
		
	}
