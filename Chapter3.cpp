/*-------------------------------------------------3.1---------------------------------------

Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.   */

//  1.4.1
// #include <iostream>
// using std::cout;
// using std::endl;
// int main()
// {
//     int sum = 0, val = 1;
//     // keep executing the while as long as val is less than or equal to 10
//     while (val <= 10) {
//     sum += val; // assigns sum + val to sum
//     ++val; // add 1 to val
//     }
//     cout << "Sum of 1 to 10 inclusive is "
//     << sum << endl;
//     return 0;
// }

//  2.6.2
// #include<iostream>
// #include<string>
// using namespace std;

// struct Sales_data
// {
//     string isbn;
//     unsigned unitSold=0;
//     double price=0.0;
//     double revenue=0.0; 
// };
// int main()
// {
//     int count=1;
//     double totalRevenue;
//     Sales_data item1, item2;
//     cout << "Enter the details of the books:"<<endl;
//     cin >> item1.isbn >> item1.unitSold >> item1.price;
//     cin >> item2.isbn >> item2.unitSold >> item2.price;
//     item1.revenue = item1.unitSold * item1.price;
//     item2.revenue = item2.unitSold * item2.price;
//     if(item1.isbn == item2.isbn)
//     {
//         totalRevenue = item1.revenue + item2.revenue;
//         count = item1.unitSold + item2.unitSold;
//         cout << item1.isbn << " " << count << " " << totalRevenue << endl;

//         if(count!=0)
//         {
//             cout << "Average price of the book " << totalRevenue/count;
//         }
//         else 
//         {
//             cout << "No Sales.";
//         }
//         return 0;
//     }
//     else 
//     {
//         cerr << "Data must refer to same ISBN. ";
//         return -1;
//     }
// }


/*-------------------------------------------------3.2.2---------------------------------------

Exercise 3.2: Write a program to read the standard input a line at a time. Modify your program to read a word at a time.*/

