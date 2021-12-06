#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ReadHurrs(char* hurricanes[]){
    FILE* fptr = fopen("hurricanes.csv", "r");
    //Error message if file not found
    if(fptr == NULL){
        printf("ERROR: could not open input file\n");
        exit(1);
    }
    char line[100];
    int i = 0;
    //Adds each line into array of hurricanes
    while(1){
        hurricanes[i] = malloc(sizeof(char)*100);
        if(fgets(line, 100, fptr)!= NULL){
            strcpy(hurricanes[i],line);            
        }else{
            break;
        }
        i++; 
    }
       
    return i;
}

void Sort(char* hurricanes[], int size){
    int i, j, min;
    char *temp;
    
    //Sorts hurricanes in alphabetical order
    for(i = 0; i < size-1; i++){
        min = i;
        for(j = i+1; j < size; j++){
            if(strcmp(hurricanes[min], hurricanes[j]) > 0){
                min = j;
            }          
        }
        temp = hurricanes[i];
        hurricanes[i] = hurricanes[min];
        hurricanes[min] = temp;
    }
}

void PrintInfo(char* hurricanes[], int size){
    char *result;
    //Prints name, category, and date of hurricanes to a separate output file
    FILE* fp = fopen("output.txt", "w");
    fprintf(fp, "Hurricanes in Florida with category and date.\n");
    for(int i = 0; i < size; i++){
        //Prints name of hurricane
        result = strtok(hurricanes[i], ",");
        fprintf(fp, "%-10s", result);
        //Category of hurricane
        result = strtok(NULL, " ");
        result = strtok(NULL, " ");
        fprintf(fp, "\t%s", result);
        //Day and month of hurricane
        result = strtok(NULL, ",");
        result = strtok(NULL, ",");
        fprintf(fp, "\t%s", result);
        //Year of hurricane
        result = strtok(NULL, "\n");
        fprintf(fp, " %s\n", result);

    }


}

int main(void){
    
    char *hurricanes[100];
    //Gets size of hurricane array
    int n = ReadHurrs(hurricanes);
    
    //sort the array
    Sort(hurricanes, n);

    //split array into different part s and print data
    PrintInfo(hurricanes, n);

    return(0);
}
