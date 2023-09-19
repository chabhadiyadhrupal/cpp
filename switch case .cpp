#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"press 1 to print monday\n";
	cout<<"press 2 to print tuesday\n";
	cout<<"press 3 to print wednesday\n";
	cout<<"press 4 to print thursday\n";
	cout<<"press 5 to print friday\n";
	cout<<"press 6 to print saturday\n";
	cout<<"press 7 to print sunday\n\n\t";
	cout<<"enter your choice:->";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"monday";
			break;
		case 2:
			cout<<"tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;
		case 4:
			cout<<"thursday";
			break;
		case 5:
			cout<<"friday";
			break;
		case 6:
			cout<<"saturday";
			break;
		case 7:
			cout<<"sunday";
			break;
		default:
			cout<<"invalided choice...";
			
	}
}
