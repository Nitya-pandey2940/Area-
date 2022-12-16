#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int dup=n;
	int r,sum=0;
	while(n>0)
	{
		
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(dup==sum)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"Not a Armstrong Number";
	}
	  return 0;
}

