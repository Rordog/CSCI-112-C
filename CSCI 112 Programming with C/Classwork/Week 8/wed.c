#include <stdio.h>
#include <string.h>

int main(){
    char line[80];
    char *token;

    FILE* fptr = fopen("inpa.txt", "r");
    while (fgets(line, 80, fptr) != NULL){
        
        token = strtok(line, ".");
        printf("Network: %s, ", token);

        token = strtok(NULL,".");
        printf("Host: %s-", token);

        token = strtok(NULL, ".");
        printf("%s-", token);

        token = strtok(NULL, ".");
        printf("%s", token);
    }
    
    fclose(fptr);


    return(0);
}
