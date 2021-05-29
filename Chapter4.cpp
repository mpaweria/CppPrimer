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


/*----------------------------------------------------4.3-------------------------------------------------------------

Exercise 4.8: Explain when operands are evaluated in the logical AND, logical OR, and equality operators.   */
/*  The logical AND and OR operators always evaluate their left operand before the right. Moreover, the right 
    operand is evaluated if and only if the left operand does not determine the result. This strategy is known 
    as short-circuit evaluation.
    logical AND : the second operand is evaluated if and only if the left side is true.
    logical OR : the second operand is evaluated if and only if the left side is false
    equality operators == : undefined.      */


/*  Exercise 4.9: Explain the behavior of the condition in the following if:
    const char *cp = "Hello World";
    if (cp && *cp)      */

/*  cp is a pointer to const char and is not a nullptr, i.e true.
    *cp is a const char'H', it is a nonzero value, i.e true.
    true && true -> true.     */ 


/*  Exercise 4.10: Write the condition for a while loop that would read ints from the standard input and stop
    when the value read is equal to 42.    */

/*  int n;
    while(cin>n && n!=42)   */


/*  Exercise 4.11: Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, 
    which is greater than c, which is greater than d.   */    
//  a>b && b>c && c>d


//  Exercise 4.12: Assuming i, j, and k are all ints, explain what i != j < k means.
    
//  i != j < k means i!=(j<k) --> i != 0 or 1.


/*----------------------------------------------------4.4-------------------------------------------------------------

Exercise 4.13: What are the values of i and d after each
assignment?
    int i; double d;
    (a) d = i = 3.5;
    (b) i = d = 3.5;    */

/*  (a) i=3, d=3.0
    (b) d=3.5, i=3     */


/*  Exercise 4.14: Explain what happens in each of the if tests:
    if (42 = i) // ...
    if (i = 42) // ...  */

/*  if(42=i)    // Error: as lvalue is required on the left hand side of the assignment operator.
    if(i=42)    // 42 is assigned to i, i.e the condition is true and the body of the condition is executed.    /*


/*  Exercise 4.15: The following assignment is illegal. Why? How would you correct it?
    double dval; int ival; int *pi;
    dval = ival = pi = 0;     */

/*  The following code is illegal because pi and ival has different types and can't be converted to one another.
    Error: invalid conversion from ‘int*’ to ‘int’.
    Correction: dval = ival = 0;
                pi = 0;     */


/*  Exercise 4.16: Although the following are legal, they probably do not behave as the programmer expects. Why? 
    Rewrite the expressions as you think they should be.
    (a) if (p = getPtr() != 0)
    (b) if (i = 1024)   */

/*  (a) The if condition will check if getPtr() and 0 are equal or not and then the result of the test would be 
        assigned to i, which is not intended.
        if((p=getPtr()) != 0)
    (b) 1024 is assigned to i.
        if(i == 1024)   */