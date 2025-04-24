#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int main()
{
    vector<string> vec;
    constexpr int N = 100'000;
    string str = "sample text";
    for(int i = 0 ; i < N; ++i)
    {
        str += "sample text";
    }
    
    // string str = "sample text";
    auto start = chrono::high_resolution_clock::now();
    // vec.push_back(str);
    vec.push_back(move(str));
    

    auto end = chrono::high_resolution_clock::now();
    cout << "이동 시간 : " << chrono::duration<double>(end - start).count() << "초" << endl;
    return 0;
}