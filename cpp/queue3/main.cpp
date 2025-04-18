#include <iostream>
#include "queue.h"
int main()
{
   Queue q1(10); // Queue q1 = 10; ??? ==> explicit
   Queue q2; // Quque q2(100);
   // Queue q3 = q2; // ??? 복사 X
   // q1 = q2;  // 치환 X

   q1.push(100);
   q1.push(200);
   q1.push(300);

   while(!q1.empty()){
      std::cout << q1.pop() << std::endl;
   }

   std::cout << "q1.size : " << q1.size() << std::endl;
   std::cout << "q1 remain : " << q1.remain() << std::endl;
   //


   return 0;
}
