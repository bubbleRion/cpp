#ifndef ARRAY_H
#define ARRAY_H
#define ARRAY_SIZE 100

class Array{

private:
    int *pArr_;
    int size_;
public:
    // Array();
    // Array(int size);
    // =>
    explicit Array(int size = ARRAY_SIZE);

    Array(const int *pArr , int size);
    Array(const Array& rhs);
    ~Array();

    Array& operator=(const Array& rhs);
    bool operator==(const Array& rhs) const;
    
    // X Array() { }
    // X Array(const Array&) { /* memeberwise copy */ }
    // X ~Array() { }
    // X Array& operator=(const Array&) { /*memeberwise copy */ return *this}
    // Array *operator() { return this; }
    // const Array*operator&() const {return this;}
};

#endif