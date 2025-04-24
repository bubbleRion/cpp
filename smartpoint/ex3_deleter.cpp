#include <cstdio>
#include <memory>
#include <iostream>

using namespace std;

class FileCloser
{
public:
    void operator()(FILE *fp)
    {
        if(fp)
        {
            fclose(fp);
        }
    }
};


void useUnique(unique_ptr<FILE , FileCloser> ptr){
    cout << "fp 를 받아서 사용한 함수!!" << endl;
}


int main()
{
    auto fp = fopen("/Users/bagjaehyeong/Desktop/cpp/stl/1000.txt" , "r");
    unique_ptr<FILE , FileCloser> filePtr(fp);
    // unique_ptr<FILE , FileCloser> filePtr(fopen("/Users/bagjaehyeong/Desktop/cpp/stl/1000.txt" , "r"));

    // file 관련된 코드...
    // fclose(fp);
    useUnique(move(filePtr));
    cout << "main 함수의 끝" << endl;
    return 0;
}