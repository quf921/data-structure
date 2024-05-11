// TODO: include를 적절하게 추가
#include "list.h"
#include "queue.h"
#include "stack.h"
#include <iostream>

// TODO: T 타입을 적절한 타입으로 변경
void print(LinkedList &list) { list.print(); }

void testQueue() {
  std::cout << "test queue\n";
  Queue queue;

  for (int i = 0; i < 10; i++)
    queue.push(i);

  for (int i = 100; i > 90; i--)
    queue += i;

  std::cout << queue.peek() << std::endl;
  print(queue);

  for (int i = 0; i < 5; i++) {
    std::cout << queue.pop() << std::endl;
  }
  print(queue);
}

void testStack() {
  std::cout << "test stack\n";
  Stack stack;

  for (int i = 0; i < 10; i++)
    stack.push(i);

  for (int i = 100; i > 90; i--)
    stack += i;

  std::cout << stack.peek() << std::endl;
  print(stack);

  for (int i = 0; i < 5; i++) {
    std::cout << stack.pop() << std::endl;
  }
  print(stack);
  std::cout << "test stack end\n";
}

void testList() {
  std::cout << "test list\n";
  List list;

  std::cout << "test list\n";
  for (int i = 0; i < 10; i++)
    list.insert(i, i);

  print(list);
}

int main() {
  testQueue();
  std::cout << "test func\n";
  testStack();
  std::cout << "test func\n";
  testList();
}