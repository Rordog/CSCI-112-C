#include <stdio.h>



int num;
int total = 0;

int main(void){
    scanf("%d", &num);
    while (scanf("%d", &num) == 1){
        total += num;
    }
    printf("The sum is %d \n", total);
}
