/*  Andrew Lin      2018/09/10
    Simple Command Line Calculator
*/
#include "Calculator.h"
// double inputPicker(string input, double prevResult) {
//     if (input == "ans") {
//         return prevResult;
//     }else if (input == "e") {
//         return exp(1);
//     }else if (input[0] == char(45)) {
//         if (verifyString(input)) {
//             return atof(input.c_str);
//         }else {
//             return 0;
//         }
//     }else {
        
//     }
//     return 0;
// }
/*  Print out the functions implemented.
    Sub-functions (i.e. 7.1) only requires 1 number.
    @parem  NULL
    @return NULL
*/
void printOperations() {
    cout << "Choose operation:\n";
    cout << left << setw(25) << "   Operation"          << left << setw(20) << " How the mode calculates"   << "\n";
    cout << left << setw(25) << "   1. Addition"        << left << setw(20) << " (first + second)"          << "\n";
    cout << left << setw(25) << "   2. Subtraction"     << left << setw(20) << " (first - second)"          << "\n";
    cout << left << setw(25) << "   3. Multiplication"  << left << setw(20) << " (first * second)"          << "\n";
    cout << left << setw(25) << "   4. Division"        << left << setw(20) << " (first / second)"          << "\n";
    cout << left << setw(25) << "   5. Exponential"     << left << setw(20) << " (first ^ second)"          << "\n";
    cout << left << setw(25) << "      5.1 Square"      << left << setw(20) << " (first ^ 2)"               << "\n";
    cout << left << setw(25) << "      5.2 Cube"        << left << setw(20) << " (first ^ 3)"               << "\n";
    cout << left << setw(25) << "   6. Root"            << left << setw(20) << " (second-th root of first)" << "\n";
    cout << left << setw(25) << "      6.1. Square Root"<< left << setw(20) << " (square root of first)"    << "\n";
    cout << left << setw(25) << "   7. Logarithm"       << left << setw(20) << " (log base second of first)"<< "\n";
    cout << left << setw(25) << "      7.1. Natural Log"<< left << setw(20) << " (ln of first)"             << "\n";
}

/*  Compute the operation and print result
    @parem  operation       The operation to be done on the two numbers
    @parem  firstNumber     The first number of the operation,
                            details in operation functions
    @parem  secondNumber    The second number of the operation,
                            0 if operation is a sub-operation
    @return result          The result of the operation. Used 
                            to allow user to use the previous 
                            result, similar to calculator
*/
double executeOperation(double operation, double firstNumber, double secondNumber) {
    double result;
    if (operation == (int)operation) {
        int op = operation;     // Convert double to int for switch statement
        switch(op) {
            case 1:
                result = addition(firstNumber, secondNumber);
                printf("The result of %.2f + %.2f = %.2f\n", firstNumber, secondNumber, result);
                break;
            case 2:
                result = subtraction(firstNumber, secondNumber);
                printf("The result of %.2f - %.2f = %.2f\n", firstNumber, secondNumber, result);
                break;
            case 3:
                result = multiplication(firstNumber, secondNumber);
                printf("The result of %.2f * %.2f = %.2f\n", firstNumber, secondNumber, result);
                break;
            case 4:
                result = division(firstNumber, secondNumber);
                printf("The result of %.2f / %.2f = %.2f\n", firstNumber, secondNumber, result);
                break;
            case 5:
                result = exponential(firstNumber, secondNumber);
                printf("The result of %.2f to the power of %.2f = %.2f\n", firstNumber, secondNumber, result);
                break;
            case 6:
                result = root(firstNumber,secondNumber);
                if (secondNumber == 1) {
                    printf("The root of %.2f = %.2f\n", firstNumber, result);
                }else if (secondNumber == 2) {
                    printf("The square root of %.2f = %.3f\n", firstNumber, result);
                }else if (secondNumber == 3) {
                    printf("The %.0frd root of %.2f = %.3f\n", secondNumber, firstNumber, result);
                }else {
                    printf("The %.0fth root of %.2f = %.3f\n", secondNumber, firstNumber, result);
                }
                break;
            case 7:
                result = logarithm(firstNumber, secondNumber);
                printf("The log base %.2f of %.2f = %.3f\n", secondNumber, firstNumber, result);
                break;
            default:
                printf("Oops, check your code\n");
                break;
        }
    }else {
        if (operation == 5.1) {
            result = exponential(firstNumber, 2);
            printf("The square of %.2f = %.3f\n", firstNumber, result);
        }else if (operation == 5.2) {
            result = exponential(firstNumber, 3);
            printf("The cube of %.2f = %.3f\n", firstNumber, result);
        }else if (operation == 6.1) {
            result = root(firstNumber, 2);
            printf("The square root of %.2f = %.3f\n", firstNumber, result);
        }else if (operation == 7.1) {
            result = logarithm(firstNumber, exp(1));
            printf("The natural log of %.2f = %.3f\n", firstNumber, result);
        }else {
            printf("Oops, check your code\n");
        }
    }
    return result;
}

/*  Verify that a string consist of digits.
    E.g. "12a" returns false, "-12" returns true
    @parem  input   The string of the input.
    @return         True if the string is a valid
                    number if converted, false
                    otherwise

*/
bool verifyString(string input) {
    bool allDigits = 1;
    int index = 0;
    //  If first char of the string is a - (minus sign),
    //  and the string is longer than 1, make 
    //  the search after start at index 1.
    if (input[0] == char(45) && input.length() > 1) {
        index = 1;
    }
    //  Check whether all the chars in the string are digits
    for (; index < input.length(); ++index) {
        allDigits &= isdigit(input[index]);
    }
    //  Return true if the string only contains digits
    if (allDigits) {
        return true;
    }
    return false;
}
/*          Main function           */
int main() {
    //  Variables
    string inputString;
    double firstNumber;
    double operation;
    double secondNumber;
    double prevResult = 0;
    bool startOver = 1;
    bool validInput = false;
    while(startOver) {
        startOver = 0;
        //  Get first number
        cout << "Enter first number: \n";
        cin >> inputString;
        startOver = 1;

        //  Verify the input string
        //  and assign the number
        //  depending on the input
        if (inputString == "ans") {
            firstNumber = prevResult;
        }else if (inputString == "e") {
            firstNumber = exp(1);
        }else if (verifyString(inputString)) {
            firstNumber = atof(inputString.c_str());
        }else {
            cout << "Input was not a number. Exiting...\n";
            return -1;
        }
        // cout << firstNumber << endl;
        // cout << "Your first number is " << firstNumber << "\n";

        //  Get operation
        printOperations();
        cin >> operation;
        if (!cin) {
            cout << "Input was not a number. Exiting...\n";
            return -1;
        };

        //  Making sure operation is valid
        if (operation < 0 || operation > 7.1) {
            cout << "Invalid operation. Exiting...\n";
            return -1;
        }
        if (operation != (int)operation) {
            secondNumber = 0;
        }else {
            //  Get second number
            cout << "Enter second number: \n";
            cin >> secondNumber;
            if (!cin) { 
                cout << "Input was not a number. Exiting...\n";
                return -1;
            };
        }

        //  Valid operation, compute the result
        prevResult = executeOperation(operation, firstNumber, secondNumber);

        //  Loop the code
        cout << "Do you want to start over? (y/n)\n";
        string answer;
        cin >> answer;
        if (answer[0] == 'y' || answer[0] == 'Y') {
            startOver = 1;
        }
        else {
            cout << "Good bye\n";
            return 0;
        }
    }
}
