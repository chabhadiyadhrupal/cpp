#include<iostream>
using namespace std;
class mybank
{
	private:
		int atmpin;
		int balance;
	public:
		string bankname;
		int accountnumber;
		void input()
		{
			atmpin=4523;
			balance=67;
			bankname="reserve bank of bharat";
			accountnumber=123456789;
		}
		void output(){
		
		 cout<<"atmpin        :-"<<ends<<atmpin<<endl;
		 cout<<"balance       :-"<<ends<<balance<<endl;
		 cout <<"bankname      :-"<<ends<<bankname<<endl;
		 cout<<"account number:-"<<ends<<accountnumber<<endl;
		}
		

};
int main()
{
	mybank obj;
	obj.input();
	obj.output();
	cout <<"\n\n\t\travi trying to access my account:->"<<endl;
	cout<<"\t\tbank name :-"<<obj.bankname<<endl;
	cout<<"\t\tacc number:-"<<obj.accountnumber;

}
