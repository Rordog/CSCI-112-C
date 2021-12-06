#include <stdio.h>
#include "classes.h"
#include <string.h>

void printProf(Class[], int);
void printDay(Class[], int);
void printNum(Class[], int);

int main(void){

    // Reads in the file with an error message if file not found
    FILE* fptr = fopen("classes.csv", "r");
    if(fptr == NULL){
        printf("ERROR: could not open input file\n");
        return(1);
    }

    char line[100];
    Class classes[15];
    int i = 0;
    char *info;
    // Reads the file into the array of classes and assigns the required values to the class struct
    while (1){
        if(fgets(line, 100, fptr) != NULL){
            info = strtok(line, ",");
            strcpy(classes[i].classNum, info);
            info = strtok(NULL, ",");
            strcpy(classes[i].className, info);
            info = strtok(NULL, ",");
            info = strtok(NULL, ",");
            strcpy(classes[i].seatNum, info);
            info = strtok(NULL, ",");
            info = strtok(NULL, ",");
            info = strtok(NULL, " ");
            strcpy(classes[i].lastName, info);
            info = strtok(NULL, ",");
            strcpy(classes[i].firstName, info);
            info = strtok(NULL, " ");
            strcpy(classes[i].days, info);
            info = strtok(NULL, "\0");
            strcpy(classes[i].times, info);
        }
        else{
            break;
        }
        i++;
    }
 
    int size = i;
    char menuInput;
    char nl;
    // Runs the menu and runs the function associated with the input
    do{
        printf("Choices:\n");
        printf("n - print class given number\n");
        printf("d - print all classes for a given day combo\n");
        printf("p - print all classes for a given professor\n");
        printf("q - quit\n");
        printf("Please select an option: ");
        scanf(" %c%c", &menuInput, &nl);

        switch(menuInput){
            case 'n':
                printNum(classes, size);
                break;
            case 'd':
                printDay(classes, size);
                break;
            case 'p':
                printProf(classes, size);
                break;
            case 'q':
                break;
        }

    }while (menuInput != 'q');

    return(0);
}
