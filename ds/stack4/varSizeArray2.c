#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void){

    int size;
    scanf("%d", &size);

    //malloc() / free()
    int *pArr = malloc(sizeof(int)*size);
    //double *pArr = malloc(sizeof(double)*size);

    assert(pArr /*!= NULL*/);
    // NULL이 왜 0 취급이지?

    for (int i = 0; i < size; i++){
        // pArr[i] = i;
        *(pArr + i) = i + 1;
    }
    for (int i = 0; i < size; i++){
        // pArrrintf("%d\n", pArr[i]);
        printf("%d ", *(pArr + i));
    }
    printf("\n");
    free(pArr);
    return 0;
}