//  One line at a time
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     for(string str; getline(cin, str);){
//         cout << str << endl;
//     }
// }

//  One word at a time
// #include<iostream>
// using namespace std;

// int main()
// {
//     for(string str; cin >> str;){
//         cout << str << endl;
//     }
// }


/*  Exercise 3.3: Explain how whitespace characters are handled in the string input operator and in the getline function.  */

/*  String input operator considers a space as a terminating character, which means that it can only display a single 
    word (even if you type many words).

    The getline function takes an input stream and a string. This function reads the given stream up to and including 
    the first newline and stores what it read—not including the newline—in its string argument. After getline sees a 
    newline, even if it is the first character in the input, it stops reading and returns. If the first character in 
    the input is a newline, then the resulting string is the empty string.   */


/*  Exercise 3.4: Write a program to read two strings and report whether the strings are equal. If not, report which of 
    the two is larger. Now, change the program to report whether the strings have the same length, and if not, 
    report which is longer.  */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string s1, s2;
//     cout << "Enter string 1: ";
//     getline(cin, s1);
//     cout << "Enter string 2: ";
//     getline(cin, s2);

//     // Check larger string
//     if(s1==s2)
//     {
//         cout << "Strings " << s1 << " and " << s2 << " are equal." << endl;
//     }
//     else if(s1>s2)
//     {
//         cout << "String " << s1 << " is larger than " << s2 << endl;
//     }
//     else 
//     {
//         cout << "String " << s2 << " is larger than " << s1 << endl;
//     }

//     // Check larger string
//     if(s1.size()==s2.size())
//     {
//         cout << "Strings " << s1 << " and " << s2 << " are equal." << endl;
//     }
//     else if(s1.size()>s2.size())
//     {
//         cout << "String " << s1 << " is longer than " << s2 << endl;
//     }
//     else 
//     {
//         cout << "String " << s2 << " is longer than " << s1 << endl;
//     }
//     return 0;
// }


/*  Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string.
    Print the concatenated string. Next, change the program to separate adjacent input strings by a space.  */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str, s;
//     while(cin>>s)
//     {
//         str+=s;
//     }
//     cout << "The concatenated string is " << str << endl;
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str, s;
//     while(cin >> s)
//     {
//         if(str.empty())
//         {
//             str+=s;
//         }
//         else
//         {
//             str += " " + s;
//         }
//     }
//     cout << "The concatenated string is " << str << endl;

//     return 0;
// }


/*-------------------------------------------------3.2.3--------------------------------------------------------------

Exercise 3.6: Use a range for to change all the characters in a string to X.    */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str{"a simple string"};
//     cout << "String: " << str << endl;
//     for(auto &c : str)
//     {
//         c = 'X';
//     }
//     cout << "New string: " << str << endl;

//     return 0;
// }


/*  Exercise 3.7: What would happen if you define the loop control variable in the previous exercise as type char? 
    Predict the results and then change your program to use a char to see if you were right.    */

/*  If c is changed from type &char to char, then, c is a copy of each character of string str, thus the assignment 
    c = 'X' won't mutate str. As a result, after this for range statement, nothing changes. ie OUTPUT = a simple string. */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str{"a simple string"};
//     cout << "String: " << str << endl;
//     for(char c : str)
//     {
//         c = 'X';
//     }
//     cout << "New string: " << str << endl;

//     return 0;
// } 


/*  Exercise 3.8: Rewrite the program in the first exercise, first using a while and again using a traditional for loop. 
    Which of the three approaches do you prefer and why?    */

/*  I personally prefer range based for loop because of its easy use and simeple syntax. There is no need to calculate 
    the number of elements. If data type is not known then auto specifier can be used.    */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str{"a simple string"};
//     cout << "String: " << str << endl;
//     int i=0;
//     while(i<str.size())     // using while loop
//     {
//         str[i] = 'X';
//         i++;
//     }
//     cout << "New string using while loop: " << str << endl;

//     for(i=0; i<str.size(); i++)        // using for loop
//     {
//         str[i] = 'Y';
//     }
//     cout << "New string using for loop: " << str << endl;

//     return 0;
// } 


/*  Exercise 3.9: What does the following program do? Is it valid? If not, why not?
    string s;
    cout << s[0] << endl;   */

/*  The given code is supposed to print the first element of the sting s. But as s is an empty string, the operation 
    is invalid i.e undefined behaviour.     */


/*  Exercise 3.10: Write a program that reads a string of characters including punctuation and writes what was read 
    but with the punctuation removed.  */

// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string with punctuations: ";
//     getline(cin, str);

//     for(auto c: str)
//     {
//         if(!ispunct(c))
//         {
//             cout << c;
//         }
//     }
//     return 0;
// }


/*  Exercise 3.11: Is the following range for legal? If so, what is the type of c?
    const string s = "Keep out!";
    for (auto &c : s) { // ...  }     */

/*  The type of c is const char&.
    It depends on the code if the loop is legal or not.
    Example:  cout << c;      // legal.
              c = 'X';        // illegal as s is a const string.    */


/*-------------------------------------------------3.3.1--------------------------------------------------------------

Exercise 3.12: Which, if any, of the following vector definitions are in error? For those that are legal, explain what 
the definition does. For those that are not legal, explain why they are illegal.
(a) vector<vector<int>> ivec;
(b) vector<string> svec = ivec;
(c) vector<string> svec(10, "null");    */

/*  (a) Legal: ivec is a vector of vectors storing variable of int type.
    (b) Illegal: svec is a string vector can't be a copy of int vector (different types).
    (c) Legal: svec is a vector containing 10 strings initializes to "none".    */ 


/*  Exercise 3.13: How many elements are there in each of the following vectors? What are the values of the elements?
    (a) vector<int> v1;
    (b) vector<int> v2(10);
    (c) vector<int> v3(10, 42);
    (d) vector<int> v4{10};
    (e) vector<int> v5{10, 42};
    (f) vector<string> v6{10};
    (g) vector<string> v7{10, "hi"};    */

/*  (a) v1 is an empty vector.
    (b) v2 has 10 elements default initialized to 0.
    (c) v3 has 10 elements initialized to 42.
    (d) v4 has 1 element initialized to 10.
    (e) v5 has 2 elements initalized to 10 and 42.
    (f) v6 has 10 elements default initialized i.e "".
    (g) v7 has 10 elements initialized to "hi".    */