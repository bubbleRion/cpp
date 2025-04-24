#include <iostream>
#include <memory>

using namespace std;

class Myclass{
public:
    int test_a;
    Myclass()
    {
        cout << "Myclass 생성!!" << endl;
        test_a = 100;
    }
    ~Myclass(){ cout << "Myclass 소멸!!" << endl; }
};

int main()
{
    // unique_ptr<Myclass> ptr = make_unique<Myclass>();// unique_ptr을 만드는 make_unique function
    auto ptr = make_unique<Myclass>(); // heap에 만들어진 메모리. 보이진 않지만 new 를 통해서 스마트 포인터를 만든거임.
    // 강조! 에러 상황에서도 동작!!
    cout << ptr->test_a << endl;
    return 0;
}