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

