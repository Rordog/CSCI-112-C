#include <stdio.h>
#include <stdlib.h>

void readAddresses(unsigned char adds[][4], int n);
void sortAddresses(unsigned char addresses[][4], int num_addresses);
void printInfo(unsigned char addresses[][4], int num_addresses);

int main(int argc, char** argv){
    //get command line arguments
    //print an error and quit if not there
    //
    //convert command line arg to int
    int num_addresses = atoi(argv[1]);
    unsigned char addresses[num_addresses][4];
    
    //read addresses into array
    readAddresses(addresses, num_addresses);

    //sort addressses into increasing order
    sortAddresses(addresses, num_addresses);
    
    //find and print the info required for the program
    printInfo(addresses, num_addresses);

    return(0);
}

void readAddresses(unsigned char adds[][4], int n){
    //hhu = format for unsigned char
    int i = 0;
    while(scanf("%hhu.%hhu.%hhu.%hhu", &adds[i][0], &adds[i][1], &adds[i][2], &adds[i][3]) == 4){
        ++i;
    }
    return;
}

