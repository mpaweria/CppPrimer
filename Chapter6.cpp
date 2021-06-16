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

// #include <iostream>
// #include "Chapter6.h"
// #include "fact.cpp"
// using namespace std;

// int main()
// {
//     int num, val;
//     cout << "Enter a number of which you want factorial: ";
//     cin >> num;
//     cout << "Enter a number for absolute value: ";
//     cin >> val;

//     cout << endl << "Factorial of " << num << " is " << fact(num) << endl;
//     cout << "Absolute value of " << val << " is " << abs(val);

//     return 0;
// }



/*----------------------------------------------------6.2.1------------------------------------------------------------

Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test the function by calling it and 
printing the swapped values.    */

// #include<iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = *a;   
// }

// int main()
// {
//     int x=25, y=50;

//     cout << "Value of a = " << x << " and value of b = "<<y << endl << "After swapping: " << endl;
//     swap(&x, &y);
//     cout << "Value of a = " << x << " and value of b = "<< y << endl;

//     return 0;
// }




/*----------------------------------------------------6.2.2------------------------------------------------------------

Exercise 6.11: Write and test your own version of reset that takes a reference.     */

// #include<iostream>
// using namespace std;

// int reset(int &ref)
// {
//     ref = 0;
//     return ref;
// }
// int main()
// {
//     int num = 7;
//     cout << num << endl;
//     reset(num);
//     cout << num;
// }


/*  Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references instead of pointers to 
    swap the value of two ints. Which version do you think would be easier to use and why?     */

// #include<iostream>
// using namespace std;

// void swap(int &a, int &b)
// {
//     int temp = a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int i=10, j=20;
//     cout << "Value of i is " << i << " and value j is " << j <<endl;
//     swap(i ,j);
//     cout << "After swapping: " << endl << "Value of i is " << i << " and value j is " << j <<endl;
// }


/*Exercise 6.13: Assuming T is the name of a type, explain the difference between a function declared as void f(T) and 
    void f(T&).     */

/*  void f(T) pass the argument by value, nothing the function does to the parameter will affect the argument. 
    Void f(T&) pass a reference, will be bound to whatever T object we pass, changes done in the function will
    be change the argument too.    */


/*  Exercise 6.14: Give an example of when a parameter should be a reference type. Give an example of when a parameter
    should not be a reference.    */

/*  a parameter should be a reference type when we want to change the value of arguement:

    void reset(int &i)
    {
            i = 0;
    }

a parameter should not be a reference when we don't want to change the value of the original argument:

    void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
    {
            for (std::vector<int>::iterator iter = begin; iter != end; ++iter)
                    std::cout << *iter << std::endl;
    }    */


/*  Exercise 6.15: Explain the rationale for the type of each of find_char’s parameters. In particular, why is s a 
    reference to const but occurs is a plain reference? Why are these parameters references, but the char parameter 
    c is not? What would happen if we made s a plain reference? What if we made occurs a reference to const?    */

/*  Because s should not be changed by this function, but occurs result must be calculated by the function.
    Because c may be a temp varable, such as find_char(s, 'a', occurs).
    s could be changed in the function, and occurs would not be changed. so occurs = 0; is an error.    */



/*----------------------------------------------------6.2.3------------------------------------------------------------

Exercise 6.16: The following function, although legal, is less useful  than it might be. Identify and correct the 
limitation on this function: bool is_empty(string& s) { return s.empty(); }     */

/*  Since this function doesn't change the argument, "const" shoud be added before string&s, otherwise this function
    is misleading and can't be used with const string or in a const function.
    Correction:
    bool is_empty(const string &s)
    {
        return s.empty();
    }   */