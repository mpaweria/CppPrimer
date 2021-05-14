/* ----------------------------------------Section 2.1.1-----------------------------------------------------

Exercise 2.1: What are the differences between int, long, long long, and short?
Between an unsigned and a signed type? Between a float and a double?   */

/*  Short and int is at least 16 bits, long at least 32 bits, long long at least 64 bits.
    Use int for integer arithmetic. short is usually too small and, in practice, long often has the same size as int. 
    If your data values are larger than the minimum guaranteed size of an int, then use long long.

    The signed can represent positive as well as negative numbers, whereas unsigned represents only positive numbers.

    Float and double are used for decimal numbers. A float has 32 bit precision while double has 64 bit.(Acoording to IEEE) */


/*  Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment?
    Explain why you selected each type.  */

/*  Use a float or a double, as rate, principal and payment could be decimal numbers. */


/* ----------------------------------------Section 2.1.2-----------------------------------------------------

Exercise 2.3: What output will the following code produce?
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;  */

/*  32
    Garbage Value:4294967264 (because unsigned can't store a negative value)
    32
    -32
    0
    0  */

/*  Exercise 2.4: Write a program to check whether your predictions were correct. If not, study this section until
    you understand what the problem is.  */

// #include <iostream>
// int main()
// {
//     unsigned u = 10, u2 = 42;
//     std::cout << u2 - u << std::endl;
//     std::cout << u - u2 << std::endl;
//     int i = 10, i2 = 42;
//     std::cout << i2 - i << std::endl;
//     std::cout << i - i2 << std::endl;
//     std::cout << i - u << std::endl;
//     std::cout << u - i << std::endl;
// }

/* ----------------------------------------Section 2.1.3-----------------------------------------------------

Exercise 2.5: Determine the type of each of the following
literals. Explain the differences among the literals in each of the
four examples:
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2  */

/*  (a) Character literal, Wide character literal, String literal, Wide string literal.
    (b) Decimal, Unsigned decimal, Long decimal, Unsigned long decimal, Octal, Hexadecimal.
    (c) Double, Float, Long double.
    (d) Decimal, Unsigned decimal, Double, Double.  */

/*  Exercise 2.6: What, if any, are the differences between the following definitions:
    int month = 9, day = 7;
    int month = 09, day = 07;  */

/*  The 1st line's integers are decimal.
    In 2nd line month is invalid as octal don't have 9 and day is an octal. */

/*  Exercise 2.7: What values do these literals represent? What type does each have?
    (a) "Who goes with F\145rgus?\012"
    (b) 3.14e1L
    (c) 1024f
    (d) 3.14L

/*  (a) Who goes with Fergus? (newline) --> String
    (b) 31.4  --> Long double
    (c) ERROR: The suffix f is valid only with floating point literals.
        double dou = 1024f;  // error: unable to find numeric literal operator ‘operator"" f’.
    (d) 3.14  --> Long double  */


/*  Exercise 2.8: Using escape sequences, write a program to print 2M followed by a newline. 
    Modify the program to print 2, then atab, then an M, followed by a newline.  */

// #include<iostream>
// using namespace std;

// int main()
// {
//     cout << "\062\115\012";
//     cout << "\062\t\115\012";
// }
/*  OUTPUT
    2M
    2       M  */

/* ----------------------------------------Section 2.2.1----------------------------------------------------- 

Exercise 2.9: Explain the following definitions. For those that
are illegal, explain what’s wrong and how to correct it.
    (a) std::cin >> int input_value;
    (b) int i = { 3.14 };
    (c) double salary = wage = 9999.99;
    (d) int i = 3.14;  */

/*  (a)error: expected primary-expression before ‘int’. Correct: int input_value = 0; std::cin >> input_value;
        To correct it define input_value before taking input.

    (b)warning: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { } [-Wnarrowing]|
        int i = {3};   //Use an intger value 

    (c)error: ‘wage’ was not declared in this scope. Correct: double wage = 9999.99, salary = wage;
        double salary=9999.99, wage=9999.99;

    (d)No error or warning, but value will be truncated.
        double i = 3.14   //Store double value in a double variable.   */

/*  Exercise 2.10: What are the initial values, if any, of each of the following variables?
    std::string global_str;
    int global_int;
    int main()
    {
    int local_int;
    std::string local_str;
    }    */

/*  global_str is a global variable, so it is an empty string.
    global_int is a global variable, so it's value is 0.
    local_int is an uninitialized local variable, thus stores undefined value.
    local_str is an uninitialized local variable, will store value as defined by the class. So it is an empty string.   */


/* ----------------------------------------Section 2.2.2----------------------------------------------------- 

Exercise 2.11: Explain whether each of the following is a
declaration or a definition:
(a) extern int ix = 1024;
(b) int iy;
(c) extern int iz;   */

