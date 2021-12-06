#include <stdio.h>
#include <stdlib.h>


void printInfo(unsigned char addresses[][4], int size){
    
    FILE *fp;
    fp = fopen("output.txt", "w");
    
    //opens all the variables for the 3 classes being tracked
    unsigned char ahost[1];
    int aNetCount = 0;
    int aHostCount = 0;

    unsigned char bhost[2];
    int bNetCount = 0;
    int bHostCount = 0;

    unsigned char chost[3];
    int cNetCount = 0;
    int cHostCount = 0;
    
    // Iterates through all entries in addresses
    for(int i = 0; i < size; ++i){
        // Checks if they qualify for class A
        if(addresses[i][0] <= 127){
            aNetCount++; 
            // Sets host at start of check
            if(ahost == NULL){
                aHostCount = 1;
                ahost[0] = addresses[i][0];
            }
            // Increases count if 1st octet is same as host
            else if(addresses[i][0] == ahost[0]){
                aHostCount++;
            }
            // Changes host if 1st octet is greater that last host
            else if(addresses[i][0] > ahost[0]){
                aHostCount = 1;
                ahost[0] = addresses[i][0];
            }
        }
        // Checks if they qualify for class B
        else if(addresses[i][0] >= 128 && addresses[i][0] <= 191){
            bNetCount++;
            // Sets host at start of check
            if(bhost == NULL){
                bHostCount = 1;
                bhost[0] = addresses[i][0];
                bhost[1] = addresses[i][1];
            }
            // Increases count if 1st and 2nd octet is same as host
            else if(addresses[i][0] == bhost[0] && addresses[i][1] == bhost[1]){
                bHostCount++;
            }
            // Changes host if 1st octet is greater than previous host
            else if(addresses[i][0] > bhost[0]){
                bHostCount = 1;
                bhost[0] = addresses[i][0];
                bhost[1] = addresses[i][1];
            }
            // Changes host if 2nd octet is greater than previous host
            else if(addresses[i][0] == bhost[0] && addresses[i][1] > bhost[1]){
                bHostCount = 1;
                bhost[1] = addresses[i][1];
            }
        }
        // Checks if they qualify for class C
        else if(addresses[i][0] >= 192 && addresses[i][0] <= 223){
            cNetCount++;
            // Sets host at start of check
            if(chost == NULL){
                cHostCount = 1;
                chost[0] = addresses[i][0];
                chost[1] = addresses[i][1];
                chost[2] = addresses[i][2];
            }
            // Increases count if 1st, 2nd, and 3rd octet are same as host
            else if(addresses[i][0] == chost[0] && addresses[i][1] == chost[1] && addresses[i][2] == chost[2]){
                cHostCount++;
            }
            // Changes host if 1st octet is greater than previous host
            else if(addresses[i][0] > chost[0]){
                cHostCount = 1;
                chost[0] = addresses[i][0];
                chost[1] = addresses[i][1];
                chost[2] = addresses[i][2];
            }
            // Changes host if 2nd octet is greater than previous host
            else if(addresses[i][0] == chost[0] && addresses[i][1] > chost[1]){
                cHostCount = 1;
                chost[1] = addresses[i][1];
                chost[2] = addresses[i][2];
            }
            // Changes host if 3rd octet is greater than previous host
            else if(addresses[i][0] == chost[0] && addresses[i][1] == chost[1] && addresses[i][2] > chost[2]){
                cHostCount = 1;
                chost[2] = addresses[i][2];
            }
        }
    }
    // Prints everything to output file
    fprintf(fp, "Running pgm1 with %d addresses\n", size);
    fprintf(fp, "Class A has %d networks\n", aNetCount);
    fprintf(fp, "Largest A network is %u with %d hosts\n", ahost[0], aHostCount);
    fprintf(fp, "Class B has %d networks\n", bNetCount);
    fprintf(fp, "Largest B network is %u.%u with %d hosts\n", bhost[0], bhost[1], bHostCount);
    fprintf(fp, "Class C has %d networks\n", cNetCount);
    fprintf(fp, "Largest C network is %u.%u.%u with %d hosts\n", chost[0], chost[1], chost[2], cHostCount);
    fclose(fp);
}
