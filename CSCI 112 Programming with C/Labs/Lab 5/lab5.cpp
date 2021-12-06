#include <vector>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// Gets the word version of the ones place digit
string ones(int digit){
    string output = "";
    switch(digit){
        case 1: output =  "One";
            break;
        case 2: output = "Two";
            break;
        case 3: output = "Three";
            break;
        case 4: output = "Four";
            break;
        case 5: output = "Five";
            break;
        case 6: output = "Six";
            break;
        case 7: output = "Seven";
            break;
        case 8: output = "Eight";
            break;
        case 9: output = "Nine";
            break;
    }
    return output;
}

// Gets the word version of the tens place digit
string tens(int digit){
    string output = "";
    switch(digit){
        case 1: throw runtime_error("ERROR: Second digit cannot be 1");
            break;
        case 2: output = "Twenty";
            break;
        case 3: output = "Thirty";
            break;
        case 4: output = "Forty";
            break;
        case 5: output = "Fifty";
            break;
        case 6: output = "Sixty";
            break;
        case 7: output = "Seventy";
            break;
        case 8: output = "Eighty";
            break;
        case 9: output = "Ninety";
            break;
    }
    return output;
}

// Gets the word version of the hundreds place digit
string hun(int digit){
    string output = "";
    switch(digit){
        case 1: output = "One Hundred";
            break;
        case 2: output = "Two Hundred";
            break;
        case 3: output = "Three Hundred";
            break;
        case 4: output = "Four Hundred";
            break;
        case 5: output = "Five Hundred";
            break;
        case 6: output = "Six Hundred";
            break;
        case 7: output = "Seven Hundred";
            break;
        case 8: output = "Eight Hundred";
            break;
        case 9: output = "Nine Hundred";
            break;
    }
    return output;
}

// Gets the word version of the thousands place digit
string thousands(int digit){
    string output = "";
    switch(digit){
        case 1: output = "One Thousand";
            break;
        case 2: output = "Two Thousand";
            break;
        case 3: output = "Three Thousand";
            break;
        case 4: output = "Four Thousand";
            break;
        case 5: output = "Five Thousand";
            break;
        case 6: output = "Six Thousand";
            break;
        case 7: output = "Seven Thousand";
            break;
        case 8: output = "Eight Thousand";
            break;
        case 9: output = "Nine Thousand";
            break;
    }
    return output;
}

// Gets the word versions of each digit and puts them into a vector
vector<string> wordBuilder(int num){
    vector<string> line;
    int digit;
    
    if(num >= 1000){
        digit = num/1000 % 10;
        line.push_back(thousands(digit));
        digit = num/100 % 10;
        line.push_back(hun(digit));
        digit = num/10 % 10;
        line.push_back(tens(digit));
        digit = num % 10;
        line.push_back(ones(digit));
    }
    else if(num >= 100){
        digit = num/100 % 10;
        line.push_back(hun(digit));
        digit = num/10 % 10;
        line.push_back(tens(digit));
        digit = num % 10;
        line.push_back(ones(digit));
    }
    else if(num >= 10){
        digit = num/10 % 10;
        line.push_back(tens(digit));
        digit = num % 10;
        line.push_back(ones(digit));
    }
    else{
        line.push_back(ones(num));
    }
    return line;
}

// Gets the input and sends to be turned to words
// Prints out the words from the vector
int main(int argc, char* argv[]){
    
    if(argc != 2){
        throw runtime_error("ERROR: No input received");
    }

    vector<string> words;
    int input = atoi(argv[1]);
    
    words = wordBuilder(input);
    cout << "Number " << input << " is written as "; 
    for(int i = 0; i < words.size(); i++){
        cout << words.at(i) << ' ';
    }
    cout << '\n';
    return(0);
}
