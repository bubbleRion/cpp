#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    // array
    // 고정 크기 배열. STL 중 속도가 가장 빠르다. 그냥 배열 보다는 살짝 느림.
    array<int, 10> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (const auto &x : arr)
        cout << x << " ";
    cout << endl;

    // deque -> 많은 메버 함수가 정의
    // 동적 크기, 양쪽 삽입/삭제 가능
    deque<int> dq = {1, 2, 3};
    dq.push_back(4);
    dq.push_front(0);
    dq.emplace_back(5);
    dq.emplace_front(-1);
    dq.insert(dq.begin() + 3, 2.5);

    for (const auto &v : dq)
        cout << v << " ";
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for (const auto &v : dq)
        cout << v << " ";
    cout << endl;

    list<int> lst = {1,2,3};
    // iterator add num impossible 이터레이터에 숫자 더하기 불가능
    auto it = lst.begin();
    ++it;
    ++it;
    ++it;
    lst.insert(it , 3);
    for(const auto &v : lst){
        cout << v << " ";
    }
    cout << endl;

    // set 집합 - 중복이 없는 자료들, 자동 정렬.
    set<int> s = {3,1,2,2,1};
    for (const auto& v : s){
        cout << v << " ";
    }
    cout << endl;
    cout << "s 집합의 크기는 " << s.size() << endl;

    // unordered map
    // 해쉬 테이블 기반의 자료 -> 아주아주 아주~ 빠른 접근 할 때
    // 내가 검색해야 될 대상이 메모리의 주소라면 주소 접근이 가장 빠르기에 hash는 그런 아이디어에서 출발함.
    // key와 메모리의 연결 /  메모리로 큰 데이터에 접근.
    // 가장 문제점이 key값이 메모리와 연결이 되야 된다.   
    // hash는 암호화를 하는 것.
    // 인코딩 디코딩 개념이 들어 갈 수 있다.
    // 양방향이고 암호화를 하고 복호화가 가능하다.

    unordered_map<std::string, int> um = {{"apple" , 100} , {"banana" , 150}, {"mango" , 200}};
    // 모든 것을 가지고 오려면 그냥 map을 쓰세요.
    for (const auto &[key , val] : um)
    {
        cout << key << " : " << val << endl;
    }
    // 참조가 빠르다.
    cout << um["apple"] << endl;
    
    return 0;
}