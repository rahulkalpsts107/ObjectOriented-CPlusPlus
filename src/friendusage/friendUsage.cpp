#include <iostream>
using namespace std;

class A
{
		int pvt_A;
		friend void set_A(A &a);
	public:
		void print_A();
		A():pvt_A(11){}

};

void set_A(A &a)
{
	a.pvt_A = 7;
}

void A::print_A()
{
	cout<<"A is "<<pvt_A<<endl;
}

int main(int argc ,char **av)
{
	A a;
	a.print_A();
	set_A(a);
	a.print_A();
	return 1;
}
