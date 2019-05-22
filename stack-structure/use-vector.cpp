#include <iostream>
#include <vector>

#define MAX 10000

using namespace std;

class Stack {
  private:
    int peek;
  public:
    vector<int> arr;
    Stack(); // construct
    void push(int element);
    int pop();
    int top();
    bool empty();
    int size();
};

Stack::Stack() {
  // arr.resize(MAX);
  peek = -1;
}

// top 에 원소를 추가
void Stack::push(int element) {
  if (peek == MAX - 1) {
    cout << "MAX STACK" << endl;
  }

  // arr[++top] = element;
  arr.push_back(element); // vector method
}

// top의 가장 끝에 있는 원소를 제거
int Stack::pop() {
  if (arr.size() == 0) {
    cout << "EMPTY STACK" << endl;
  }
  arr.pop_back();
  return arr.back(); // vector method
}

// peek = 스택의 가장 끝에 있는 원소를 반환
int Stack::top() {
  return arr.back();
}

// 스택이 비어있는지 여부
bool Stack::empty() {
  return arr.empty();
}

// 스택의 사이즈를 반환
int Stack::size() {
  return arr.size();
}

int main() {
  Stack stack;

  stack.push(10);
  stack.push(20);
  cout << stack.top() << endl;

  stack.pop();
  cout << stack.top() << endl;

  cout << stack.empty() << endl; // empty 이면 true

  cout << stack.size() << endl;
}
