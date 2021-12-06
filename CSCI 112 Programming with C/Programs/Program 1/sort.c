#include <stdio.h>

void sortAddresses(unsigned char addresses[][4], int size){
    int i, j, k;
    unsigned char temp;
    
    // Iterates for 1st entry
    for(i = 0; i < size-1; i++){
        // Iterates for next entry to compare
        for(j = i+1; j < size; j++){
            // Iterates through 4 parts of IP address to compare
            for(k = 0; k < 4; k++){
                // Checks if current octet of an entry is greater than the same octet in next entry
                // Swaps the entries so the greater one is second
                if(addresses[j][k] != addresses[i][k]){
                    if(addresses[i][k] > addresses[j][k]){
                        temp = addresses[i][k];
                        addresses[i][k] = addresses[j][k];
                        addresses[j][k] = temp;
                    }
                }                
            }
        }
    }
}
