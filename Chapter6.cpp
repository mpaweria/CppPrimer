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

    Local static variable: local static variable???object??? is initialized before the first time execution passes through
    the object???s definition.Local statics are not destroyed when a function ends; they are destroyed when the program 
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
exercises in ?? 6.1 (p. 205).    */

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


/*  Exercise 6.12: Rewrite the program from exercise 6.10 in ?? 6.2.1 (p. 210) to use references instead of pointers to 
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


/*  Exercise 6.15: Explain the rationale for the type of each of find_char???s parameters. In particular, why is s a 
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



/*----------------------------------------------------6.2.6------------------------------------------------------------

Exercise 6.27: Write a function that takes an initializer_list<int> and produces the sum of the elements in the list. */

// #include<iostream>
// #include<initializer_list>
// using namespace std;

// int sum(initializer_list<int> const& li)
// {
//     int sum=0;
//     for(auto i=li.begin(); i!=li.end(); i++)
//     {
//         sum += *i;
//     }
//     return sum;
// }
// int main()
// {
//     auto arr = {1,2,3,4,5};

//     cout << "Sum of the given elements is " << sum(arr);

//     return 0;
// }


/*  Exercise 6.28: In the second version of error_msg that has an ErrCode parameter, what is the type of elem in the 
    for loop?   */

//  The type of elem in the for loop is const std::string&.


/*  Exercise 6.29: When you use an initializer_list in a range for would you ever use a reference as the loop control 
    variable? If so, why? If not, why not?    */ 

/*  Subject to availability. When the variable type is a large space-consuming type such as a string, the overhead of 
    copying can be reduced by reference. In other cases, the reference is not much different, because the elements of 
    the initializer_list object are constants, and their values ??????cannot be modified even if they are referenced.   */



/*----------------------------------------------------6.3.2------------------------------------------------------------

Exercise 6.30: Compile the version of str_subrange as presented on page 223 to see what your compiler does with the 
indicated errors    */

/*  Error (Clang):
    Non-void function 'str_subrange' should return a value. // error #1
    Control may reach end of non-void function. // error #2     */


//  Exercise 6.31: When is it valid to return a reference? A reference to const?    

/*  When you can find the preexisting object that the reference refered and reference to const, when the returned 
    variable or object's value is fixed.    */


/*  Exercise 6.32: Indicate whether the following function is legal. If so, explain what it does; if not, correct 
    any errors and then explain it.
    int &get(int *arry, int index) 
    { return arry[index]; }
    int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i)
    get(ia, i) = i;
    }       */

//  The given function is legal. It returns the value of array ia.


//  Exercise 6.33: Write a recursive function to print the contents of a vector.

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>::iterator beg, const vector<int>::iterator &end)
// {
//     if(beg==end)
//     {
//         return;
//     }
//     cout << *beg << " ";
//     print(++beg, end);
// }

// int main()
// {
//     vector<int> vec{1,2,3,4,5};

//     print(vec.begin(), vec.end());

//     return 0;
// }


/*  Exercise 6.34: What would happen if the stopping condition in factorial were
    if (val != 0)      */

/*  If the stopping condition in facorial was val!=0, then there would have been two situations

    Case 1: If argument is positive, then there will not be any change in the answer just one multiplication will
    increase. This could reduce the efficiency of program for larger arguments.

    Case 2: If argument is negative, then the recursion will never stop. As a result, stack overflow would occur.   */


//  Exercise 6.35: In the call to fact, why did we pass val - 1 rather than val--?

/*  We passed v-1 rather than v-- because, v-- is a post decrement operator, thus the value of v will decrease after 
    the calling of the fact function again, which means the fact function will always take val as argument and a 
    recursion loop (ie. the recursion will never stop) will occur.      */



/*----------------------------------------------------6.3.3------------------------------------------------------------

Exercise 6.36: Write the declaration for a function that returns a reference to an array of ten strings, without 
using either a trailing return, decltype, or a type alias.     */

// string (&func(string arg))[10];



/*  Exercise 6.37: Write three additional declarations for the function in the previous exercise. One should use a 
    type alias, one should use a trailing return, and the third should use decltype. Which form do you prefer and 
    why?    */

/*  Using type alias:
    typedef string strArr[10];
            or
    using strArr = string[10];

    strArr &func(string arg);

    Using Trailing return:
    auto func(string arg)->string(&)[10];

    Using Decltype return:
    string strArr[10];
    decltype(strArr) &func(string arg);

    I prefer the first one because its synatx is easy to write and remember.    */


/*  Exercise 6.38: Revise the arrPtr function on to return a reference to the array     */

// decltype(arrStr)& arrPtr(int i)
// {            
//     return (i % 2) ? odd : even;
// }



/*----------------------------------------------------6.4-----------------------------------------------------------

Exercise 6.39: Explain the effect of the second declaration in each one of the following sets of declarations. 
Indicate which, if any, are illegal.
    (a) int calc(int, int);
    int calc(const int, const int);
    (b) int get();
    double get();
    (c) int reset(int );
    double reset(double );      */

