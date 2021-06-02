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


/*----------------------------------------------------4.5-------------------------------------------------------------

Exercise 4.17: Explain the difference between prefix and postfix increment.    */

/*  Postfix increment or decrement operator means the expression is evaluated first using the original value of the 
    variable and then the variable is incremented or decremented.
    Prefix increment or decrement operator means the variable is incremented first and then the expression is evaluated
    using the new value of the variable.    */


/*  Exercise 4.18: What would happen if the while loop on page 148 that prints the elements from a vector used the 
    prefix increment operator?      */

//  It will print from the second element and dereference v.end() at last, which is a Undefined Behaviour.


/*  Exercise 4.19: Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the 
    behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?
    (a) ptr != 0 && *ptr++
    (b) ival++ && ival
    (c) vec[ival++] <= vec[ival]    */

/*  (a) Checks if ptr is not equal to 0 and checks the pointer value.
    (b) Checks whether the value of ival and ival+1 is equal to 0.
    (c) Inncorrect: Undefined Behaviour.
        Correction: vec[ival] <= vec[ival+1];   */


/*----------------------------------------------------4.6-------------------------------------------------------------

Exercise 4.20: Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions 
are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.
(a) *iter++;
(b) (*iter)++;
(c) *iter.empty()
(d) iter->empty();
(e) ++*iter;
(f) iter++->empty();    */

/*  (a) *iter++;  // return *iter, then ++iter.
    (b) (*iter)++;  // illegal, *iter is a string, cannot increment value.
    (c) *iter.empty() // illegal, iter should use '->' to indicate whether empty.
    (d) iter->empty();  // indicate the iter' value whether empty.
    (e) ++*iter;        // illegal, string have not increment.
    (f) iter++->empty();  // return iter->empty(), then ++iter.     */


/*----------------------------------------------------4.7-------------------------------------------------------------

Exercise 4.21: Write a program to use a conditional operator to find the elements in a vector<int> that have odd value 
and double the value of each such element.    */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec {1,2,3,4,5,6};

//     for(auto i: vec)
//     {
//         cout << ((i%2==1) ? i*2 : i) << " ";
//     }
//     return 0;
// }


/*  Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades
    between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should 
    use one or more if statements. Which version do you think is easier to understand and why?  */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int grade;
//     cout << "Enter the grade: ";
//     cin >> grade;

//     // using conditional statement
//     cout << ((grade > 90) ? "High Pass" : (grade > 75) ? "Pass" : (grade > 60) ? "Low Pass" : "Fail") << endl;
    
//     // using if else condition
//     if(grade > 90)
//         cout << "High Pass";
//     else if(grade > 75)
//         cout << "Pass";
//     else if(grade > 60)
//         cout << "Low Pass";
//     else 
//         cout << "Fail";

//     return 0;
// }

/*  If else conditions are easier to understand because they are more clear with proper indendation as compared to 
    nested conditional operators.   */


/*  Exercise 4.23: The following expression fails to compile due to operator precedence. Using Table 4.12 (p. 166), 
    explain why it fails. How would you fix it?
    string s = "word";
    string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;     */

/*  The given expression fails because the precedence of + is greater than the conditional operator (?:).
    Correction: 
    string pl = s + (s[s.size() - 1] == 's' ? "" : "s");    */


/*  Exercise 4.24: Our program that distinguished between highpass, pass, and fail depended on the fact that the 
    conditional operator is right associative. Describe how that operator would be evaluated if the operator were 
    left associative.   */

/*  If the ternary operator would be left associative then the grade program would have been evaluated as:
    
    finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
    Error: operands to ?: have different types 'const char*' and 'bool'     */


/*----------------------------------------------------4.8-------------------------------------------------------------

Exercise 4.25: What is the value of ~'q' << 6 on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character
set in which 'q' has the bit pattern 01110001?     */

