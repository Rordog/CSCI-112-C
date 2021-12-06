#include <iostream>
using namespace std;
#include <vector>

int main(void){
    
    vector<int> num;
    int input;

    cout << "Please enter some integers (Press 0 to end): ";
    
    do{
        cin >> input;
        num.push_back(input);
    } while(input);

    int sum;
    for(unsigned int i = 0; i < num.size(); ++i){
        sum += num[i];
    }
    cout << "Half of the sum is " << sum/2 << '\n';

    return(0);
}
