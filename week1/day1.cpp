//Problem 1:Creating a Simple Calculater:
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Number for a:";
    cin>>a;
    cout<<"Enter the Number for b:";
    cin>>b;
    char operation;
    cout<<"Enter the Operation Here:";
    cin>>operation;
    switch (operation){
        case '+':
        cout<<"The Value of Addition for a and b is:"<<a+b<<endl;
        break;
        case '-':
        cout<<"The Value of Subtraction for a and b is:"<<a-b<<endl;
        break;
        case '*':
        cout<<"The Value of Product for a and b is:"<<a*b<<endl;
        break;
        case '/':
        cout<<"The Value of Division for a and b is:"<<a/b<<endl;
        break;
        case '%':
        cout<<"The Value of Modulus for a and b is:"<<a%b<<endl;
        break;
        default:
        cout<<"Invalid Operation:Please Enter the Valid Operation"<<endl;
        break;
    }

    return 0;
}
// create a program that perform basic airthmatic operations on two numbers entered by user?
//Problem 1:Creating a Simple Calculater:
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Number for a:";
    cin>>a;
    cout<<"Enter the Number for b:";
    cin>>b;
    cout<<"The Addition of a and b is:"<<a+b<<endl;
    cout<<"The Subtraction of a and b is:"<<a-b<<endl;
    cout<<"The Multiplication of a and b is:"<<a*b<<endl;
    cout<<"The Division of a and b is:"<<a/b<<endl;
    cout<<"The Modulus of a and b is:"<<a%b<<endl;
    return 0;
}


//Create a program in c++ to create a Grade calculator
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Please enter the marks of 5 subjects: ";
    cin >> a >> b >> c >> d >> e;

    float average = (a + b + c + d + e) / 5.0;

    if (average >= 90 && average <= 100) {
        cout << "The grade is: A" << endl;
    }
    else if (average >= 80 && average <= 89) {
        cout << "The grade is: B" << endl;
    }
    else if (average >= 70 && average <= 79) {
        cout << "The grade is: C" << endl;
    }
    else if (average >= 60 && average <= 69) {
        cout << "The grade is: D" << endl;
    }
    else {
        cout << "The grade is: F" << endl;
    }

    return 0;
}


//Create a program to check if a number is:
//1.Number is Even or odd
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter the number:";
    cin>>n;
    if(n%2==0){
        cout<<"The Number is Even"<<endl;
    }
    else{
        cout<<"The Number is Odd"<<endl;
    }
}

// 2.Number is Postive,Negative or Zero
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter the Number :";
    cin>>n;
    if(n>0){
        cout<<"The Number is Postive"<<endl;
    }
    else if(n<0){
        cout<<"The Number is Negative"<<endl;
    }
    else{
        cout<<"The Number is Zero"<<endl;
    }
    return 0;
}


// 3.To check the number is Single Digit,Double Digit or More
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter the Number :";
    cin>>n;
    if(n>=0 && n<=9){
        cout<<"The Number is Single Digit"<<endl;
    }
    else if(n>=10 && n<=99){
        cout<<"The Number is Double Digit"<<endl;
    }
    else{
        cout<<"The Number is More than Double Digit"<<endl;
    }
    return 0;
}

// Write a Program to calculate simple interest with given Principal,rate and Time
#include <iostream>
using namespace std;
int main(){
    int principal;
    cout<<"Please Enter the Principal Amount here:";
    cin>>principal;
    float rate;
    cout<<"Please Enter the Rate Of Interest here:";
    cin>>rate;
    float Time;
    cout<<"Please Enter the Time here:";
    cin>>Time;
    float Interest=(principal*rate*Time)/100;
    cout<<"The Simple Interest for the Principal Amount is:"<<Interest<<endl;
    return 0;
}

// Create a Program that Converts tempurate Between Celcius,Farenhiet and Kelvin
#include <iostream>
using namespace std;

int main() {
    double temp, result;
    char fromUnit, toUnit;

    cout << "Enter temperature value: ";
    cin >> temp;

    cout << "Enter the unit of the given temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> fromUnit;

    cout << "Enter the unit you want to convert to (C/F/K): ";
    cin >> toUnit;
    double tempInCelsius;

    if (fromUnit == 'C' || fromUnit == 'c') {
        tempInCelsius = temp;
    }
    else if (fromUnit == 'F' || fromUnit == 'f') {
        tempInCelsius = (temp - 32) * 5.0 / 9.0;
    }
    else if (fromUnit == 'K' || fromUnit == 'k') {
        tempInCelsius = temp - 273.15;
    }
    else {
        cout << "Invalid input unit!" << endl;
        return 0;
    }
    if (toUnit == 'C' || toUnit == 'c') {
        result = tempInCelsius;
    }
    else if (toUnit == 'F' || toUnit == 'f') {
        result = (tempInCelsius * 9.0 / 5.0) + 32;
    }
    else if (toUnit == 'K' || toUnit == 'k') {
        result = tempInCelsius + 273.15;
    }
    else {
        cout << "Invalid target unit!" << endl;
        return 0;
    }

    cout << "Converted temperature: " << result << " " << (char)toupper(toUnit) << endl;

    return 0;
}


