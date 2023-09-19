#include<iostream>
using namespace std;
struct dk{
	int a; //4 bytes
	float b; //4 bytes
	double c;//8 bytes// sum  (4+4+8=16)
	
};
union dk2{
	int a;//4 bytes
	float b; //4 bytes
	double c;//8 bytes//large (8)	
};
int main()
{
	struct dk d;
	union dk2 d2;
	cout<<"struct:->"<<sizeof(d)<<endl<<"union:->"<<sizeof(d2);
	
}