/*  q = 00000000 00000000 00000000 01110001
    ~q = 11111111 11111111 11111111 10001110
    ~q << 6 = 11111111 11111111 11100011 10000000  */


// Exercise 4.26: In our grading example in this section, what would happen if we used unsigned int as the type for quiz1?

/*  The C++ standard does not specify the size of integral types in bytes, but it specifies minimum ranges they must be 
    able to hold. The minimum range of unsigned int is 0 to 65535. Since some implementations use only the minimum 16 
    bits for unsigned int, this could cause undefined behavior.   */


/*  Exercise 4.27: What is the result of each of these expressions?
    unsigned long ul1 = 3, ul2 = 7;
    (a) ul1 & ul2
    (b) ul1 | ul2
    (c) ul1 && ul2
    (d) ul1 || ul2    */

/*  ul1 = 3 = 0011, ul2 = 7 = 0111
    (a) ul1 & ul2 = 0011 = 3
    (b) ul1 | ul2 = 0111 = 7
    (c) ul1 && ul2 = true (as both the values non-zero)
    (d) ul1 || ul2 = true   */


/*----------------------------------------------------4.9-------------------------------------------------------------

Exercise 4.28: Write a program to print the size of each of the builtin types.    */

// #include<iostream>
// using namespace std;

// int main()
// {
// 	// void type
// 	cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;

// 	// boolean type
// 	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

// 	// charactor type
// 	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
// 	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
// 	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
// 	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

// 	// integers type
// 	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
// 	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
// 	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
// 	cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

// 	// floating point type
// 	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
// 	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
// 	cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;

// 	// Fixed width integers
// 	cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
// 	cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
// 	cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
// 	cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
// 	cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
// 	cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
// 	cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
// 	cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;

// 	return 0;
// }


/*  Exercise 4.29: Predict the output of the following code and explain your reasoning. Now run the program. Is the 
    output what you expected? If not, figure out why.
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;   */

/*  The first result is 10. It returns the number of elements in x. But the second result depends on your machine. 
    It would be 2 on the 64-bit machine and 1 on the 32-bit machine. Because of the size of pointer is different 
    on various machines.    */


/*  Exercise 4.30: Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:
    (a) sizeof x + y
    (b) sizeof p->mem[i]
    (c) sizeof a < b
    (d) sizeof f()    */

/*  (a) (sizeof x) + y
    (b) sizeof (p->mem[i])
    (c) (sizeof a) < b
    (d) sizeof f()  
        If `f()` returns `void`, this statement is undefined, otherwise it returns the size of return type.   */


/*----------------------------------------------------4.10-------------------------------------------------------------

Exercise 4.31: The program in this section used the prefix increment and decrement operators. Explain why we used 
prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using 
postfix operators.   */

/*  We use prefix and not postfix, just because of the Advice: Use Postfix Operators only When Necessary on §4.5. 
    Increment and Decrement Operators. Prefix increment and decrement are faster, more efficient and easily it is 
    easier to implement evaluation in them as compared to postfix.    
    
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)  
    ivec[ix] = cnt;     */


/*  Exercise 4.32: Explain the following loop. 
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for (int *ptr = ia, ix = 0;
    ix != size && ptr != ia+size;
    ++ix, ++ptr) { // ...  }        */

/*  ptr and ix have the same function. The former use a pointer, and the latter use the index of array. we use the 
    loop to through the array.(just choose one from ptr and ix)    */


/*  Exercise 4.33: Using Table 4.12 (p. 166) explain what the following expression does:
    someValue ? ++x, ++y : --x, --y     */

/*  Because of the most lowest precedence of the comma operator, the expression is same as:
    (someValue ? ++x, ++y : --x), --y

    If someValue is true, then ++x, and the result is y, if someValue is false, then --x, and the result is --y. so 
    it is also same as:
    someValue ? (++x, y) : (--x, --y);

    Even though the result has nothing to do with x, the evaluation of someValue does effect the operation on x.    */