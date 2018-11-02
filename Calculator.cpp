/*  Andrew Lin      2018/09/10
    Simple Command Line Calculator
    Only has +, -, *, /, and ^, in that order.
    Meant as a practice
*/
#include "Calculator.h"

/*          Operations          */
double addition(double a, double b) {
    return a+b;
}

double subtraction(double a, double b) {
    return a-b;
}

double multiplication(double a, double b) {
    return a*b;
}

double division(double a, double b) {
    //  Make sure it is not division by 0
    // if (b == 0.0) {
    //     cout << "Division by 0! Error!\n";
    //     return NULL;
    // }
    return a/b;
}

//  TODO: Make exponential work with decimals
double exponential(double a, double b) {
    return pow(a, b);
    // double result = 1;
    // for(int i = 0; i < b; i++) {
    //     result = result * a;
    // }
    // return result;
}

/*  Find the b-th root of the a.
    Uses the fast-converging algorithm
    Consult nth root algorithm on Wikipedia
    @parem  a       The number to find root from
    @parem  b       Which root of a to find
    @return result  The b-th root of a
*/
//  TODO: Make root work with decimals
double root(double a, double b) {
    return pow(a, 1.0/b);
    // double result = division(a,b);
    // double temp [4];
    // double iteration = 0;
    // while(absoluteValue(result - iteration) > 0.001) {
    //     iteration = result;
    //     temp[0] = (b-1)*result;
    //     // cout << "temp0 is " << temp[0] << "\n";
    //     temp[1] = exponential(result, b-1);
    //     // cout << "temp1 is " << temp[1] << "\n";
    //     temp[2] = a/temp[1];
    //     // cout << "temp2 is " << temp[2] << "\n";
    //     temp[3] = temp[0] + temp[2];
    //     // cout << "temp3 is " << temp[3] << "\n";
    //     result = temp[3]/b;
    //     // cout << "result" << " is " << result << "\n";
    // }
    // return result;
}

double logarithm(double a, double b) {
    return log10(a)/log10(b);
}

/*          Other functions useful for calculator           */
double absoluteValue (double a) {
    if (a < 0) {
        return -1*a;
    }else {
        return a;
    }
}

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

double executeOperation(double operation, double firstNumber, double secondNumber) {
    double result;
    if (operation == (int)operation) {
        int op = operation;
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

// double inputPicker(string input, double prevResult) {
//     if (input == "ans") {
//         return prevResult;
//     }
//     bool allDigits = 1;
//     for (char c:input) {
//         allDigits &= isdigit(c);
//     }
//     if (allDigits) {
//         return atof(input.c_str());
//     }
//     return 0;
// }

/*          Main function           */
int main() {
    //  Numbers
    string inputString;
    double firstNumber;
    double operation;
    double secondNumber;
    double prevResult = 0;
    bool startOver = 1;
    while(startOver) {
        startOver = 0;
        //  Get first number
        cout << "Enter first number: \n";
        cin >> inputString;
        if (inputString == "ans") {
            firstNumber = prevResult;
        }else if (inputString == "e") {
            firstNumber = exp(1);
        }else {
            bool allDigits = 1;
            for (char c:inputString) {
                allDigits &= isdigit(c);
            }
            if (allDigits) {
                firstNumber = atof(inputString.c_str());
            }else {
                cout << "Input was not a number. Exiting...\n";
                return -1;
            }
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

            // Division by zero detection
            if (operation == 4 && secondNumber == 0) {
                cout << "Division by zero detected. Exiting... \n";
                return -1;
            }
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
            return 0;
        }
    }
}
