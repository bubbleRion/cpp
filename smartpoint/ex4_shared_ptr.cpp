#include <iostream>
#include <memory>
using namespace std;

void useShared(shared_ptr<int> ptr)
{
    cout << "넘겨 받은 ptr의 use count :" << ptr.use_count() << endl;
}

int main()
{
    auto a = make_shared<int>(100);
    auto b = a;
    auto c = a;

    cout << "a use_count : " << a.use_count() << endl;
    cout << "b use_count : " << b.use_count() << endl;
    // cout << "c use_count : " << c.use_count() << endl;

    return 0;
}