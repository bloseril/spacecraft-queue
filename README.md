# 🚀 Spacecraft Queue Management System
This project implements a **FIFO (First-In-First-Out) Queue data structure** in C++ to manage spacecraft traffic at space stations.

The system simulates the arrival and departure of spacecrafts and compares the usage of multiple space stations based on processed traffic.

---

## Features
- FIFO Queue implementation
- Dynamic memory management using arrays
- Enqueue (add) and dequeue (remove) operations
- Queue state checks (`isFull`, `isEmpty`)
- Display current spacecrafts in the queue
- Support for multiple space stations
- Comparison of station usage based on served spacecraft count

---

## Concepts Used
- Data Structures (Queue - FIFO)
- Object-Oriented Programming (OOP)
- Dynamic Memory Allocation
- Class Design

---

## Class Structure

```cpp
class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int servedCount;
    string name;

public:
    Queue(int capacity, string name);
    bool isFull();
    bool isEmpty();
    void enqueue(int spacecraft);
    void dequeue();
    void display();
    int getServedCount();
    string getName();
};
