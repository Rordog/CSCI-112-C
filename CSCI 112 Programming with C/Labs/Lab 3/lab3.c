#include <stdio.h>

/*
 *  This program was completely written from scratch by me. *  
 */

/*  Monday Classwork
 *
 *  int function(input int num)
 *
 */
int  nineCount(int number){
    
    int sum = 0;
    int digit = 0;

/*
 *  The function nineCount return 1 or 0 as a boolean that tells whether the input could be divided by 9.
 *  This while loop divides the input by 10, stores the remainder and adds it to the printed equation and the sum.
 */
    while (number > 9){
        digit = number % 10;
        sum += digit;

        printf("%d + ", digit);

        number = number/10;
    }
    sum = sum + number;
    printf("%d = %d\n", number, sum);

/*
 *  These statements print the first half of the final statement because sum is not accessible to main,
 *  where the rest of the statement is.
 */

    if(sum % 9 == 0){
        printf("Since %d is divisible by 9, ", sum);
        return 1;
    }
    else{
        printf("Since %d is not divisible by 9, ", sum);
        return 0;
    }
}

int main(){

    int input;
    
    /*  Monday Classwork
     *  int main(void)
     *  do{
     *      read input
     *      break at 0
     *      give input to function
     *  while(input != 0)    
     */

    /*
     *  The do while loop takes the input and checks if it equals 0.
     *  If it does, the program dies. Otherwise it continues and
     *  prints the rest of the statement that prints at the end of nineCount.
     */
    do{
        printf("Enter number to check (0 to end): ");
        scanf("%d", &input);

        if (input == 0){
            break;
        }

        if(nineCount(input)==1){
            printf("%d is divisible by 9\n", input);
        }
        else{
            printf("%d is not divisible by 9\n", input);
        }
    }while (input != 0);
    return 0;

}
