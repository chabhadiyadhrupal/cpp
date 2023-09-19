//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ofstream newfile("D:\\Tutorials\\test.txt");
//	cout <<"file created...";
//	newfile<<"c++ language full toturial ";
//	newfile.close();
//}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ifstream newfile("D:\\Tutorials\\test.txt");
	while(getline(newfile,str))
	{
		cout<<str<<endl;
	}
	newfile.close();
}
