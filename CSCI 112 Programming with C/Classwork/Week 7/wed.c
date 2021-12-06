#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    FILE *fptr = fopen("strings.txt", "r");
    if (fptr == NULL){
        return(1);
    }
    char *arr[20];
    char *str = malloc(sizeof(char) * 15);
    //read in 1 string
    int n = 0;
    while (fscanf(fptr, "%s", str) != EOF){
        //copy string into the array
        arr[n] = malloc(sizeof(char) * 15);
        strcpy(arr[n], str);
        ++n;
    }
    //prints the first character of each string in reverse
    for(int i = n-1; i >=0; --i){
        printf("%s starts with %c\n", arr[i], arr[i][0]);
    }

    return(0);
}
