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