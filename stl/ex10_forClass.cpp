#include <iostream>
#include <cstddef>
// 컨테이너 만들기 , 코드에 집어넣으면 범위 포문 적용가능

template <typename T , std::size_t N>
class MyContainer{
private:
    T data_[N];

public:
    MyContainer()
    {
        for (std::size_t i = 0; i < N; ++i)
        {
            data_[i] = static_cast<T>(i + 1);
        }
    }
    class Iter
    {
    private:
        T *ptr;
    public:
        using __iterator_category = std::forward_iterator_tag;
        using value_type = T;
        using __difference_type = std::ptrdiff_t;
        using pointer = T *;
        using reference = T &;

        explicit Iter(T* p) : ptr(p) {}
        reference operator*() const { return *ptr; }
        pointer operator->() { return ptr; }
        Iter& operator++() {// 전위 이게 없으면 for 문이 안돌아감
            ++ptr;
            return *this;
        }
        Iter& operator++(int){ // 후위
            Iter temp = *this;
            ++(*this);
            return temp;
        }
        friend bool operator==(const Iter& a, const Iter& b) // == 논리연산
        {
            return a.ptr == b.ptr;
        }
        friend bool operator!=(const Iter& a, const Iter& b) // != 논리연산
        {
            return a.ptr != b.ptr;
        }    
    };
    Iter begin() {return Iter(data_);}
    Iter end() {return Iter(data_ + N);}

};
int main()
{
    MyContainer<int , 10> container;

    for(auto v : container){
        std::cout << v << " ";
        std::cout << std::endl;
    }
    return 0;
}