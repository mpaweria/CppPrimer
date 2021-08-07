/* ----------------------------------------Section 1.1.1-----------------------------------------------------

Exercise 1.1: Review the documentation for your compiler and determine what file naming convention it uses. 
Compile and run the main program from page 2. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     return 0;
// }
/* PS C:\Users\Vipul\Desktop\cpp\Primer> cd "c:\Users\Vipul\Desktop\cpp\Primer\" ;
 if ($?) { g++ Chapter1.cpp -o Chapter1 } ; if ($?) { .\Chapter1 } */

/*Exercise 1.2: Change the program to return -1. A return value of-1 is often treated as an indicator that the 
program failed. Recompile and rerun your program to see how your system treats a failure indicator from main. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     return -1;
// }
/* PS C:\Users\Vipul\Desktop\cpp\Primer> cd "c:\Users\Vipul\Desktop\cpp\Primer\" ;
 if ($?) { g++ Chapter1.cpp -o Chapter1 } ; if ($?) { .\Chapter1 } */

/* ----------------------------------------Section 1.2-----------------------------------------------------

Exercise 1.3: Write a program to print Hello, World on the standard output. */

// #include<iostream>
// using namespace std; //using the standard namespace including cout, endl, cin etc.

// int main()
// {
//     cout << "Hello World!" << endl;
//     return 0;
// }

/*  Exercise 1.4: Our program used the addition operator, +, to add two numbers.
    Write a program that uses the multiplication operator, *, to print the product instead. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int var1, var2, prod=0;
//     cout << "Enter two numbers: ";
//     cin >> var1 >> var2;

//     prod = var1*var2;
//     cout << "Product of " << var1 << " & " << var2 << " is " << prod << ".";

//     return 0;
// }

/*  Exercise 1.5: We wrote the output in one large statement. 
    Rewrite the program to use a separate statement to print each operand. */ 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int var1, var2, prod=0;
//     cout << "Enter two numbers: ";
//     cin >> var1 >> var2;

//     prod = var1*var2;
//     cout << "Product of ";
//     cout << var1;
//     cout << " & ";
//     cout << var2;
//     cout << " is ";
//     cout << prod;
//     cout << ".";

//     return 0;
// }

/*  Exercise 1.6: Explain whether the following program fragment is legal.
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 + v2 << std::endl;
    If the program is legal, what does it do? If the program is not legal,
    why not? How would you fix it? */
    
/*  Incorret program: error: expected primary-expression before '<<' token.
  Correction: Remove the semicolons, making it a single statement.
    std::cout << "The sum of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;
    --------------OR-----------------
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl; */

/* ----------------------------------------Section 1.3-----------------------------------------------------

Exercise 1.7: Compile a program that has incorrectly nested comments. */

// /*  This is a multiline comment.
//     1
//     2
//     /*Here goes a nested comment.*/
// */
//     error: expected unqualified-id before '/' token

// /* Exercise 1.8: Indicate which, if any, of the following output statements are legal:
//     std::cout << "/*";
//     std::cout << "*/";
//     std::cout << /* "/" /;
//     std::cout << /* "" "/*" */;
// After you’ve predicted what will happen, test your answers by
// compiling a program with each of these statements. Correct any
// errors you encounter */

// Incorrect: error: expected primary-expression at end of input.
// Correct Code:std::cout << "/*";
//             std::cout << "*/";
//             std::cout << /* "*/"/*";
//             std::cout << /* "*/"*/"/*" */;
    
/* ----------------------------------------Section 1.4.1-----------------------------------------------------

Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum=0, num=50;
//     while(num<=100)
//     {
//         sum+=num;
//         num++;
//     }
//     cout << "The sum from 50 to 100 is " << sum;
//     return 0;
// }

/* Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, 
there is a decrement operator (--) that subtracts 1. Use the decrement operator 
to write a while that prints the numbers from ten down to zero. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num=10;
//     while(num>=0)
//     {
//         cout << num << endl;
//         num--;   
//     }
//     return 0;
// }

/*  Exercise 1.11: Write a program that prompts the user for two integers.
    Print each number in the range specified by those two integers. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int beg, end;
//     cout << "Enter the range of integers: ";
//     cin >> beg >> end;

//     if(beg>end)
//     {
//         int temp=beg;
//         beg=end;
//         end=temp;
//     }
//     while(beg<=end)
//     {
//         cout << beg++ << " ";   // print beg then increment it by 1. 
//     }
//     return 0;
// }

/* ----------------------------------------Section 1.4.2-----------------------------------------------------

Exercise 1.12: What does the following for loop do? What is the final value of sum?
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i; */

