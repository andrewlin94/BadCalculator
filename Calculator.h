#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <string>
#include <math.h>
#include <iomanip>
#include <regex>
using namespace std;

/*          Operations          */
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
double exponential(double a, double b);
double root(double a, double b);

/*          Other functions useful for calculator           */
bool verifyString(string input);
double absoluteValue (double a);
void printOperations();
double executeOperation(int operation, double firstNumber, double secondNumber);
