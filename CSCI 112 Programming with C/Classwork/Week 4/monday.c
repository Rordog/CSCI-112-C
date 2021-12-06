#include <stdio.h>


int main(void){

    char letters[20];
    int n;

    scanf("%d ", &n);

    for(int i = 0; i < n; i++){
        scanf("%c", &letters[i]);
    }
    for(int j = 4; j >= 0; j--){
        printf("letters [%d] is %c\n",j, letters[j]);
    }
    return(0);
}
