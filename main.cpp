#include "eq.h"
#include <iostream>
using namespace std;

int main(void) {
	Queue a(3, "Elysium");
	Queue b(3, "K-7");

	//enqueue
	a.enqueue(101);
	a.enqueue(102);
	b.enqueue(201);
	b.enqueue(202);
	b.enqueue(203);
	cout << endl;

	//dequeue
	a.dequeue();
	a.dequeue();
	b.dequeue();

	a.display();
	b.display();

	if (a.getServedCount() > b.getServedCount())
		cout << "Station " << a.getName() << " was used more "<<endl;
	else if(a.getServedCount() < b.getServedCount())
		cout << "Station " << b.getName() << " was used more " << endl;
	else if(a.getServedCount() == b.getServedCount())
		cout << "Station " << b.getName() << " and "<<a.getName()<<"were used same" << endl;
}