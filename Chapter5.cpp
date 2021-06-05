/*----------------------------------------------------5.1-------------------------------------------------------------

Exercise 5.1: What is a null statement? When might you use a null statement?    */

/*  A null statement is an empty statement. It is a single semicolon.
    ; // null statement
    A null statement is useful where the language requires a statement but the program’s logic does not. Such usage is 
    most common when a loop’s work can be done within its condition.    */


//  Exercise 5.2: What is a block? When might you might use a block?

/*  A compound statement, usually referred to as a block, is a sequence of statements and declarations surrounded by a 
    pair of curly braces. 
    Compound statements are used when the language requires a single statement but the logic of our program needs more 
    than one. For example, the body of a while or for loop must be a single statement, yet we often need to execute more
    than one statement in the body of a loop. We do so by enclosing the statements in curly braces, thus turning the
    sequence of statements into a block.    */


/*  Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from § 1.4.1 (p. 11) so that it no 
    longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.  */

// #include <iostream>
// int main()
// {
//     int sum = 0, val = 1;
//     while (val <= 10)
//         sum += val, ++val;
//     std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

//     return 0;
// }

//  This rewritten version diminishes the readability.