/*  The given loop is calculating sum of integers from -100 to 100 i.e. 0.
    So,  final value of sum is 0. */


/*  Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops. */

// Exercise 1.9: Sum of integers from 50 to 100. 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum=0;
//     for(int i=50; i<=100; i++)
//     {
//         sum+=i;
//     }
//     cout << "The sum from 50 to 100 is " << sum;
//     return 0;
// }

// Exercise 1.10: Print numbers from 10 to 0.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum=0;
//     for(int i=10; i>=0; i--)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// Exercise 1.11: Print integers in a given range.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int beg, end;
//     cout << "Enter the range of integers: ";
//     cin >> beg >> end;

//     if(beg>end)
//     {
//         int temp=beg;
//         beg=end;
//         end=temp;
//     }
//     for(int i=beg; i<=end; i++)
//     {
//         cout << i << " ";   
//     }
//     return 0;
// }

/*  Exercise 1.14: Compare and contrast the loops that used a for with those using a while.
    Are there advantages or disadvantages to using either form? */

/*  For loop: for(init; condition; expression)
            {
                // body of the loop
            }
            The 'for' loop used only when we already knew the number of iterations.
            If the condition is not put up in 'for' loop, then loop iterates infinite times.
            In 'for' loop iteration statement is written at top, hence,
            executes only after all statements in loop are executed.
            Initialization, condition checking, iteration statement are written at the top of the loop.

    While loop: while(condition)
                {
                    // body of the loop
                }
                The 'while' loop used only when the number of iteration are not exactly known.
                If the condition is not put up in 'while' loop, it provides compilation error.
                In 'while' loop, the iteration statement can be written anywhere in the loop.
                Only initialization and condition checking is done at the top of the loop.

    In my opinion, For loop has more advantage over While loop, as it gives a better readability. It is 
    better structured. It is easy to stuck in an infinite loop with a While loop.
    While loop is more convinient when we've to take n number of inputs from user.  */

/*  Exercise 1.15: Write programs that contain the common errors discussed in the box on page 16.
    Familiarize yourself with the messages the compiler generates. */

/*  Syntax Error: Grammatical Error
    int main()
    {
        cout << "Hello World."  \\ Error: semicolon missed
        return 0;
    }

    Type Error: Wrong data type
    int main()
    {
        char c = "Hello";  \\ Error: Here char should be string
        return 0;
    }

    Declaration Error: Using undeclared variables
    int main()
    {
        int a;
        cout << a << " " << b;  \\ Error: Use of undeclared variable b
        return 0;
    }
*/

/* ----------------------------------------Section 1.4.3-----------------------------------------------------

Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num, sum=0;
//     for(num=0; cin>>num;)
//     {
//         sum+=num;
//     }
//     cout << "Sum = " << sum;
//     return 0;
// }

/* ----------------------------------------Section 1.4.4-----------------------------------------------------

Exercise 1.17: What happens in the program presented in this section if the input values are all equal?
What if there are no duplicated values? */

/* If all the input values are equal, it will print a line a line with the count of number you input
If there are no duplicated values, when different values input, a new line will be printed if you press Enter */

/*  Exercise 1.18: Compile and run the program from this section giving it only equal values as input.
    Run it again giving it values in which no number is repeated. */

/*  Output: 
    Giving equal value: value occurs n times  // n is the number of times value is inputted.
    When no value is repeated: value occurs 1 times  // as it is not repeated. */

/*  Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a 
range of numbers so that it handles input in which the first number is smaller than the second. */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int beg, end;
//     cout << "Enter the range of integers: ";
//     cin >> beg >> end;

//     if(beg>end)
//     {
//         int temp=beg;
//         beg=end;
//         end=temp;
//     }
//     for(int i=beg; i<=end; i++)
//     {
//         cout << i << " ";   
//     }
//     return 0;
// }

