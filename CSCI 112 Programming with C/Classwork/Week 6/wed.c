#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    if(argc != 4){
        printf("ERROR: Not Enough Arguments");
        return(1);
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);
    int sum = num1 + num2 + num3;

    printf("The sum of %d, %d, and %d is %d\n", num1, num2,num3, sum);

    return(0);
}
