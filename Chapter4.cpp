/*-------------------------------------------------4.1.2--------------------------------------------------------------

Exercise 4.1: What is the value returned by 5 + 10 * 20/2?      */
//  105

/*  Exercise 4.2: Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the
    operands are grouped:
    (a) * vec.begin()
    (b) * vec.begin() + 1     */

/*  (a) *(vec.begin())
    (b) (*(vec.begin()))+1    */


/*-------------------------------------------------4.1.3-------------------------------------------------------------

Exercise 4.3: Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities
for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the 
use of the language by the programmer. Do you consider that an acceptable tradeoff? Why or why not?    */

//  Yes, I think it necessary to hold the trade-off. Because the speed is always the biggest advantage of C++. 


/*----------------------------------------------------4.2-------------------------------------------------------------

Exercise 4.4: Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the
expression (without parentheses) and printing its result.
    12 / 3 * 4 + 5 * 15 + 24 % 4 / 2    */

//  ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) = 91


/*  Exercise 4.5: Determine the result of the following expressions.
    (a) -30 * 3 + 21 / 5
    (b) -30 + 3 * 21 / 5
    (c) 30 / 3 * 21 % 5
    (d) -30 / 3 * 21 % 4    */

/*  (a) -86
    (b) -18
    (c) 0
    (d) -2    */


//  Exercise 4.6: Write an expression to determine whether an int value is even or odd.
//  i%2 == 0 ? "even" : "odd";


//  Exercise 4.7: What does overflow mean? Show three expressions that will overflow. 

/*  Overflow is a condition that happens when a value is computed that is outside the range of values that the 
    type can represent. 
    Expressions that will overflow: 
    short svalue = 32767; ++svalue; // -32768
    unsigned uivalue = 0; --uivalue;  // 4294967295
    unsigned short usvalue = 65535; ++usvalue;  // 0    */