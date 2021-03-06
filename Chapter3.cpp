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


/*  Exercise 3.22: Revise the loop that printed the first paragraph in text to instead change the elements in text that 
    correspond to the first paragraph to all uppercase. After you’ve updated text, print its contents.  */

// #include<iostream>
// #include<string>
// #include<vector>
// #include<cctype>
// using namespace std;

// int main()
// {
//     vector<string> text;
//     string line;
//     while(getline(cin, line))
//     {
//         text.push_back(line);
//     }
//     for(auto it=text.begin(); it!=text.end() && !it->empty(); it++)
//     {
//         for(auto ch=it->begin(); ch!=it->end(); ch++)
//         {
//             if(isalpha(*ch))
//             {
//                 *ch = toupper(*ch);
//             }
//         }
//         cout << *it << endl;
//     }
    
//     return 0;
// }


/*  Exercise 3.23: Write a program to create a vector with ten int elements. Using an iterator, assign each element a 
    value that is twice its current value. Test your program by printing the vector.    */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     int num, i=0;
//     while(i<10)
//     {
//         cin >> num;
//         vec.push_back(num);
//         i++;
//     }
//     cout << endl;
//     for(auto it=vec.begin(); it!=vec.end(); it++)
//     {
//         cout << (*it)*2 << " ";
//     }
//     return 0;
// }


/*-------------------------------------------------3.4.2--------------------------------------------------------------

Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.    */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     int n;

//     while(cin>>n)
//     {
//         vec.push_back(n);
//     }

//     if(vec.empty())
//     {
//         cout << "Vector is empty." << endl;
//         return -1;
//     }
//     else if(vec.size()==1)
//     {
//         cout << "There is only one element." << endl;
//         return -1;
//     }
//     else
//     {
//         cout <<endl  << "Sum of adjacent elements:" <<endl;
//         for(auto it=vec.begin(); it!=(vec.end()-1); it++)
//         {
//             cout << "Sum of " << *it << " and " << (*it)+1 << " is " << (*it)+((*it)+1) << endl;
//         }

//         cout <<endl << "Sum of pair of first and last elements:" <<endl;
//         for(auto lft=vec.begin(), rht=(vec.end()-1); lft<rht;  lft++, rht--)
//         {
//             cout << "Sum of " << *lft << " and " << *rht << " is " << (*lft) + (*rht) << endl;
//         }
//     }
//     return 0;
// }


/*  Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p.104) using iterators instead of subscripts. */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> grades (11);
//     int grade;
//     while(cin >> grade)
//     {
//         if(grade<=100)
//         {
//             ++(*(grades.begin()+grade/10));
//         }
//     }
//     for(auto i: grades)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }


/*  Exercise 3.26: In the binary search program on page 112, why did we write mid = beg + (end - beg) / 2; 
    instead of mid = (beg + end) /2;?   */

/*  Because the iterator of vector don't define the + operator between the two iterators. beg + end is illegal.
    We can only use the subtraction between the two iterators.  */


/*-------------------------------------------------3.5.1--------------------------------------------------------------

Exercise 3.27: Assuming txt_size is a function that takes no arguments and returns an int value, which of the following
definitions are illegal? Explain why.
    unsigned buf_size = 1024;
    (a) int ia[buf_size];
    (b) int ia[4 * 7 - 14];
    (c) int ia[txt_size()];
    (d) char st[11] = "fundamental";    */

/*  (a) Illegal, as buf_size is not a const variable (dimension value must be a constant expression).
    (b) Legal.
    (c) Illegal, dimension value must be a constant expression.
    (d) Illegal, the string' size is 12 more than the dimension of array (11 literal, 1 null character).    */


/*  Exercise 3.28: What are the values in the following arrays?
        string sa[10];
        int ia[10];
        int main() {
        string sa2[10];
        int ia2[10];
        }       */

/*  Array sa has 10 empty strings.
    Array ia has 10 elements containing 0.
    Array sa2 has 10 empty strings.
    Array ia2 has 10 undefined elements.    */


/*  Exercise 3.29: List some of the drawbacks of using an array instead of a vector     */

/*   Drawbacks of using arrays insead of vectors:
    (a) Size is fixed at the compile time.
    (b) Can't add elements at run time.
    (c) Bug prone.    */


