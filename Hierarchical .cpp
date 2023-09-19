#include<iostream>
using namespace std;
class human
{
	public:
		void behavior()
		{
			cout<<"he/she is walk"<<endl;
			cout<<"he/she is drink water"<<endl;
			cout<<"he/she is eat "<<endl;	
		}
};
class men:public human
{
	public:
	void  speciality()
	{
		cout <<"he have a moustache"<<endl;
		cout <<"he wear shirt,pant, t-shirt,etc"<<endl;
	}
	
};
class women:public human
{
	public:
	void speciality()
	{
		cout<<"she have a  long hair"<<endl;
		cout<<"she wear a sari, dress,etc"<<endl;
		
	}
};
int main()
{
	men m;
	women w;
	cout<<"\t\t-:men:-"<<endl;
	m.behavior();
	m.speciality();
	cout<<"\t\t-:women:-"<<endl;
	w.behavior();
	w.speciality();
}
