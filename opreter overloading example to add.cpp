#include<iostream>
using namespace std;
class add{
	int a;
	public:
		void getdata()
		{
			cout<<"enter your number:->";
			cin>>a;
			
		}
		void showdata()
		{
			cout <<"your a is:-"<<a<<endl;
			
		}
		add operator+(add bb)
		{
			add cc;
			cc.a=a+bb.a;
			return cc;
		}
};
int main()
{
	add aa,bb,cc;
	aa.getdata();
	bb.getdata();
	cc=aa+bb;
	aa.showdata();
	bb.showdata();
	cc.showdata();
}
