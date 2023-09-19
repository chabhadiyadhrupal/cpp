#include<iostream>
using namespace std;
int main()
{
	cout <<"exicution start"<<endl;
    float a,b;
	float c;
	cout<<"enter your 2 number:->"<<endl;
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw b;
			
		}
		c=a/b;
		cout<<"answer:-"<<c;
	}
	catch(float n)
	{
		cout<<"can not divided by "<<n;
	}
	
	cout <<endl<<"exicution ended"<<endl;
	
}
