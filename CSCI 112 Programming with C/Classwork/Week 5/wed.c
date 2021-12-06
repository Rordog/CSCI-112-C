#include <stdio.h>



int main(void){

/*
 *  The file open and null check was taken from the lecture
 */
    FILE* fptr = fopen("wed_922_in.txt", "r");
    if (fptr == NULL){
        perror("Could not open wed_922_in.txt");
        return (1);
    }   

    int arr[6][8];
    int num;
    int i = 0;
    int j = 0;
    int sum = 0;

/*
 *  This section was written by me.
 *  It prints the numbers associated with each array spot and the sum as the array increments i
 */
    while(1 == fscanf(fptr, "%d", &num)){        
    
        if(num == 0){
            printf("sum of row %d is %d\n", i, sum);
            arr[i++][j] = num;
            j = 0;
            sum = 0;
        }
        else{
            arr[i][j++] = num;
            printf("arr[%d][%d] is %d\n", i, j, num);
            sum += num;
        }
    }    

    return 0;
}
