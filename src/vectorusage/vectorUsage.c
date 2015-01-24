#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
	vector<string> v;
	ifstream readFile("a.txt");
	string s;
	while(getline(readFile,s))
	{
		v.push_back(s);
	}
	for(vector<string>::iterator iter = v.begin(); iter != v.end() ;iter++)
	{
		cout<<*iter<<endl;
	}
	 
}
