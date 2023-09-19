#include<iostream>
using namespace std;
class perent{
	protected:
		int money;
		public:
		string proparty;
		void show()
		{
			cout<<"enter your  perent money:->";
			cin>>money;
			proparty="house,farm,business";
			
		}
		
};
class child:public perent
{
	int mymoney,total;
	public:
		void print()
		{
			cout<<"enter your  pocket money:->";
			cin>>mymoney;
			total=mymoney+money;
			cout<<endl<<"your money       ->"<<mymoney<<endl;
			cout<<"your perent money->"<<money<<endl;
			cout<<"your total money ->"<<total<<endl;
			cout<<"your proparty    ->"<<proparty;
		}
};
int main()
{
	child obj;
	obj.show();
	obj.print();
}