// Write a Program That Demonstrates all c++ Datatypes and there Sizes:
// 1.Display the Size of Each fundamental Datatype
#include <iostream>
using namespace std;
int main(){
    int num=9;
    char alpha='A';
    float num2=7.5;
    double a=4.5528;
    bool b=true;
    long int l=45876.25856;
    long long int d=456321.023145;
    cout<<"The size of integer is:"<<sizeof(num)<<endl;
    cout<<"The size of character is:"<<sizeof(alpha)<<endl;
    cout<<"The size of float is:"<<sizeof(num2)<<endl;
    cout<<"The size of double is:"<<sizeof(a)<<endl;
    cout<<"The size of bool is:"<<sizeof(b)<<endl;
    cout<<"The size of long integer is:"<<sizeof(l)<<endl;
    cout<<"The size of long long integer is:"<<sizeof(d)<<endl;
    return 0;
}

// 2.show range of signed and unsigned Integers
#include <iostream>
#include <climits>   
#include <cfloat>    
using namespace std;

int main() {
    cout << "Size of char       : " << sizeof(char) << " bytes" << endl;
    cout << "Size of wchar_t    : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char16_t   : " << sizeof(char16_t) << " bytes" << endl;
    cout << "Size of char32_t   : " << sizeof(char32_t) << " bytes" << endl;
    cout << "Size of bool       : " << sizeof(bool) << " bytes" << endl;
    cout << "Size of short      : " << sizeof(short) << " bytes" << endl;
    cout << "Size of int        : " << sizeof(int) << " bytes" << endl;
    cout << "Size of long       : " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long  : " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float      : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double     : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of void* (pointer): " << sizeof(void*) << " bytes" << endl;
    cout << "Range of signed char   : " << (int)SCHAR_MIN << " to " << (int)SCHAR_MAX << endl;
    cout << "Range of unsigned char : 0 to " << (int)UCHAR_MAX << endl;
    cout << "Range of signed short  : " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "Range of unsigned short: 0 to " << USHRT_MAX << endl;
    cout << "Range of signed int    : " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Range of unsigned int  : 0 to " << UINT_MAX << endl;
    cout << "Range of signed long   : " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "Range of unsigned long : 0 to " << ULONG_MAX << endl;
    cout << "Range of signed long long   : " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "Range of unsigned long long : 0 to " << ULLONG_MAX << endl;
    cout << "Float min  : " << FLT_MIN << " , max : " << FLT_MAX << endl;
    cout << "Double min : " << DBL_MIN << " , max : " << DBL_MAX << endl;
    cout << "Long double min : " << LDBL_MIN << " , max : " << LDBL_MAX << endl;

    return 0;
}

// 3.Demonstrate the type casting between different types
#include <iostream>
using namespace std;

int main() {
    cout <<  "Implicit Type Casting " << endl;
    int a = 5;
    double b = 2.5;

   
    double result = a + b;
    cout << "int a = " << a << " + double b = " << b << " gives double result = " << result << endl;
    char ch = 'A'; 
    int x = ch;  
    cout << "char 'A' implicitly cast to int: " << x << endl;
    cout << "Explicit Type Casting " << endl;
    double pi = 3.14159;
    int intPi = (int)pi;  
    cout << "C-style cast: double pi = " << pi << " -> int = " << intPi << endl;
    int intPi2 = static_cast<int>(pi);
    cout << "C++ static_cast: double pi = " << pi << " -> int = " << intPi2 << endl;
    int num = 66;
    char letter = static_cast<char>(num);
    cout << "int 66 cast to char: " << letter << endl;
    int n = 10, m = 3;
    cout << "Integer division (10/3): " << n / m << endl;
    cout << "Explicit cast for float division: "<< static_cast<float>(n) / m << endl;

    return 0;
}

// Create A program that shows the difference between global,function,and block scope
#include <iostream>
using namespace std;
int a = 100; // Global variable
void myFunction() {
    int a = 50; 
    cout << "Function variable Declaration: " << a << endl;
}
int main() {
    cout << "Global variable Declaration: " << a << endl;
    {
        int a = 50; 
        cout << "Block Space Variable Declaration: " << a << endl;
    }
    myFunction();
    return 0;
}

// 