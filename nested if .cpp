//find in three number in maximum number
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter your 3 number:->\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a="<<a;
		}
		else
		{
			cout<<"c="<<c;
				
		}
		
	}
	else
	{
		if(b>c)
		{
			cout<<"b="<<b;
			
		}
		else
		{
			cout<<"c="<<c;
		}
	}
}