/*-------------------------------------------------3.5.2--------------------------------------------------------------

Exercise 3.30: Identify the indexing errors in the following code:
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;    */

/*  If ix is equal to 10, then ia[ix] is trying to derefence an element outside the range of the array, thus will show
    undefined behaviour.    */


/*  Exercise 3.31: Write a program to define an array of ten ints. Give each element the same value as its position 
    in the array.   */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {};
//     for(int i=0; i<10; i++)
//     {
//         arr[i]=i;
//     }
//     for(auto i: arr)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }


/*  Exercise 3.32: Copy the array you defined in the previous exercise into another array. Rewrite your program to 
    use vectors.    */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     //Using arrays
//     int arr1[10] = {}, arr2[10];
//     for(int i=0; i<10; i++)
//     {
//         arr1[i]=i;      
//     }
//     cout << "Array 1: ";
//     for(auto i: arr1)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Array 2: ";
//     for(int i=0; i<10; i++)
//     {
//         arr2[i]=arr1[i];        
//     }
//     for(auto i: arr2)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     //Using vectors
//     vector<int> vec1(10);

//     cout << "Vector 1: ";
//     for(int i=0; i<10; i++)
//     {
//         vec1[i]=arr1[i];        
//     }
//     for(auto i: vec1)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     vector<int> vec2(vec1);     //Copying vector 1 in vector 2.

//     cout << "Vector 2: ";
//     for(auto i: vec2)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }


/*  Exercise 3.33: What would happen if we did not initialize the scores array in the program on page 116?  */

//  The scores array will store garbage values, if not ititialized.


/*-------------------------------------------------3.5.3--------------------------------------------------------------

Exercise 3.34: Given that p1 and p2 point to elements in the same array, what does the following code do? Are there 
values of p1 or p2 that make this code illegal?
    p1 += p2 - p1;      */

/*  The given code will make p1 and p2 point to the same element in the array.
    For every legal value of p1 and p2, this code is always legal.    */


/*  Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.   */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int size = 10;
//     int arr[size];

//     for(int *p=arr; p!=arr+size; p++)
//     {
//         *p=0;
//     }
//     for(auto i: arr)
//     {
//         cout << i <<" ";
//     }
// }


/*  Exercise 3.36: Write a program to compare two arrays for equality. Write a similar program to compare two vectors.  */

// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;

// bool compare(int arr1[], int arr1Size, int arr2[], int arr2Size)
// {
//     if(arr1Size != arr2Size)
//     {
//         return false;
//     }
//     for(int i=0; i<arr1Size; i++)
//     {
//         if(arr1[i]!=arr2[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int arr1[]={2,4,6,8,10}, arr2[]={2,4,6,8,10};
//     int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

//     if(compare(arr1, arr1Size, arr2, arr2Size))
//     {
//         cout << "Arrays are equal." << endl;
//     }
//     else
//     {
//         cout << "Arrays are not equal." << endl;
//     }

//     vector<int> vec1 {1,2,3,4,5};
//     vector<int> vec2 {1,2,3,4,5};

//     if(vec1==vec2)
//     {
//         cout << "Vectors are equal." << endl;
//     }
//     else
//     {
//         cout << "Vectors are not equal." << endl;
//     }

//     return 0;
// }


/*-------------------------------------------------3.5.4--------------------------------------------------------------

Exercise 3.37: What does the following program do?
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
    cout << *cp << endl;
    ++cp;
    }       */

/* The following program will first print the character array ca i.e hello then it will start printing garbage values
    as there is no null character appended in the array, thus the loop will not be terminated as expected leading to 
    undefined behaviour.    */


/*  Exercise 3.38: In this section, we noted that it was not only illegal but meaningless to try to add two pointers. 
    Why would adding two pointers be meaningless?   */

/*  Pointers contain addresses. Adding two addresses makes no sense, because you have no idea what you would point to.
    Subtracting two addresses lets you compute the offset between these two addresses, which may be very useful 
    in some situations.     */

/*  Exercise 3.39: Write a program to compare two strings. Now write a program to compare the values of two 
    C-style character strings.  */

// #include<iostream>
// #include<string>
// #include<cstring>
// using namespace std;

// int main()
// {
//     string str1 = "Hi, I'm string one.", str2 = "Hi, I'm string two.";

