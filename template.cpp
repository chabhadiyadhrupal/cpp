#include<iostream>
using namespace std;

	template<class A>
	void print(A a, A b)
	{
		cout<<a<<ends<<b<<endl;	
	}

int main()
{
	print(3,6);
	print('a','b');
	print("c","cpp");
	print(3.7,7.4);
	cout <<"this is template:-"<<endl;
}
