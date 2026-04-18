#include"eq.h"
using namespace std;

Queue::Queue(int n, string nm) {
	name = nm;
	capacity = n;
	front = -1;
	rear = -1;
	servedCount = 0;
	arr = new int(capacity);
}

bool Queue::isFull() {
	return capacity == rear + 1;
}

bool Queue::isEmpty() {
	if (front == -1 && rear == -1) {
		return true;
	}
	return false;
}

void Queue::enqueue(int n) {
	if (isFull()) {
		cout << "Station " << name << " array is full" << endl;
		return;
	}
	if (isEmpty())
		front++;
	rear++;
	arr[rear] = n;
	cout << "Spacecraft " << arr[rear] << " added to Station " << name << endl;
}

void Queue::dequeue() {
	if (isEmpty()) {
		cout << "Station " << name << "array is empty" << endl;
		return;
	}
	if (rear == front) {
		cout << "Station " << name << " docking spacecraft:" << arr[front] << endl;
		servedCount++;
		front = -1;
		rear = -1;
	}
	else {
		
		cout << "Station " << name << " docking spacecraft:" << arr[front++] << endl;
		servedCount++;
	}
}

void Queue::display() {

	if (isEmpty()) {
		cout << "Station" << name << " is empty"<<endl;
	}
	else {
		cout << "Station " << name << " Queue: ";
		for (int i = front; i <= rear; i++) {
			cout << arr[i]<<" ";
		}
		cout << endl;
	}
}

int Queue::getServedCount() {
	return servedCount;
}

string Queue::getName() {
	return name;
}

