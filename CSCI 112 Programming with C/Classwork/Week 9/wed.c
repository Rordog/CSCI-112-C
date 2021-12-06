#include <stdio.h>
#include <string.h>
#include "grade.h"

int main(void){

    Grade g1;

    printf("Enter name and grade: ");
    scanf("%s %lf", g1.name, &g1.gradeNum);

    if(g1.gradeNum > 93.0){
        strcpy(g1.letterGrade, "A");
    }
    else if(g1.gradeNum > 90.0){
        strcpy(g1.letterGrade, "A-");
    }
    else if(g1.gradeNum > 85.0){
        strcpy(g1.letterGrade, "B+");
    }
    else if(g1.gradeNum > 80.0){
        strcpy(g1.letterGrade, "B");
    }

    printf("%s has a grade of %s\n", g1.name, g1.letterGrade);

    return(0);
}
