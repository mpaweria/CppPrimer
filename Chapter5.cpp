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


/*----------------------------------------------------5.2-------------------------------------------------------------

Exercise 5.4: Explain each of the following examples, and correct any problems you detect.
(a) while (string::iterator iter != s.end()) { // . . .  }
(b) while (bool status = find(word)) { // . . .  }
if (!status) { // . . .  }      */

/*  (a) Illegal Declaration: string::iterator iter != s.end().
        Correction: std::string::iterator iter = s.begin();
                    while(iter != s.end) { // code }

    (b) Variable status is declared inside the scope of while, thus can't be used inside if condition.
        Correction: bool status;
                    while(status = find(word))  { // code }
                    if(!status)    { // code }      */



/*----------------------------------------------------5.3.1------------------------------------------------------------

Exercise 5.5: Using an if–else statement, write your own version of the program to generate the letter grade from a 
numeric grade.   */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
//     string letter; 
//     int grade;

//     while(cin>>grade)
//     {
//         if(grade < 60)
//         {
//             letter = scores[0];
//         }
//         else
//         {
//             letter = scores[(grade-50) / 10];
//         }
//         cout << letter << endl;
//     }
//     return 0;
// }


/*  Exercise 5.6: Rewrite your grading program to use the conditional operator (§ 4.7, p. 151) in place of the if–else
    statement.     */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
//     string letter; 
//     int grade;

//     while(cin>>grade)
//     {
//         (grade < 60) ? letter = scores[0] : letter = scores[(grade-50) / 10];

//         cout << letter << endl;
//     }
//     return 0;
// }


/*  Exercise 5.7: Correct the errors in each of the following code fragments:
    (a) if (ival1 != ival2)
    ival1 = ival2
    else ival1 = ival2 = 0;
    (b) if (ival < minval)
    minval = ival;
    occurs = 1;
    (c) if (int ival = get_value())
    cout << "ival = " << ival << endl;
    if (!ival)
    cout << "ival = 0\n";
    (d) if (ival = 0)
    ival = get_value();     */

/*  (a) Need to add semicolon in the statement of if.
        if (ival1 != ival2)
            ival1 = ival2;
        else 
            ival1 = ival2 = 0;

    (b) Need to add curly braces to make a block or scope.
        if (ival < minval)
        {
            minval = ival;
            occurs = 1;
        }

    (c) ival is out of scope for the second if condition.
        int ival;
        if (ival = get_value())
            cout << "ival = " << ival << endl;
        if (!ival)
            cout << "ival = 0\n";

    (d) Change assignment operator to equal to operator.
        if (ival == 0)
            ival = get_value();     */


//  Exercise 5.8: What is a “dangling else”? How are else clauses resolved in C++?

/*  Sometimes a program has more if conditions then else, so there arise a program as to which if the else belongs. 
    This condition is known as dangling else. In C++, this ambiguity is resolved by specifying that each else is 
    matched with the closest preceeding unmatched if.   */


/*----------------------------------------------------5.3.2------------------------------------------------------------

Exercise 5.9: Write a program using a series of if statements to count the number of vowels in text read from cin.    */

// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     int aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0;

//     while(cin >> ch)
//     {
//         if(ch=='a' || ch=='A')
//             aCnt++;
//         else if(ch=='e' || ch=='E')
//             eCnt++;
//         else if(ch=='i' || ch=='I')
//             iCnt++;
//         else if(ch=='o' || ch=='O')
//             oCnt++;
//         else if(ch=='u' || ch=='U')
//             uCnt++;
//     }
//     cout << "Number of vowel a(A):  " << aCnt << '\n'
// 	     << "Number of vowel e(E):  " << eCnt << '\n'
// 	     << "Number of vowel i(I):  " << iCnt << '\n'
// 	     << "Number of vowel o(O):  " << oCnt << '\n'
// 	     << "Number of vowel u(U):  " << uCnt << '\n';

//     return 0;
// }


/*  Exercise 5.10: There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count 
    capital letters as vowels. Write a program that counts both lower-and uppercase letters as the appropriate 
    vowel—that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.    */

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
// 	char ch;
// 	while(cin >> ch)
// 	{
// 		switch (ch)
// 		{
// 		case 'a':
// 		case 'A':
// 			++aCnt;
// 			break;
// 		case 'e':
// 		case 'E':
// 			++eCnt;
// 			break;
// 		case 'i':
// 		case 'I':
// 			++iCnt;
// 			break;
// 		case 'o':
// 		case 'O':
// 			++oCnt;
// 			break;
// 		case 'u':
// 		case 'U':
// 			++uCnt;
// 			break;
// 		}
// 	}
// 	cout << "Number of vowel a(A):  " << aCnt << '\n'
// 	     << "Number of vowel e(E):  " << eCnt << '\n'
// 	     << "Number of vowel i(I):  " << iCnt << '\n'
// 	     << "Number of vowel o(O):  " << oCnt << '\n'
// 	     << "Number of vowel u(U):  " << uCnt << '\n';

