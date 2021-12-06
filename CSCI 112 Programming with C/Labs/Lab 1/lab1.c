#include <stdio.h>




/*
 * All code written in this program was written by me with no inspiration or assistance
 */

int main(void){

/*
 *  Lists all variables used to create final equation
 */
    int gallons;
    int efficiency;
    double percentEffi;
    int BTUperbar = 5800000;
    double finalBTU;
    double barrelCount;
    
/*
 * Gets input from user for number of gallons and furnace efficiency
 */

    printf("Enter number of gallons of oil for house: ");
    scanf("%d", &gallons);
    printf("Enter furnace  efficiency: ");
    scanf("%d", &efficiency);

/*
 * Converts gallons to barrels and efficiency into a percentage
 */

    barrelCount = (double)gallons/42;
    percentEffi = (double)efficiency/100;
    
/*
 * Calculates final BTUs and converts the result into millions instead of ones before printing the result
 */

    finalBTU = barrelCount * (double)BTUperbar * percentEffi / 1000000;

    printf("BTUs delivered to house through furnace is %.2lf million\n", finalBTU);

    return(0);
}
