#include <iostream>
#include <stack>

using namespace std;

int main() {
  // 스택 (Last In First Out) 생성
  stack<int> stack;

  /**
   * 스택 기본 함수
   * 
   * 추가 및 삭제
   * - push(element) : top에 원소를 추가
   * - pop() : top에 있는 원소를 삭제
   *
   * 조회
   * - top() : 스택의 처음이 아닌 가장끝에 있는 원소를 반환
   *
   * 기타
   * - empty() : 스택이 비어있으면 true, 아니면 false
   * - size() : 스택의 사이즈를 반환
   */

  // 스택에 등록
  stack.push(10);
  stack.push(20);
  stack.push(30);

  // 스택에 제일 위의 요소 가져오기
  cout << stack.top() << endl;
  
  // 스택의 제일 위의 요소 제거
  stack.pop();

  // 스택에 제일 위의 요소 가져오기
  cout << stack.top() << endl;
  
  // 스택의 제일 위의 요소 제거
  stack.pop();

  // 스택에 제일 위의 요소 가져오기
  cout << stack.top() << endl;
  
  // 스택의 제일 위의 요소 제거
  stack.pop();

  if (stack.empty()) {
    cout << "stack is empty" << endl;
  }

  return 0;
}
