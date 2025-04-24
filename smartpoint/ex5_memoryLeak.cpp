#include <memory>
using namespace std;

class B;

class A{
public:
    shared_ptr<B> b_ptr;
};

class B{
public:
    shared_ptr<A> a_ptr;
};

int main()
{
    auto a = make_shared<A>();
    auto b = make_shared<B>();
    // 여기까지는 잘못된 코드가 아님.
    a->b_ptr = b;
    b->a_ptr = a; // 여기서 순환참조가 일어남.

    return 0;
}