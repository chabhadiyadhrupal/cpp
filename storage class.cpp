//storage class
#include<iostream>
using namespace std;
int a;//extern -globle variable
int main()
{
	int b;//auto-local variable
	static int c;//static
	register int d;//register
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

	
}
