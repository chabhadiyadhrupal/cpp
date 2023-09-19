#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[]="dhrupal ",str2[20]="";//str2 in no value asign
	cout<<"frist string :->"<<str1<<endl;
	cout<<"second string :->"<<str2<<endl;
	strcpy(str2,str1);//copy string
	cout<<"after copy:->"<<endl;
	cout<<"first string:->"<<str1<<endl;
	cout<<"second string:->"<<str2; 
}