// 	return 0;
// }


/*  Exercise 5.11: Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and 
    newlines read.    */

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bnkCnt = 0, tabCnt = 0, newCnt = 0;
// 	char ch;
// 	while(cin >> noskipws >> ch)
// 	{
// 		switch (ch)
// 		{
// 		case 'a':
// 		case 'A':
// 			++aCnt;
// 			break;
// 		case 'e':
// 		case 'E':
// 			++eCnt;
// 			break;
// 		case 'i':
// 		case 'I':
// 			++iCnt;
// 			break;
// 		case 'o':
// 		case 'O':
// 			++oCnt;
// 			break;
// 		case 'u':
// 		case 'U':
// 			++uCnt;
// 			break;
//         case ' ':
//             ++bnkCnt;
//             break;
//         case '\t':
//             ++tabCnt;
//             break;
//         case '\n':
//             ++newCnt;
//             break;
// 		}
// 	}
// 	cout << "Number of vowel a(A):  " << aCnt << '\n'
// 	     << "Number of vowel e(E):  " << eCnt << '\n'
// 	     << "Number of vowel i(I):  " << iCnt << '\n'
// 	     << "Number of vowel o(O):  " << oCnt << '\n'
// 	     << "Number of vowel u(U):  " << uCnt << '\n'
//       << "Number of blank spaces:  " << bnkCnt << '\n'
//       << "Number of tabs:  " << tabCnt << '\n'
//       << "Number of new lines:  " << newCnt << '\n';

// 	return 0;
// }


/*  Exercise 5.12: Modify our vowel-counting program so that it counts the number of occurrences of the following 
    two-character sequences: ff, fl, and fi.    */

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
// 	char ch, prev;
// 	while(cin >> noskipws >> ch)
// 	{
// 		switch (ch)
// 		{
// 		case 'a':
// 		case 'A':
// 			++aCnt;
// 			break;
// 		case 'e':
// 		case 'E':
// 			++eCnt;
// 			break;
// 		case 'i':
//                 if(prev=='f')
//                     ++fiCnt;
// 		case 'I':
// 			++iCnt;
// 			break;
// 		case 'o':
// 		case 'O':
// 			++oCnt;
// 			break;
// 		case 'u':
// 		case 'U':
// 			++uCnt;
// 			break;
//         case 'f':
//                 if(prev=='f')
//                     ++ffCnt;    
//             break;
//         case 'l':
//                 if(prev=='f')
//                     ++flCnt;
//             break;
// 		}
//         prev = ch;
// 	}
// 	cout << "Number of vowel a(A):  " << aCnt << '\n'
// 	     << "Number of vowel e(E):  " << eCnt << '\n'
// 	     << "Number of vowel i(I):  " << iCnt << '\n'
// 	     << "Number of vowel o(O):  " << oCnt << '\n'
// 	     << "Number of vowel u(U):  " << uCnt << '\n'
//          << "Number of ffs:  " << ffCnt << '\n'
//          << "Number of fis:  " << fiCnt << '\n'
//          << "Number of fls:  " << flCnt << '\n';

// 	return 0;
// }



/*  Exercise 5.13: Each of the programs in the highlighted text on page 184 contains a common programming error. 
    Identify and correct each error.    */

/*  (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++;
        case 'e': eCnt++;
        default: iouCnt++;
    }
    Error: There's no break after each case so all the cases will be executed.
    
    Correction: 
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++;
                  break:
        case 'e': eCnt++;
                  break:
        default: iouCnt++;
                  break:
    }

    (b) unsigned index = some_value();
    switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
    }
    Error: control bypass an explicitly initialized variable ix.

    Correction:
    unsigned index = some_value();
    int ix;
    switch (index) {
    case 1:
        ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
    }

    (c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
    case 1, 3, 5, 7, 9:
        oddcnt++;
        break;
    case 2, 4, 6, 8, 10:
        evencnt++;
        break;
    }
    Error: case label syntax error.

    Correction:
    unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
    case 1: 3: 5: 7: 9:
        oddcnt++;
        break;
    case 2: 4: 6: 8: 10:
        evencnt++;
        break;
    }

    (d) unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
    }
    Error: case label must be a constant expression.

    Correction:
    const unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
    }       */



/*----------------------------------------------------5.4.1------------------------------------------------------------

Exercise 5.14: Write a program to read strings from standard input looking for duplicated words. The program should find
places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single
repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying
that no word was repeated. For example, if the input is
    how now now now brown cow cow
the output should indicate that the word now occurred three times.    */

// #include<iostream>
// using namespace std;

