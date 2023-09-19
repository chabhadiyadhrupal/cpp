#include<iostream>
using namespace std;
class A
	{
		int a,b;//private
		public:
		A()//default constructer
		{
			a=10, b=30;
			cout<<a<<ends<<b<<endl;
			
		}	
		
	};
	int main()
	{
		A obj;//auto calling 
		return 0;
	}
