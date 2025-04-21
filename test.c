#include <stdio.h>
#include <string.h>
int main(void){

    char test1[] = "Hello Wolrd!";
    char *test2 = "Hello Wolrd!";
    for (int i = 0; i < strlen(test1); i++) {
        printf("%02X ", (unsigned char)test1[i]); // 16진수로 출력
    }
    printf("\n");
    for (int i = 0; i < strlen(test2); i++) {
        printf("%02X ", (unsigned char)test2[i]); // 16진수로 출력
    }
    printf("\n");
   

    return 1;
}