#include<iostream>
using namespace std;
class smit;
class dhrupal{
	private: 
	int money;
	public:
	 void ihave()
	{
		money=500;
	}
	friend void nirav(dhrupal c, smit c2);
};
	
 class smit
{
 
	private: 
	int money2;
	public:
	 void ihave()
	{
		money2=200;
	}
	friend void nirav(dhrupal c, smit c2);
};
void nirav(dhrupal c,smit c2)
{ 
int r;
	r=c.money+c2.money2;
	cout<<" my name is nirav. i have "<<r <<" rupees";
	
}	
int main()
{
	dhrupal obj;
	obj.ihave();
	smit obj2;
	obj2.ihave();
	nirav(obj,obj2);
	
	
}
