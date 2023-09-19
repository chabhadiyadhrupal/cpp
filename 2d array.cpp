//print matrix 
#include<iostream >
using namespace std;
int main()
{
	int arr[2][2];
	int j,i;
	cout<<"enter your number:->"<<endl;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"your answer:->"<<endl;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			 cout<<arr[i][j]<<ends;
		}
		cout<<endl;
	}
}
