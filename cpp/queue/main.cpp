#include <iostream>
#include "queue.h"
int main()
{
   Queue q1(100), q2(10);

   // q1.initStack(10);
   // q2.initStack(100);
   
   q1.push(100);
   q1.push(200);
   q1.push(300);
   // printf("q1 1st pop() : %d\n", q1.pop());
   // printf("q1 2nd pop() : %d\n", q1.pop());
   // printf("q1 3rd pop() : %d\n", q1.pop());
   std::cout << "q1 1st pop() : " << q1.pop() << std::endl;
   std::cout << "q1 2nd pop() : " << q1.pop() << std::endl;
   std::cout << "q1 3rd pop() : " << q1.pop() << std::endl;

   q2.push(900);
   q2.push(800);
   q2.push(700);
   // printf("q2 1st pop() : %d\n",q2.pop());
   // printf("q2 2nd pop() : %d\n",q2.pop());
   // printf("q2 3rd pop() : %d\n",q2.pop());
   std::cout << "q2 1st pop() : " << q2.pop() << std::endl;
   std::cout << "q2 2nd pop() : " << q2.pop() << std::endl;
   std::cout << "q2 3rd pop() : " << q2.pop() << std::endl;
   // q1.cleanupStack();
   // q2.cleanupStack();
   return 0;
}
