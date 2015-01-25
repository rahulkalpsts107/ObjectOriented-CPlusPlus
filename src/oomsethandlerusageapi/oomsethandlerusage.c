#include <new>
#include <iostream>
#include <stdlib.h>
using namespace std;

void my_oom_handler(void)
{
	cout<<"Out of memory"<<endl;
	//exit(0);
}
int main(int argc ,char **argv)
{
	set_new_handler(my_oom_handler);
	//for(;;)
	char *p;
	int i =1000000;
	while(i !=0){
		i--;
		//int *i = new int [10];
		p = new char [1024*1024*1024];
		p =NULL;
		 p = new char [1024*1024*1024];
		 p =NULL;
		 p = new char [1024*1024*1024];
		 p =NULL;
		 p = new char [1024*1024*1024];
		 p =NULL;
		 p = new char [1024*1024*1024];
		 p =NULL;
		 p = new char [1024*1024*1024];
		 p =NULL;
		 p = new char [1024*1024*1024];
		 //p = NULL;
	}
	if(p == NULL)cout<<"Null ptr"<<endl;
	else cout<<"Not bad"<<endl;
	return 1;
}