/*  (a) Definition, as initializing overrides the extern keyword.
    (b) Definiton.
    (c) Declaration, extern is used to only declare a variable.   */


/* ----------------------------------------Section 2.2.3----------------------------------------------------- 

Exercise 2.12: Which, if any, of the following names are invalid?
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;   */

/*  (a) Invalid, as double is a reserved keyword.
    (b) Valid.
    (c) Invalid, identifier can't have -.
    (d) Invalid, identifier can't begin with a number.
    (e) Valid, as D is capital.   */


/* ----------------------------------------Section 2.2.4----------------------------------------------------- 

Exercise 2.13: What is the value of j in the following program?
    int i = 42;
    int main()
    {
    int i = 100;
    int j = i;
    }    */

//  The value of j is 100, because it stores the value of i that is decared inside main.


/*  Exercise 2.14: Is the following program legal? If so, what values are printed?
        int i = 100, sum = 0;
        for (int i = 0; i != 10; ++i)
        sum += i;
        std::cout << i << " " << sum << std::endl;    */

//  Yes, the given program is legal. It's output will be 100 and 45.
//  As the cout statement is outside the scope of for loop, it will print the value of above initialized i i.e. 100;


/* ----------------------------------------Section 2.3.1----------------------------------------------------- 

Exercise 2.15: Which of the following definitions, if any, are
invalid? Why?
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;   */

/*  (a) Valid: ival is an int initialized to 1.01.
    (b) Invalide: rval1 is a reference and reference can't be initialized to a literal.
    (c) Valid: rval2 is a reference to ival.
    (d) Invalid: reference must be initialized.    */


/*  Exercise 2.16: Which, if any, of the following assignments are invalid?
    If they are valid, explain what they do.
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    (a) r2 = 3.14159;
    (b) r2 = r1;
    (c) i = r2;
    (d) r1 = d;   */

/*  (a): Valid. d = 3.14159.
    (b): Valid. Automatic convert will happen.
    (c): Valid, but value will be truncated.
    (d): Valid, but value will be truncated. */


/*  Exercise 2.17: What does the following code print?
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;  */

//  The given code will print 10 10. 


/* ----------------------------------------Section 2.3.2----------------------------------------------------- 

Exercise 2.18: Write code to change the value of a pointer. Write code to change the value to which the pointer points.  */

#include <iostream>
using namespace std;

int main()
{ 
    int val1=10, val2=20;
    int *ptr1 = &val1;
    cout << *ptr1 << " " << val1 << " " << ptr1 << endl;
    ptr1 = &val2;         // the pointer ptr1 is now pointing to val2.
    cout << *ptr1 << " " << val2 << " " << ptr1 << endl;
    *ptr1 = 50;           // 50 is assigned to val2 using ptr1.
    cout << *ptr1 << " " << val2 << " " << ptr1 << endl;
}


/*  Exercise 2.19: Explain the key differences between pointers and references.  */

/*  Definition
    (a) Pointer "points to" any other type.
    (b) Reference is "another name" of an object.
    Key Difference:
    1. A reference is another name of an already existing object. A pointer is an object in its own right.
    2. Once initialized, a reference remains bound to its initial object. There is no way to rebind a reference to 
       refer to a different object. A pointer can be assigned and copied.
    3. A reference always get the object to which the reference was initially bound. A single pointer can point to 
       several different objects over its lifetime.
    4. A reference must be initialized. A pointer need not be initialized when it is defined.    */


/*  Exercise 2.20: What does the following program do?
        int i = 42;
        int *p1 = &i;
        *p1 = *p1 * *p1;    */

/*  The given program initialises the variable i to 42. A pointer p1 points to i. i now holds the value 1764(42*42) as 
    *p1 = 42 (deferenced).   */


/*  Exercise 2.21: Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
        int i = 0;
        (a) double* dp = &i;
        (b) int *ip = i;
        (c) int *p = &i;   */

/*  (a) Invalid: error: cannot convert 'int*' to 'double*' in initialization.
    (b) Invalid: error: invalid conversion from 'int' to 'int*.
    (c) Valid    */


/*  Exercise 2.22: Assuming p is a pointer to int, explain the following code:
    if (p) // ...
    if (*p) // ...    */

/*  (a) Weather p is a nullptr?
    (b) Weather the intger, p is pointing to is 0 or not.   */


/*  Exercise 2.23: Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?  */

/*  There is no way to distinguish a valid address from an invalid one from the bits that are in 
    the memory in which the pointer was allocated.   */


/*  Exercise 2.24: Why is the initialization of p legal but that of lp illegal?
        int i = 42; void p = &i; long lp = &i;

/*  p is a pointer to void, so it can point to any value type.
    lp is a poinet to long ,so it's should point to long but is pointing to int valuw therefor it is an incorrect statement.  */