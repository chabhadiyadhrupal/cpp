#include<iostream>
using namespace std;
int b=20;	//globle variable
int main()
{
	int a=10;//local variable
	static int  c=30; //static variable
	cout<<a<<"\n"<<b<<"\n"<<c;
	return 0;
}
