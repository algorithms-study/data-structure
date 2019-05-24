#include <iostream>
#include <vector>

using namespace std;

class Queue {
  private:
    int front; // head
    int rear; // tail
    vector<int> arr;
  public:
    Queue();
    void push(int element); // Enqueue
    void pop(); // Dequeue
    bool empty();
    int size();
    int first();
    int back();
};

Queue::Queue() {
  front = 0;
  rear = -1;
  arr.resize(100);
}

void Queue::push(int element) {
  arr[++rear] = element;
}

void Queue::pop() {
  arr[front++];
}

int Queue::back() {
  return arr[rear];
}

int Queue::first() {
  return arr[front];
}

int Queue::size() {
  return (rear + 1) - front;
}

bool Queue::empty() {
  return ((rear + 1) - front) == 0 ? true : false;
}

int main() {
  Queue queue;

  queue.push(10);
  queue.push(20);
  queue.push(30);

  cout << queue.first() << endl; // 10

  queue.pop();

  cout << queue.first() << endl; // 20
  cout << queue.back() << endl; // 30

  cout << queue.size() << endl; // 2

  cout << queue.empty() << endl; // 0
}
