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


/*  Exercise 6.17: Write a function to determine whether a string contains any capital letters. Write a function to 
    change a string to all lowercase. Do the parameters you used in these functions have the same type? If so, why?
    If not, why not?    */

// #include <iostream>
// #include <string>
// using std::cout; using std::endl; using std::string;

// bool any_capital(string const& str)
// {
//     for (auto ch : str)
//         if (isupper(ch)) return true;
//     return false;
// }

// void to_lowercase(string& str)
// {
//     for (auto& ch : str) ch = tolower(ch);
// }

// int main()
// {
//     string hello("Hello World!");
//     cout << any_capital(hello) << endl;

//     to_lowercase(hello);
//     cout << hello << endl;

//     return 0;
// }

// Not the same. For the first one "const" was used, since no change need to do for the argument. 
// For the second function, "const" can't be used, because the content of the agument should be changed.



/*  Exercise 6.18: Write declarations for each of the following functions. When you write these declarations, use the 
    name of the function to indicate what the function does.
    (a) A function named compare that returns a bool and has two
    parameters that are references to a class named matrix.
    (b) A function named change_val that returns a vector<int> iterator
    and takes two parameters: One is an int and the other is an
    iterator for a vector<int>.      */

//  (a) bool compare(matrix &a, matrix &b);
//  (b) vector<int>::iterator change_val(int a, vector<int> iterator);       



/*  Exercise 6.19: Given the following declarations, determine which calls are legal and which are illegal. For those 
    that are illegal, explain why.
    double calc(double);
    int count(const string &, char);
    int sum(vector<int>::iterator, vector<int>::iterator, int);
    vector<int> vec(10);
    (a) calc(23.4, 55.1);
    (b) count("abcda", 'a');
    (c) calc(66);
    (d) sum(vec.begin(), vec.end(), 3.8);       */

/*  (a) Illegal: calc expects only one argument.
    (b) Legal.
    (c) Legal.
    (d) Legal (value of floating point will be truncated to int ie. 3.8 ->3).      */


/*  Exercise 6.20: When should reference parameters be references to const? What happens if we make a parameter a 
    plain reference when it could be a reference to const?      */

/*  If somewhere const can be used, we should just use it because if we make a parameter a plain reference when it 
    could be a reference to const, the reference value maybe changed.   */



/*----------------------------------------------------6.2.4------------------------------------------------------------  

Exercise 6.21: Write a function that takes an int and a pointer to an int and returns the larger of the int value or the 
value to which the pointer points. What type should you use for the pointer?       */

// #include<iostream>
// using namespace std;

// int larger(int a, int *p)
// {
//     return (a > *p) ? a : *p;
// }
// int main()
// {
//     int num1=50, num2=20;
//     cout << larger(num1, &num2);

//     return 0;
// }


//  Exercise 6.22: Write a function to swap two int pointers.

// #include<iostream>
// using namespace std;

// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {

//     int a=5, b=10;
//     cout << "a = " << a << " and b = " << b << endl;
//     swap(a, b);
//     cout << "After swapping: " << endl << "a = " << a << " and b = " << b;

//     return 0;
// }


/*  Exercise 6.23: Write your own versions of each of the print functions presented in this section. Call each of these
    functions to print i and j defined as follows:-
    int i = 0, j[2] = {0, 1};   */

// #include<iostream>
// using namespace std;

// void print(const int *p)
// {
//     if(p)
//         cout << "const int *p: " << *p << endl;
// }
// void print(const char *p)
// {
//     if(p)
//     {
//         cout << "const char *p: ";
//         while(*p)
//         {
//             cout << *p++ << "  ";
//         }
//         cout << endl;
//     }
// }
// void print(const int *beg, const int *end)
// {
//     cout << "int beg and end: ";
//     while(beg!=end)
//     {
//         cout << *beg++ << "  ";
//     }
//     cout << endl;
// }
// void print(const int arr[], int size)
// {
//     cout << "const int arr[], int size: ";
//     for(int i=0; i<=size; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     cout << endl;
// }
// void print(int (&arr)[2])
// {
//     cout << "int (&arr)[2]: ";
//     for(auto ele: arr)
//         cout << ele << "  ";
//     cout << endl;
// }

// int main()
// {
//     int i = 0, j[2] = {0, 1}; 
//     char ch[4] = "hey"; 

//     print(ch);
//     print(&i);
//     print(begin(j), end(j));
//     print(j, end(j)-begin(j));
//     print(j);

//     return 0;
// }


/*  Exercise 6.24: Explain the behavior of the following function. If there are problems in the code, explain what they
    are and how you might fix them.
    void print(const int ia[10])
    {
    for (size_t i = 0; i != 10; ++i)
    cout << ia[i] << endl;
    }   */

/*  So we cannot pass an array by value, and when we pass an array to a function, we are actually passing a pointer to 
    the array's first element.
    In this question, const int ia[10] is actually same as const int*, and the size of the array is irrelevant. we can 
    pass const int ia[3] or const int ia[255], there are no differences. If we want to pass an array which size is ten,
    we should use reference like that:

    void print10(const int (&ia)[10]) { //... }     */



 /*----------------------------------------------------6.2.5------------------------------------------------------------

 Exercise 6.25: Write a main function that takes two arguments. Concatenate the supplied arguments and print the 
 resulting string.      */

// #include <iostream>
// #include <string>

// int main(int argc, char **argv)
// {
//     std::string str;
//     for (int i = 1; i != argc; ++i)
//         str += std::string(argv[i]) + " ";

//     std::cout << str << std::endl;
//     return 0;
// }



/*  Exercise 6.26: Write a program that accepts the options presented in this section. Print the values of the arguments
    passed to main.     */

// #include <iostream>
// #include <string>

// int main(int argc, char **argv)
// {
//     std::string str;
//     for (int i = 1; i != argc; ++i)
//         str += std::string(argv[i]) + " ";

//     std::cout << str << std::endl;
//     return 0;
// }



/*----------------------------------------------------6.2.6-------------------------------------------------------------

Exercise 6.27: Write a function that takes an initializer_list<int> and produces the sum of the elements in the list. */

// #include<iostream>
// #include<initializer_list>
// using namespace std;

// int sum(initializer_list<int> const& num)
// {
//     int sum=0;
//     for(auto i:num)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     auto arr = {1,2,3,4,5};
//     cout << "sum = " << sum(arr) <<endl;

//     return 0;
// }


/*  Exercise 6.28: In the second version of error_msg that has an ErrCode parameter, what is the type of elem in the 
    for loop?   */

//  The type of elem in the for loop is const std::string&.


/*  Exercise 6.29: When you use an initializer_list in a range for would you ever use a reference as the loop control 
    variable? If so, why? If not, why not?    */

/*  Subject to availability. When the variable type is a large space-consuming type such as a string, the overhead of 
    copying can be reduced by reference. In other cases, the reference is not much different, because the elements of 
    the initializer_list object are constants, and their values ​​cannot be modified even if they are referenced.   */