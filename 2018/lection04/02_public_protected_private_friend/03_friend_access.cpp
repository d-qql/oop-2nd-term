#include <iostream>

using namespace std;

class A
{
friend class B;
public:
	A(int i);
	void describe();
private:
	int secret;
};

A::A(int i)
{
	this->secret = i;
}

void A::describe()
{
	std::cout << "I'm A: " << this->secret << std::endl;
}

class B
{
public:
	B();
	void run(A* a);
};

B::B()
{
}

void B::run(A* a)
{
	// А теперь всё работает, так как B является для A friend
	std::cout << "Class B run: " << a->secret << std::endl;
	a->secret = 13;
}

int main()
{
	A* a = new A(42);
	a->describe();
	B* b = new B();
	b->run(a);
	a->describe();
	delete b;
	delete a;
	return 0;
}
