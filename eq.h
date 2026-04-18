#pragma once
#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
	int *arr;
	int front;
	int rear;
	int capacity;
	int servedCount;
	string name;
public:
	Queue(int n, string nm);
	bool isFull();
	bool isEmpty();
	void enqueue(int n);
	void dequeue();
	void display();
	int getServedCount();
	string getName();
};