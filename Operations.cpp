#include "Operations.h"
/*          Operations          */

/*  Adding two numbers
    @parem      a First number of the sum
    @parem      b Second number of the sum
    @return     Sum of a and b
*/
double addition(double a, double b) {
    return a+b;
}

/*  Subtracting second number from first number 
    @parem      a Number to be subtracted from
    @parem      b Number to subtract
    @return     a-b
*/
double subtraction(double a, double b) {
    return a-b;
}

/*  Multiply two numbers
    @parem      a   First number of the multiplication
    @parem      b   
*/
double multiplication(double a, double b) {
    return a*b;
}
/*  Divide a by b
    @parem  a   The numerator
    @parem  b   The denominator
    @return a/b
*/
double division(double a, double b) {
    //  Make sure it is not division by 0
    if (b == 0.0) {
        return 0;
    }
    return a/b;
}

/*  Find a^b, or the a to the power of b
    @parem  a       The base
    @parem  b       The exponent
    @result a^b     
*/
double exponential(double a, double b) {
    return pow(a, b);
    // double result = 1;
    // for(int i = 0; i < b; i++) {
    //     result = result * a;
    // }
    // return result;
}

/*  Find the b-th root of a. It is
    now using the library function
    instead of the fast-converging
    algorithm.
    Find the b-th root of the a.
    Uses the fast-converging algorithm
    Consult nth root algorithm on Wikipedia
    @parem  a       The number to find root from
    @parem  b       Which root of a to find
    @return result  The b-th root of a
*/
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

/*  Find the Log(a) with base b
    @parem  a       Number to find the log of
    @parem  b       Base of the log
    @return result  Log(a) with base b
*/
double logarithm(double a, double b) {
    if (a < 0 || b < 0) {
        return nan("");
    }
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