// int main()
// {
//     string word, prev, repeatedWord;
//     int count = 1, maxCount = 0;
//     while(cin >> word)
//     {
//         if(word==prev)
//         {
//             count++;
//         }
//         else
//         {
//             prev=word;
//             count=1;
//         }
//         if(count > maxCount)
//         {
//             maxCount = count;
//             repeatedWord = prev;
//         }
//     }
//     if(maxCount == 1)
//         cout << "No word is repeated.";
//     else
//         cout << repeatedWord << " occured " << maxCount << " times."; 

//     return 0;
// }



/*----------------------------------------------------5.4.2------------------------------------------------------------

Exercise 5.15: Explain each of the following loops. Correct any problems you detect.
(a) for (int ix = 0; ix != sz; ++ix) { // . . .  }
if (ix != sz)
// . . .
(b) int ix;
for (ix != sz; ++ix) { // . . .  }
(c) for (int ix = 0; ix != sz; ++ix, ++ sz) { // . . .  }       */

/*  (a) Error: the variable ix is declared inside the for loop, so it cannot be accessed out of the scope of the loop.
        Correction:
        int ix; 
        for (ix = 0; ix != sz; ++ix) { // . . .  }
        if (ix != sz)
        // . . .

    (b) Error: the init statement is missing.
        Correction:
        int ix;
        for (;ix != sz; ++ix) { // . . .  }

    (c) Error: as sz variable is also incrementing, the loop will never terminate.
        Correction:
        for (int ix = 0; ix != sz; ++ix) { // . . .  }     */


/*  Exercise 5.16: The while loop is particularly good at executing whilesome condition holds; for example, when we 
    need to read values until end-of-file. The for loop is generally thought of as a step loop: An index steps through 
    a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop
    construct. If you could use only one loop, which would you choose? Why?     */

/*  // while idiomatic
    int i;
    while ( cin >> i )
        // ...

    // same as for
    for (int i = 0; cin >> i;)
        // ...

    // for idiomatic
    for (int i = 0; i != size; ++i)
        // ...

    // same as while
    int i = 0;
    while (i != size)
    {
        // ...
        ++i;
    }

    If I could use only one loop, then I would choose for loop over while loop because of its readability. A For loop 
    is a lot cleaner and a lot nicer to look at. It's also much easier to get stuck in an infinite loop with a while 
    loop.   */


/*  Exercise 5.17: Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. 
    For vectors ofunequal length, compare the number of elements of the smaller vector. For example, given the vectors 
    containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.    */

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> vec1 {0, 1, 1, 2};
//     vector<int> vec2 {0, 1, 1, 2, 3, 5, 8};
//     int flag = 1, size = 0;

//     if(vec1.size() < vec2.size())
//         size = vec1.size();
//     else
//         size = vec2.size();

//     for(int i=0; i<size; i++)
//     {
//         if(vec1[i]!=vec2[i])
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if(flag==1)
//         cout << "True";
//     else
//         cout << "False";
//     return 0;
// }


/*----------------------------------------------------5.4.4------------------------------------------------------------

Exercise 5.18: Explain each of the following loops. Correct any problems you detect.
(a) do
int v1, v2;
cout << "Please enter two numbers to sum:" ;
if (cin >> v1 >> v2)
cout << "Sum is: " << v1 + v2 << endl;
while (cin);
(b) do {
// . . .
} while (int ival = get_response());
(c) do {
int ival = get_response();
} while (ival);     */

/*  (a) Error: brackets missing.
        Correction: 
        do
        {
            int v1, v2;
            cout << "Please enter two numbers to sum:" ;
            if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
        }
        while (cin);

    (b) Error: ival is declared inside the condition of while loop.
        Correction:
        int ival;
        do 
        {
            // . . .
        } 
        while (ival = get_response());

    (c) Error: ival not declared int the scope of while.
        Correction:
        int ival;
        do 
        {
            ival = get_response();
        } while (ival);     */

    
/*  Exercise 5.19: Write a program that uses a do while loop to repetitively request two strings from the user and 
    report which string is less than the other.     */

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str1, str2, more;
//     do
//     {
//         cout << "Enter 2 strings: ";
//         cin >> str1 >> str2;

//         if(str1==str2)
//             cout << "Both the strings are equal." << endl << endl;
//         else if(str1>str2)
//             cout << str1 << " is greater than " << str2 << endl << endl;
//         else
//             cout << str2 << " is greater than " << str1 << endl << endl;

//         cout << "More? Enter yes or no: ";
//         cin >> more;
//     }
//     while(more[0]=='y' || more[0]=='Y');

//     return 0;
// }


/*----------------------------------------------------5.5.1------------------------------------------------------------

Exercise 5.20: Write a program to read a sequence of strings from the standard input until either the same word occurs 
twice in succession or all the words have been read. Use a while loop to read the text one word at a time. Use the break
statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, 
or else print a message saying that no word was repeated.   */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word, prev;
    int flag=0;

    while(cin >> word)
    {
        if(word == prev)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
            prev = word;
        }
    }
    if(flag==1)
        cout << word <<  " occurs twice in succession.";
    else
        cout << "No word is repeated.";

    return 0;
}