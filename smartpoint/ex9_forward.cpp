#include <iostream>
#include <utility>

using namespace std;

void process(string&& s){
    cout << "Rvalue 참조 : " << s << endl;
}

void wrapper(string && s){
    process(forward<string>(s));
}

int main()
{
    wrapper(string("hello , world!"));
    return 0;
}

// noexcept 함수가 다 동작하고 나서 예외처리(error)
// 리터럴 상수는 Rvalue에 포함됨.
// int a = 3 <-- Rvalue;
// 3 = 3 ==> error 발생
// 일반적인 함수에서는 복사 연산자가 사용되기 때문에
// Rvalue의 상태를 wrapeer 에서 받게 되면은 Lvalue로 변환이 됨. (변수 취급)
// 하지만 &&를 쓰게 되면 메모리를 넘김.
// 메모리를 넘기게 되면 복사가 아닌 이동만 하게 됨.
// 그러면 Rvalue 그대로 사용하게 됨.