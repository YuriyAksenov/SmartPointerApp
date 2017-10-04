// SmartPointerApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "SmartPointer.h"

using namespace std;



class Cfoo
{
public:
	Cfoo();
	~Cfoo();
	void counter() {
		k++;
	}
	int k;
};

Cfoo::Cfoo() :k(0)
{
	cout << "Konstructor.  | This class was creted by Smart Pointer.";
}

Cfoo::~Cfoo()
{
	cout << "Destructor. | This class was deleted automatically by Smart Pointer.";
}


int main()
{
	sm_ptr<Cfoo> cfoo(new Cfoo());
	
	cout << "\n---------------\n";
	cout << "k=" << cfoo->k << endl;
	cfoo->counter();
	cout << "k=" << cfoo->k << endl;
	cout << "\n---------------\n";
    return 0;
}

