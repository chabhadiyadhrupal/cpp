#include<iostream>
using namespace std;
class A{
	protected:
		int a,b;
	public:
		void show()
	{
		cout<<"enter 2 number:->";
		cin>>a>>b;
			
	}
};
class B:public A{
	int c;
	public:
	void add()
	{
		c=a+b;
		cout<<"addition:->"<<c<<endl;
	}
	void sub()
	{
		c=a-b;
		cout<<"substraction:->"<<c<<endl;
	}
};
class C:public B
{
	int c;
	public:
		void mul()
		{
			c=a*b;
			cout<<"multipaly:->"<<c<<endl;
		}
		void div()
		{
			c=a/b;
			cout<<"division:->"<<c;
		}
};
int main()
{
	C obj;
	obj.show();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}


