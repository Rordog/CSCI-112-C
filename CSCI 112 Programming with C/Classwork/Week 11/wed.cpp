#include <iostream>
#include <stdexcept>
using namespace std;

int main(int argc, char* argv[]){
    
    if(argc != 2){
        throw runtime_error("ERROR: No input received");        
    }
    
    int num = atoi(argv[1]);
    cout << "The result is " << num*2 << '\n';

    return(0);
}
