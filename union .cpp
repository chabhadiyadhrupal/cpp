#include<iostream>
using namespace std;
union emp{
	char name[20];
	int exp;
	double selery;
	
};
int main()
{
	union emp e;
	cout<<"enter your name:->";
	cin>>e.name;
	cout<<"enter your Experience:->";
	cin>>e.exp;
	cout<<"enter your selery:->";
	cin>>e.selery;
	cout<<"your name is:-"<<e.name<<endl;
	cout<<"your exprience:-"<<e.exp<<endl;
	cout<<"enter your selery:-"<<e.selery<<endl;
	
}
