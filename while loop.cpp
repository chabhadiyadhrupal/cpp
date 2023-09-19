/*
//print 1to 10
#include<iostream>
using namespace std;
int main()
{
	int a=1;
	while(a<=10)
	{
		cout<<a<<ends;
		++a;
	}
}*/
//count digit 
#include<iostream>
using namespace std;
int main()
{
	int a,count;
	cout<<"enter your number:->";
	cin>>a;
	while(a>0)
	{
		a=a/10;
		count++;
		
	}
	cout<<count;
}
