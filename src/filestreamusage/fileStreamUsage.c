#include <string>
#include <fstream>
using namespace std;
int main(int argc ,char ** argv)
{
	ifstream readFile("a.txt");
	ofstream outFile("b.txt");
	string buff;
	while(getline(readFile,buff))
	{
		outFile << buff;
	}
	return 1;
}