/* ----------------------------------------Section 1.5.1-----------------------------------------------------

Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of Sales_item.h in the Chapter 1 code directory.
Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions,
writing each transaction to the standard output.  */

// #include <iostream>
// #include "Sales_item.h"
// using namespace std;

// int main()
// {
//     Sales_item item;
//     cout << "Enter the book sale transaction: ";
//     while(cin >> item)
//     {
//         cout << "The book sales transaction is: " << item;
//     }
//     return 0;
// }

/* Exercise 1.21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum. */

// #include <iostream>
// #include "Sales_item.h"
// using namespace std;

// int main()
// {
//     Sales_item item1, item2;
//     cout << "Enter 2 books: ";
//     cin >> item1 >> item2;
//     if(item1.bookNo()==item2.bookNo())
//     {
//         cout << "Sum: " << item1+item2;
//     }
//     else {
//         cout << "Error: Different ISBN. ";
//     }
//     return 0;
// }

/*  Exercise 1.22: Write a program that reads several transactions for the same ISBN.
    Write the sum of all the transactions that were read. */

// #include<iostream>
// #include "Sales_item.h"
// using namespace std;

// int main()
// {
//     Sales_item book;

//     if(cin>>book)
//     {
//         Sales_item item;
//         while(cin >> item)
//         {
//             if(book.bookNo()==item.bookNo())
//             {
//                 book+=item;
//             }
//             else
//             {
//                 cout << "Sum of transaction: " << book <<endl;
//                 book = item;   // to start adding the new book entered.
//             }
//         }
//         cout << "Sum of transaction: " << book <<endl;
//     }
//     else
//     {
//         cerr << "No Data!";   //  cerr: represents the standard error
//         return -1;   //  -1 indicates error
//     }
//     return 0;
// }

/* ----------------------------------------Section 1.5.2-----------------------------------------------------

Exercise 1.23: Write a program that reads several transactions and counts how many transactions occur for each ISBN. */

// #include <iostream>
// #include "Sales_item.h"

// using namespace std;

// int main()
// {
//     int count = 1;
//     Sales_item currentBook;

//     if(cin>>currentBook)
//     {
//         Sales_item newBook;
//         while(cin >> newBook)
//         {
//             if(currentBook.bookNo()==newBook.bookNo())
//             {
//                 count++;
//             }
//             else
//             {
//                 cout <<  currentBook << " occurs " << count << " times." <<endl;
//                 currentBook = newBook;   
//                 count=1;
//             }
//         }
//     }
//     else
//     {
//         cerr << "No Data!";   //  cerr: represents the standard error
//         return -1;   //  indicates error
//     }
//     return 0;
    
// }

/*  Exercise 1.24: Test the previous program by giving multiple transactions representing multiple ISBNs.
    The records for each ISBN should be grouped together.  */

/*  0-201-78345-X 3 20.00
    0-201-78345-X 3 20.00
    0-201-78345-X 3 20.00
    0-201-78345-X 3 20.00
    0-201-78315-X 3 20.00
    0-201-78345-X 3 60 20 occurs 4 times.
    0-201-78315-X 3 20.00
    0-201-78315-X 3 20.00
    0-201-72315-X 3 20.00 
    0-201-78315-X 3 60 20 occurs 3 times. */

/* ----------------------------------------Section 1.6-----------------------------------------------------

Exercise 1.25: Using the Sales_item.h header from the Web site, compile and execute the bookstore program 
presented in this section.  */

// #include <iostream>
// #include "Sales_item.h"
// using namespace std;

// int main()
// {
//     Sales_item total;

//     if(cin>>total)
//     {
//         Sales_item trans;
//         while(cin >> trans)
//         {
//             if(total.bookNo()==trans.bookNo())
//             {
//                 total+=trans;
//             }
//             else
//             {
//                 cout << "Sum of transaction: " << total <<endl;
//                 total = trans;   
//             }
//         }
//         cout << "Sum of transaction: " << total <<endl;
//     }
//     else
//     {
//         cerr << "No Data!";   //  cerr: represents the standard error
//         return -1;   //  indicates error
//     }
//     return 0;
// }