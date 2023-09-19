#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(int a,int b)
	{
		x=a; 
		y=b;
		cout<<a<<ends<<b<<endl;
		
	}
	A(A&ref)
	{
		x=ref.x;
		y=ref.y;
		cout<<x<<ends<<y;
		
		
	}
};
int main()
{
	A obj(10 ,30);
	A obj2=obj;
	
		
}
