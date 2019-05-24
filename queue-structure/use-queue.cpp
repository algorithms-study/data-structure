#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> queue;

  /**
   * 큐 구현 함수 (First In Last Out)
   *
   * 추가 및 삭제
   * - push(element) : 큐에 원소를 추가 (뒤에)
   * - pop() : 큐에 있는 원소를 삭제 (앞에)
   *
   * 조회
   * - front() : 큐 제일 앞에 있는 원소를 반환
   * - back() : 큐 제일 뒤에 있는 원소를 반환
   *
   * 기타
   * - empty() : 큐가 비어있으면 true, 있으면 false
   * - size() : 큐의 사이즈를 반환
   */

   queue.push(10);
   queue.push(20);

   cout << queue.front() << endl; // 10

   queue.push(30);
   queue.push(40);

   cout << queue.back() << endl; // 40

   queue.pop();

   cout << queue.size() << endl; // 3

   queue.pop();
   queue.pop();
   queue.pop();

   cout << queue.size() << endl; // 0

   cout << queue.empty() << endl; // 1
}
