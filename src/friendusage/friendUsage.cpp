#include <iostream>
using namespace std;

class B;
class A
{
		friend class B;
		int pvt_A;
		friend void set_A(A &a);
	public:
		void print_A();
		A():pvt_A(11){} //constructor
		


};

class B
{
	int pvt_B = 0xDEADBEEF;
	public:
	void print_A(A &a);
};

void set_A(A &a)
{
	a.pvt_A = 7;
}

void A::print_A()
{
	cout<<"A is "<<pvt_A<<endl;
}

void B::print_A(A &a)
{
	cout<<"friend A is "<<a.pvt_A<<endl;
}

int main(int argc ,char **av)
{
	A a;
	a.print_A();
	set_A(a);
	a.print_A();
	B b;
	b.print_A(a);
	return 1;
}
