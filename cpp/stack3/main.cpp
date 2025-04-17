#include <iostream>
#include "stack.h"

int main()
{
    Stack s1(10);
    Stack s2;
    // Stack s3 = s2;

    s1.push(100);
    s1.push(200);
    s1.push(300);

    while(!s1.isEmpty()){
        std::cout << s1.pop() << std::endl;
    }

    std::cout << "s1 capacity : " << s1.size() << std::endl;
    std::cout << "s1 reamin : " << s1.remain() << std::endl;


    // s1 = s2;

    return 0;
}