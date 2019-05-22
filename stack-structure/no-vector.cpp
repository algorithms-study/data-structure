#include <iostream>

#define MAX 100

using namespace std;

class Stack {
  private:
    int arr[MAX];
    int peek;
  public:
    Stack(); // construct
    void push(int element);
    int pop();
    int top();
    bool empty();
    int size();
};

Stack::Stack() {
  peek = -1;
}

void Stack::push(int element) {
  if (peek == MAX - 1) {
    cout << "STACK IS MAX" << endl;
  }

  arr[++peek] = element;
}

int Stack::pop() {
  return arr[peek--];
}

int Stack::top() {  
  return (peek == -1) ? 0 : arr[peek];
}

bool Stack::empty() {
  if (peek == -1) {
    return true;
  } else {
    return false;
  }
}

int Stack::size() {
  return peek + 1;
}

int main() {
  Stack stack;

  stack.push(10);
  stack.push(20);
  cout << stack.top() << endl; // 20

  stack.pop();

  cout << stack.size() << endl; // 1

  stack.pop();

  cout << stack.empty() << endl; //1

  cout << stack.top() << endl; // 0 == empty 일때
  // ============ 20 1 1 0

  cout << "============" << endl;

  stack.push(10);

  cout << stack.size() << endl; // 1

  stack.push(50);
  stack.push(60);
  stack.push(70);

  cout << stack.top() << endl; // 70

  cout << stack.empty() << endl; // 0
}
