/*-------------------------------------------------------6.1-----------------------------------------------------------

Exercise 6.1: What is the difference between a parameter and an argument?   */

/*  Parameters: Local variable declared inside the function parameter list. They are initialized by the arguments 
    provided in the each function call.
    Arguments: Values supplied in a function call that are used to initialize the function's parameters.      */


/*  Exercise 6.2: Indicate which of the following functions are in error and why. Suggest how you might correct the 
    problems.
    (a) int f() {
    string s;
    // ...
    return s;}
    (b) f2(int i) { // ...  }
    (c) int calc(int v1, int v1) // ...  }
    (d) double square(double x) return x * x;       */

/*  (a) Error: the return type of the function is int while it is returning string.
        Correction:
        string f() 
        {
            string s;
            // ...                
            return s;
        }

    (b) Error: No return type of the function.
        Correction:
        type f2(int i) { // ...  }  
    
    (c) Error: Function parameters have the same name.
        Correction: 
        int calc(int v1, int v2) { // ...  }
    
    (d) No error.      */


//  Exercise 6.3: Write and test your own version of fact.

// #include<iostream>
// using namespace std;

// int fact(int num)
// {
//     int fact = 1;
//     while(num>1)
//     {
//         fact*=num;
//         num--;
//     }
//     return fact;
// }

// int main()
// {
//     int num=9;
//     fact(num);

//     cout << "Factorial of " << num << " is " << fact(num);

//     return 0;
// }


/*  Exercise 6.4: Write a function that interacts with the user, asking for a number and generating the factorial of 
    that number. Call this function from main.     */

// #include<iostream>
// using namespace std;

// int fact(int num)
// {
//     int fact = 1;
//     while(num>1)
//     {
//         fact*=num;
//         num--;
//     }
//     return fact;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     fact(num);

//     cout << "Factorial of " << num << " is " << fact(num);

//     return 0;
// }


//  Exercise 6.5: Write a function to return the absolute value of its argument.

// #include<iostream>
// using namespace std;

// int abs(int val)
// {
//     return (val>0) ? val : -val;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Absolute value of " << num << " is " << abs(num);

//     return 0;
// }



/*----------------------------------------------------6.1.1-------------------------------------------------------------

Exercise 6.6: Explain the differences between a parameter, a local variable, and a local static variable. Give an 
example of a function in which each might be useful.    */

/*  Local variable: Variables defined inside a block.

    Parameter: Local variables declared inside the function parameter list.

    Local static variable: local static variable（object） is initialized before the first time execution passes through
    the object’s definition.Local statics are not destroyed when a function ends; they are destroyed when the program 
    terminates.

    Example:
    size_t count_add(int n)       // n is a parameter.
    {
        static size_t ctr = 0;    // ctr is a static variable.
        ctr += n;
        return ctr;
    }

    int main()
    {
        for (size_t i = 0; i != 10; ++i)  // i is a local variable.
        cout << count_add(i) << endl;
        return 0;
    }    */


/*  Exercise 6.7: Write a function that returns 0 when it is first called and then generates numbers in sequence each 
    time it is called again.    */

// #include<iostream>
// using namespace std;

// int count()
// {
//     static int cnt;

//     return cnt++;
// }

// int main()
// {
//     for(int i=0; i<10; i++)
//     {
//         cout << count() << endl;
//     }
//     return 0;
// }



/*----------------------------------------------------6.1.2-------------------------------------------------------------

Exercise 6.8: Write a header file named Chapter6.h that contains declarations for the functions you wrote for the 
exercises in § 6.1 (p. 205).    */

/*  int fact(int num);
    int count();
    int abs(int num);

/*----------------------------------------------------6.1.3-------------------------------------------------------------

Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files. These files should include your Chapter6.h 
from the exercises in the previous section. Use these files to understand how your compiler supports separate 
compilation.    */

#include <iostream>
#include "Chapter6.h"
#include "fact.cpp"
using namespace std;

int main()
{
    int num, val;
    cout << "Enter a number of which you want factorial: ";
    cin >> num;
    cout << "Enter a number for absolute value: ";
    cin >> val;

    cout << endl << "Factorial of " << num << " is " << fact(num) << endl;
    cout << "Absolute value of " << val << " is " << abs(val);

    return 0;
}