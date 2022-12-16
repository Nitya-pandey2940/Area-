#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int r=0;
	int a;
	int dup=n;
	while(n>0)
	{
		a=n%10;
		r=(r*10)+a;
		n=n/10;
	}
		if(dup==r)
		{
		 cout<<"The number is Pallindrome Number";
    	}  
		else
		{
		  cout<<"The number is not a Pallindrome Number";
    	} 
	
	return 0;
	
	
}
