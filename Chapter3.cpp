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


/*-------------------------------------------------3.3.2--------------------------------------------------------------

Exercise 3.14: Write a program to read a sequence of ints from cin and store those values in a vector.  */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     int num;
//     while(cin>>num)
//     {
//         vec.push_back(num);
//     }
//     return 0;
// }


/*  Exercise 3.15: Repeat the previous program but read strings this time.  */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<string> vec;
//     string str;
//     while(cin>>str)
//     {
//         vec.push_back(str);
//     }
//     return 0;
// }


/*-------------------------------------------------3.3.3--------------------------------------------------------------

Exercise 3.16: Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your 
answers to that exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.  */

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v1;
//     cout << "Size of v1 is: " << v1.size() << endl;
//     if(!v1.empty())
//     {
//         for(auto i: v1)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v1 is empty." << endl;
//     }

//     vector<int> v2(10);
//     cout << "Size of v2 is: " << v2.size() << endl;
//     if(!v2.empty())
//     {
//         for(auto i: v2)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v2 is empty." << endl;
//     }

//     vector<int> v3(10, 42);
//     cout << "Size of v3 is: " << v3.size() << endl;
//     if(!v3.empty())
//     {
//         for(auto i: v3)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v3 is empty." << endl;
//     }

//     vector<int> v4{10};
//     cout << "Size of v4 is: " << v4.size() << endl;
//     if(!v4.empty())
//     {
//         for(auto i: v4)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v4 is empty." << endl;
//     }

//     vector<int> v5{10, 42};
//     cout << "Size of v5 is: " << v5.size() << endl;
//     if(!v5.empty())
//     {
//         for(auto i: v5)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v5 is empty." << endl;
//     }

//     vector<string> v6{10};
//     cout << "Size of v6 is: " << v6.size() << endl;
//     if(!v6.empty())
//     {
//         for(auto i: v6)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v6 is empty." << endl;
//     }

//     vector<string> v7{10, "hi"};
//     cout << "Size of v7 is: " << v7.size() << endl;
//     if(!v7.empty())
//     {
//         for(auto i: v7)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     else 
//     {
//         cout << "Vector v7 is empty." << endl;
//     }

//     return 0;
// }


/*  Exercise 3.17: Read a sequence of words from cin and store the values a vector. After you’ve read all the words, 
    process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.  */

// #include<iostream>
// #include<string>
// #include<vector>
// #include<cctype>
// using namespace std;

// int main()
// {
//     vector<string> vec;
//     string str;

//     while(cin >> str)
//     {
//         vec.push_back(str);
//     }
//     for(auto &s: vec)
//     {
//         for(auto &i: s)
//         {
//             i = toupper(i);
//         }
//     }
//     for(int i=0; i<vec.size(); i++)
//     {
//         if(i!=0 && i%8==0)
//         {
//             cout << endl;
//         }
//         cout << vec.at(i) << " ";
//     }

//     return 0;
// }


/*  Exercise 3.18: Is the following program legal? If not, how might you fix it?
    vector<int> ivec;
    ivec[0] = 42;   */

/*  The given program is illgeal. As ivec is an empty vector, thus dereferencing 1st element of it will cause undefined 
    behaviour.
    Correction: 

    vector<int> ivec{42};       // initializing 1st element to 42.      */


/*  Exercise 3.19: List three ways to define a vector and give it ten elements, each with the value 42. 
    Indicate whether there is a preferred way to do so and why.   */

/*  vector<int> v1(10, 42);
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3;
    for(int i=0; i<10; i++)
    {
        v3.push_back(42);
    }
    The preferred approach is the 1st aproach, as its syntax is simple and easy to use. It is more conivinient to
    initialize a lot to elements with the same initialzed value.  \*.


/*  Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change 
your program so that it prints the sum of the first and last elements, followed by the sum of the second and 
second-to-last, and so on.  */

// PART 1
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     int num=0, sum=0;
//     while(cin>>num)
//     {
//         vec.push_back(num);
//     }
//     if(vec.empty())
//     {
//         cout << "Vector is empty!" << endl;
//         return -1;
//     }
//     else if(vec.size()==1)
//     {
//         cout << "Vector has only 1 element." << endl;
//         return -1;
//     }
//     else
//     {
//         for(int i=0; i<vec.size()-1; i++)
//         {
//             sum=vec[i]+vec[i+1];
//             cout << "Sum of " << vec[i] << " + " << vec[i+1] << " is " << sum << endl;
//         }
//     }
//     return 0;
// }

// PART 2
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     int num=0, sum=0;
//     while(cin>>num)
//     {
//         vec.push_back(num);
//     }
//     if(vec.size()==0)
//     {
//         cout << "Vector is empty!" << endl;
//         return -1;
//     }
//     else if(vec.size()==1)
//     {
//         cout << "Vector has only 1 element." << endl;
//         return -1;
//     }
//     else
//     {
//         for(int i=0; i<(vec.size()+1)/2; i++)
//         {
//             int n = vec.size()-1;
//             sum=vec[i]+vec[n-i];
//             cout << "Sum of " << vec[i] << " + " << vec[n-i] << " is " << sum << endl;
//         }
//     }
//     return 0;
// }


/*-------------------------------------------------3.4.1--------------------------------------------------------------

Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.   */

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// void sizeElements(const vector<int> vec)
// {
//     cout << "Size of the vector is: " << vec.size() << endl <<"Elements are [";

//     for(auto i = vec.cbegin(); i!=vec.cend(); i++)
//     {
//         cout << *i << (i != vec.end() - 1 ? "," : "");
//     }
//     cout << "]" << endl << endl;
// }
// void sizeElements(const vector<string> vec)
// {
//     cout << "Size of the vector is: " << vec.size() << endl <<"Elements are [";

//     for(auto i = vec.cbegin(); i!=vec.cend(); i++)
//     {
//         cout << *i << (i != vec.end() - 1 ? "," : "");
//     }
//     cout << "]" << endl << endl;
// }
// int main()
// {
//     vector<int> v1;
//     vector<int> v2(10);
//     vector<int> v3(10, 42);
//     vector<int> v4{ 10 };
//     vector<int> v5{ 10, 42 };
//     vector<string> v6{ 10 };
//     vector<string> v7{ 10, "hi" };

//     sizeElements(v1);
//     sizeElements(v2);
//     sizeElements(v3);
//     sizeElements(v4);
//     sizeElements(v5);
//     sizeElements(v6);
//     sizeElements(v7);

//     return 0;
// }

