#include <iostream>
#include <vector>
using namespace std;
// clang++ -std=c++11 <filename>
int main()
{
    // 이터레이터는 값을 가리키는 포인터에 가까움
    vector<int> test_vector = {1,2,3,4,5,6};

    for(vector<int>::iterator it = test_vector.begin(); it != test_vector.end(); ++it){
        cout << *it << endl;
    }

    // iterator 가 정의 - begin() , end()
    // *it 역참조가 가능해야 한다.
    for(auto v : test_vector){ // 세번 째 방식 모던 c++
        cout << v << endl;
    }

    for(auto &v : test_vector){ // 컨테이너의 값을 변경
        cout << v + 1 << endl;
    }

    for(const auto &v : test_vector){ // 메모리 효율적으로 값 참고 할 떄
        cout << v + 1 << endl;
    }

    return 0;
}