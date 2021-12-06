#include <stdio.h>
#include "classes.h"
#include <string.h>

void printLine(Class class);

// Gets a day combination and looks for any classes with the same day combo
void printDay(Class classes[], int size){
    char input[4];
    char letter;
    printf("Enter class days to print (MWF or TR): ");
    scanf("%[^\n]%c", input, &letter);
    for(int i = 0; i < size; i++){
        int value = strcmp(input, classes[i].days);
        if(value == 0){
            printLine(classes[i]);
        }  
    }   
}

// Gets a Professor's last name and looks for any classes with the same prof
void printProf(Class classes[], int size){
    char input[10];
    char letter;
    printf("Enter Professor's Last Name: ");
    scanf("%[^\n]%c", input, &letter);
        
    for(int i = 0; i < size; i++){
        int value = strcmp(input, classes[i].lastName);
        if(value == 0){
            printLine(classes[i]);
        }
    }
}

// Gets a class number and looks for any classes with the same number
void printNum(Class classes[], int size){
    char input[10];
    char letter;
    printf("Enter class number (Ex. CSCI 232): ");
    scanf("%[^\n]%c", input, &letter);
    for(int i = 0; i < size; i++){
        int value = strcmp(input, classes[i].classNum);
        if(value == 0){
            printLine(classes[i]);
        }
    }
}

// Prints the class data
void printLine(Class class){

    printf("%-30s \t\t%s \t\t%s, %s \t%s \t%s \t%s\n", class.className, class.classNum,
    class.lastName, class.firstName, class.seatNum, class.days, class.times);

}