//     if(str1==str2)
//     {
//         cout << "Strings are equal." << endl;
//     }
//     else if(str1<str2)
//     {
//         cout << "\"" << str1 << "\"" << " is less than " << "\"" << str2 << "\"" << endl;
//     }
//     else
//     {
//         cout << "\"" << str2 << "\"" << " is less than " << "\"" << str1 << "\"" << endl;
//     }

//     const char *c1 = "Hi, I'm C-style string one.", *c2 = "Hi, I'm C-style string two.";

//     auto result = strcmp(c1, c2);

//     if(result==0)
//     {
//         cout << "Strings are equal." << endl;
//     }
//     else if(result < 0)
//     {
//         cout << "\"" << c1 << "\"" << " is less than " << "\"" << c2 << "\"" << endl;
//     }
//     else
//     {
//         cout << "\"" << c2 << "\"" << " is less than " << "\"" << c1 << "\"" << endl;
//     }

//     return 0;
// }


/*  Exercise 3.40: Write a program to define two character arrays initialized from string literals. Now define a 
    third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays 
    into the third.     */

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     const char str1[] = "String 1", str2[] = "String 2";
//     char longStr[30];
//     strcpy(longStr, str1);
//     strcat(longStr, " ");
//     strcat(longStr, str2);

//     cout << longStr;
// }


/*-------------------------------------------------3.5.5--------------------------------------------------------------

Exercise 3.41: Write a program to initialize a vector from an array of ints.    */

// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     vector<int> vec(begin(arr), end(arr));
//     for(int i: vec)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }


/*  Exercise 3.42: Write a program to copy a vector of ints into an array of ints.  */
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     const vector<int> vec{6,7,8,9,10};
//     int arr[vec.size()]={};

//     for(int i=0; i<vec.size(); i++)
//     {
//         arr[i]=vec[i];
//     }
//     for(int i: arr)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }


/*--------------------------------------------------3.6---------------------------------------------------------------
Exercise 3.43: Write three different versions of a program to print the elements of ia. One version should use a range 
for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the 
other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, 
or decltype to simplify the code.   */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int ia[3][4] ={ 
//                   {0, 1, 2, 3}, 
//                   {4, 5, 6, 7}, 
//                   {8, 9, 10, 11}
//                   };

//     //Using range for 
//     for(int (&i)[4]: ia)
//     {
//         for(int j: i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;

//     //Using subcripts
//     for(int i=0; i!=3; i++)
//     {
//         for(int j=0; j!=4; j++)
//         {
//             cout << ia[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;
//     //Using pointer
//     for(int (*p)[4]=ia; p!=ia+3; p++)
//     {
//         for(int *q=*p; q!=*p+4; q++)
//         {
//             cout << *q << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


/*  Exercise 3.44: Rewrite the programs from the previous exercise using a type alias for the type of the loop 
    control variables.  */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int ia[3][4] ={ 
//                   {0, 1, 2, 3}, 
//                   {4, 5, 6, 7}, 
//                   {8, 9, 10, 11}
//                   };

//     using intArray = int[4];

//     //Using range for 
//     for(intArray &i: ia)
//     {
//         for(int j: i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;

//     //Using subcripts
//     for(int i=0; i!=3; i++)
//     {
//         for(int j=0; j!=4; j++)
//         {
//             cout << ia[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;
//     //Using pointer
//     for(intArray *p=ia; p!=ia+3; p++)
//     {
//         for(int *q=*p; q!=*p+4; q++)
//         {
//             cout << *q << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


/*  Exercise 3.45: Rewrite the programs again, this time using auto.    */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int ia[3][4] ={ 
//                   {0, 1, 2, 3}, 
//                   {4, 5, 6, 7}, 
//                   {8, 9, 10, 11}
//                   };

//     //Using range for 
//     for(auto &i: ia)
//     {
//         for(int j: i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;

//     //Using subcripts
//     for(auto i=0; i!=3; i++)
//     {
//         for(auto j=0; j!=4; j++)
//         {
//             cout << ia[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << endl;
//     //Using pointer
//     for(auto p=ia; p!=ia+3; p++)
//     {
//         for(auto q=*p; q!=*p+4; q++)
//         {
//             cout << *q << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }