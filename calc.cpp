#include <iostream>
#include <string>
using namespace std;
/*
My first Calculator in C++
*/
// Defining some vars
int selectvar;
double num1;
double num2;
double outputresult;
// Defining functions
int add(double num1, double num2);
int sub(double num1, double num2);
// Writing operator functions       
int add(double num1, double num2) {
    int result;

    //Doing da operation stuff
    result = num1 + num2;
    
    return result;
}

int sub(double num1, double num2) {
    int result;

    //Doing da operation stuff
    result = num1 - num2;
    
    return result;
}

// Defining Operation selector function
void select() {
    // Printing some shitty instructions
    cout << "Enter one of the following strings to select an operation \n1 for addition, \n2 for subtraction.";
    cout << "\nEnter one of the Integers to select an Operator: ";
    // Getting input
    cin >> selectvar;
    cout << "\nEnter First number: ";
    cin >> num1;
    cout << "\nEnter First number: ";
    cin >> num2;
    // Using switch statement to run function
    switch(selectvar) {
        case 1 :
            outputresult = add(num1 ,num2);
            break;
        case 2 :
            outputresult = sub(num1, num2);
            break;

    }
    cout << "\nThe result is: " << outputresult;

}


int main() {
    string continuevar;
    //Starting selector
    select();

    //Asking user if program should be repeated
    cout << "\nShould program be repeated? [y/n]: ";
    cin >> continuevar;
    if ( continuevar == "y" ) {
        main();
    }
    else {
        exit;
    }
}