#include<iostream>
using namespace std;
class dhrupal{
	private:
		string tv;
	public: 
	void show()
	{
		tv="i am watch ind vs pak cricket match";	
	}
	friend void nirav(dhrupal c);
};
void nirav (dhrupal c)
{
	cout<< "\t\tmy name is nirav. "<<c.tv;
	
	
}
int main()
{
	dhrupal dk;
	dk.show();
	nirav(dk);
	 
}

