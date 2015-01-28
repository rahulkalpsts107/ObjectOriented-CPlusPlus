#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class String_Ex
{
	int len;
	char * ptr;
	public:
	String_Ex(char *str):ptr(str),len(strlen(str)){}
	String_Ex():ptr(NULL),len(0){}
	char *getString(){return ptr;};
	int getLen(){return len;};
	String_Ex  operator+(String_Ex & str)
	{
		String_Ex temp;
		char *a = new char[(this->getLen())+(str.getLen())+2];
		temp.ptr = &a[0];
		temp.len = strlen(this->ptr);
		strcpy(a,this->ptr);
		strcat(a,str.ptr);
		//temp.ptr = &a[0];
		temp.len+=str.len;
		return temp;
	}
};

ostream& operator <<(ostream& os,String_Ex & ref)
{
		cout<<"String is : \t"<<ref.getString()<<" \tlength is : \t"<<ref.getLen()<<endl;
}

int main() {
	// your code goes here
	
	char a[10]="Hello";
	String_Ex ab(&a[0]);
	char b[10]="World";
	String_Ex cd(&b[0]);
	cout<<ab;
	String_Ex temp = ab+cd;
	cout<<temp<<endl;
	return 0;
}
