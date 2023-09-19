#include<iostream>
using namespace std;
struct student{
	char name[20];//20 bytes
	int roll; //4 bytes
	float marks; //4 bytes

	
};

int main()
{
	struct student d;

	cout<<"enter your name:-";
	cin>>d.name;
	cout<<"enter your roll number:-";
	cin>>d.roll;
	cout<<"enter your marks:-";
	cin>>d.marks;
	
	cout<<"\n\n\tyour name:->"<<d.name<<endl;
	cout<<"\tyour roll number:->"<<d.roll<<endl;
	cout<<"\tyour marks:->"<<d.marks<<endl;
}
