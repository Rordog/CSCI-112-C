#include <stdio.h>
#include <stdlib.h>

int main(void){


    int m = 20;
    int *iptr;
    iptr =(int *) malloc(sizeof(int));
    printf("iptr = %p\n", iptr);

    double n = 1.1;
    double *dptr;
    dptr = (double *) malloc(sizeof(double));
    printf("dptr = %p\n", dptr);

    char o = "o";
    char *cptr;
    cptr = (char *) malloc(sizeof(char));
    printf("cptr = %p\n", cptr);

    free(iptr);
    free(dptr);
    free(cptr);

    return(0);
}
