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


/*-------------------------------------------------3.1---------------------------------------

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