/*  (a) Legal, repeated declaration(without definition) is allowed in C++.
    (b) Illegal, only the return type differs in the overloaded functions.
    (c) Legal, Overloaded functions with different parameter list and return type.  */



/*----------------------------------------------------6.5.1----------------------------------------------------------

Exercise 6.40: Which, if either, of the following declarations are errors? Why?
(a) int ff(int a, int b = 0, int c = 0);
(b) char *init(int ht = 24, int wd, char bckgrnd);      */  

/*  (a) No errors.
    (b) Missing default arguments on parameter 'wd' and 'bckgrnd'.
        Correction: 
        char *init(int wd, char bckgrnd, int ht=24); //non-default arg can come before default arg but not after.   */



/*  Exercise 6.41: Which, if any, of the following calls are illegal? Why? Which, if any, are legal but unlikely to 
    match the programmer???s intent? Why?
    char *init(int ht, int wd = 80, char bckgrnd = ' ');
    (a) init();
    (b) init(24,10);
    (c) init(14, '*');      */

/*  (a) Illegal, no value for ht.
    (b) Legal
    (c) Legal, but unlikely to match programmer's intent as wd would set to *.      */



/*  Exercise 6.42: Give the second parameter of make_plural (?? 6.3.2, p. 224) a default argument of 's'. Test your 
    program by printing singular and plural versions of the words success and failure.      */

// #include<iostream>
// #include<string>
// using namespace std;

// string makePlural(int ctr, const string &word, const string &ending="s")
// {
//     return (ctr>1) ? word + ending : word;
// }
// int main()
// {
//     cout << "Singular success: " << makePlural(1, "success", "es") << endl;
//     cout << "Plural success: " << makePlural(4, "success", "es") << endl;
//     cout << "Singular failure: " << makePlural(1, "failure") << endl;
//     cout << "Plural failure: " << makePlural(4, "failure") << endl;

//     return 0;
// }



/*----------------------------------------------------6.5.2----------------------------------------------------------

Exercise 6.43: Which one of the following declarations and definitions would you put in a header? In a source file? 
Explain why.
(a) inline bool eq(const BigInt&, const BigInt&) {...}
(b) void putValues(int *arr, int size);         */

/*  Both two should put in a header. 
    (a) is an inline function. 
    (b) is the declaration of useful function. We always put them in the header.    */


//  Exercise 6.44: Rewrite the isShorter function from ?? 6.2.2 (p. 211) to be inline.

// #include<string>
// #include<iostream>
// using namespace std;

// inline bool isShorter(const string &s1, const string &s2)
// {
//     return s1.size() <s2.size();
// }
// int main()
// {
//     cout << isShorter("monika", "samuel");
//     return 0;
// }


/*  Exercise 6.45: Review the programs you???ve written for the earlier exercises and decide whether they should be 
    defined as inline. If so, do so. If not, explain why they should not be inline.     */

/*  For example, the function arrPtr in [Exercise 6.38] and make_plural in [Exercise 6.42] should be defined as 
    inline. But the function func in [Exercise 6.4] shouldn't. It is not that small and it's only being called once. 
    Hence, it will probably not expand as inline.   
    
    6.38 
    inline decltype(arrStr)& arrPtr(int i)
    {            
        return (i % 2) ? odd : even;
    }
    
    6.42
    inline string makePlural(int ctr, const string &word, const string &ending="s")
    {
        return (ctr>1) ? word + ending : word;
    }       */


//  Exercise 6.46: Would it be possible to define isShorter as a constexpr? If so, do so. If not, explain why not.

/*  No.
    Because std::string::size() is not a constexpr function and s1.size() == s2.size() is not a constant expression.*/



/*----------------------------------------------------6.5.3----------------------------------------------------------

Exercise 6.47: Revise the program you wrote in the exercises in ?? 6.3.2 (p. 228) that used recursion to print the 
contents of a vector to conditionally print information about its execution. For example, you might print the size
of the vector on each call. Compile and run the program with debugging turned on and again with it turned off.     */

// #include<iostream>
// #include<vector>
// using namespace std;

// // #define NDEBUG               // To turnoff degugger comment this out

// void print(vector<int>::iterator beg, const vector<int>::iterator &end)
// {
//     #ifndef NDEBUG                                      // debugger
//         cout << "Vector size: " << end-beg << " ";    
//     #endif

//     if(beg==end)
//     {
//         return;
//     }
//     cout << *beg << " " << endl;
//     print(++beg, end);
// }

// int main()
// {
//     vector<int> vec{1,2,3,4,5};

//     print(vec.begin(), vec.end());

//     return 0;
// }


/*  Exercise 6.48: Explain what this loop does and whether it is a good use of assert:
        string s;
        while (cin >> s && s != sought) { } // empty body
        assert(cin);        */

/*  The loop is letting the user input a word until it is equal to sought.
    It is not a good use of assert because if the user inputs a word, cin will always have content, so assert (cin) 
    will always be true, so it doesn't make any sense, using assert(s==sought) will be a better option.     */



/*-----------------------------------------------------6.6----------------------------------------------------------

Exercise 6.49: What is a candidate function? What is a viable function?     */

/*  Candidate functions are the functions which have the same name as the function called and for which declaration
    is visible at a point of time.

    Viable functions: The set of functions from candidate functions which have the same number of parameters as 
    there are arguments in the call and each argument matches or is convertible to the type of its corresponding 
    parameter.   */


/*  Exercise 6.50: Given the declarations for f from page 242, list the viable functions, if any for each of the 
    following calls. Indicate which function is the best match, or if the call is illegal whether there is no match
    or why the call is ambiguous.
    (a) f(2.56, 42)
    (b) f(42)
    (c) f(42, 0)
    (d) f(2.56, 3.14)       */

/*  (a) Ambiguous call, as 2.56 matches best with f(double, double) whereas 42 matches best with f(int, int), thus 
        there is no one best match.
    (b) f(int)
    (c) f(int, int)
    (d) f(double, double=3.14)       */


/*  Exercise 6.51: Write all four versions of f. Each function should print a distinguishing message. Check your 
    answers for the previous exercise. If your answers were incorrect, study this section until you understand why
    your answers were wrong.    */

// #include<iostream>
// using namespace std;

// void f()
// {
//     cout << "Void f()"  << endl;
// }
// void f(int)
// {
//     cout << "Void f(int)" << endl;
// }
// void f(int, int)
// {
//     cout << "Void f(int, int)" << endl;
// }
// void f(double, double=3.14)
// {
//     cout << "Void f(double, double=3.14)" << endl;
// }

// int main()
// {
//     // f(2.56, 42);         // Error: f is ambiguous.
//     f(42);
//     f(42, 0);
//     f(2.56, 3.14);
// }



/*-----------------------------------------------------6.6.1--------------------------------------------------------

Exercise 6.52: Given the following declarations,
    void manip(int, int);
    double dobj;
what is the rank (?? 6.6.1, p. 245) of each conversion in the following calls?
    (a) manip('a', 'z');
    (b) manip(55.4, dobj);      */

/*  (a) Match thorugh promotion.
    (b) Match through arithmetic type conversion.    */


/*  Exercise 6.53: Explain the effect of the second declaration in each one of the following sets of declarations. 
    Indicate which, if any, are illegal.
    (a) int calc(int&, int&);
    int calc(const int&, const int&);
    (b) int calc(char*, char*);
    int calc(const char*, const char*);
    (c) int calc(char*, char*);
    int calc(char* const, char* const);     */

/*  (a) int calc(int&, int&);                   // calls calc(int&)
        int calc(const int&, const int&);       // calls calc(const int&)
    (b) int calc(char*, char*);                 // calls calc(char*)
        int calc(const char*, const char*);     // calls calc(const char*)
    (c) Illegal, both calls calc(char*).      */



/*-----------------------------------------------------6.7----------------------------------------------------------

Exercise 6.54: Write a declaration for a function that takes two int parameters and returns an int, and declare a 
vector whose elements have this function pointer type.      */

// int func(int a, int b);

// using pFunc1 = decltype(func) *;
// typedef decltype(func) *pFunc2;
// using pFunc3 = int(*)(int a, int b);
// using pFunc4 = int(int a, int b);
// typedef int(*pFunc5)(int a, int b);
// using pFunc6 = decltype(func);

// vector<pFunc1> vec1;
// vector<pFunc2> vec2;
// vector<pFunc3> vec3;
// vector<pFunc4*> vec4;
// vector<pFunc5> vec5;
// vector<pFunc6*> vec6;


/*  Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int values. Store pointers to 
    these values in your vector from the previous exercise.     */

// #include<iostream>
// #include<vector>
// using namespace std;

// int add(int a, int b)
// {
//     return a+b;
// }
// int subtract(int a, int b)
// {
//     return a-b;
// }
// int multiply(int a, int b)
// {
//     return a*b;
// }
// int divide(int a, int b)
// {
//     return (b!=0 ? a/b : 0);
// }

// int main()
// {
//     vector<int (*)(int, int)> calc = {add, subtract, multiply, divide};

//     cout << "Input 2 integers:" << endl;
// 	int a, b;
// 	while (cin >> a >> b) {
// 		cout << "add: " << calc[0](a, b) << endl;
// 		cout << "subtract: " << calc[1](a, b) << endl;
// 		cout << "multiply: " << calc[2](a, b) << endl;
// 		cout << "divide: " << calc[3](a, b) << endl;
// 	}
//     return 0;
// }


//  Exercise 6.56: Call each element in the vector and print their result.

// 	while (cin >> a >> b) {
// 		cout << "add: " << calc[0](a, b) << endl;
// 		cout << "subtract: " << calc[1](a, b) << endl;
// 		cout << "multiply: " << calc[2](a, b) << endl;
// 		cout << "divide: " << calc[3](a, b) << endl;
// 	}