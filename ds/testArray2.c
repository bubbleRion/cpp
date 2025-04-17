#include <stdio.h>

int sumArray(const int *pArr , int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i){
        sum += pArr[i];
    }
    return sum;
}

int sumArray2(int arr [] , int size)  //  int arr [0] 안에 적힌 사이즈는 무시됨.
{
    int sum = 0;
    // for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){ // 이건 잘못된 형식의 계산.
    for(int i = 0; i < size; ++i){ 
        // sum += *arr++;  // arr is a pointer!!!
        sum += arr[i];
    }
    return sum;
}
int main(void)
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    // int sum = sumArray(nums , 10);
    int sum = sumArray(nums + 5 , 5);
    // int sum = sumArray2(nums , 10);
    printf("sum : %d\n" , sum);
    return 0;
}