/*----------------------------------------------------7.1.1----------------------------------------------------------

Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24) using the Sales_data class you
defined for the exercises in § 2.6.1 (p. 72).     */

// #include<iostream>
// #include<string>
// #include "Sales_data.h"
// using namespace std;

// int main()
// {
//     Sales_data total;
//     double totalPrice =0;
    
//     if(cin >> total.bookNo >> total.unitSold >> totalPrice)
//     {
//         total.calRevenue(totalPrice);
//         Sales_data trans;
//         double transPrice =0;
//         while(cin >> trans.bookNo >> trans.unitSold >> transPrice)
//         {
//             trans.calRevenue(transPrice);
//             if(total.bookNo == trans.bookNo)
//             {
//                 total.addData(trans);
//             }
//             else
//             {
//                 total.print();
//                 total = trans;
//             }
//         }
//         total.print();
//     }
//     else
//     {
//         cerr << "No data entered!" << endl;
//     }
//     return 0;
// }


/*----------------------------------------------------7.1.2----------------------------------------------------------

Exercise 7.2: Add the combine and isbn members to the Sales_data class you wrote for the exercises in § 2.6.2 (p. 76).*/

//  Added in Sales_data.h


//  Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use these members.

// #include<iostream>
// #include<string>
// #include "Sales_data.h"
// using namespace std;

// int main()
// {
//     Sales_data total;
//     double totalPrice;

//     if(cin >> total.bookNo >> total.unitSold >> totalPrice)
//     {
//         total.calRevenue(totalPrice);
//         Sales_data trans;
//         double transPrice;

//         while (cin >> trans.bookNo >> trans.unitSold >> transPrice)
//         {
//             trans.calRevenue(transPrice);
//             if(total.bookNo == trans.bookNo)
//             {
//                 total.combine(trans);
//             }
//             else
//             {
//                 cout << "Book Number (isbn) is " << total.isbn() << endl;
//                 total.print();
//                 total=trans;
//             }
//         }
//         cout << "Book Number (isbn) is " << total.isbn() << endl;
//         total.print();
//     }
//     else
//     {
//         cerr << "No data entered!"; 
//     }
//     return 0;
// }


/*  Exercise 7.4: Write a class named Person that represents the name and address of a person. Use a string to hold 
    each of these elements. Subsequent exercises will incrementally add features to this class.     */

//  Defined Person class in Person.h


/*  Exercise 7.5: Provide operations in your Person class to return the name and address. Should these functions be 
    const? Explain your choice.     */

// Yes, these functions should be const so that they don't modify the functions on which they are called.


/*----------------------------------------------------7.1.3----------------------------------------------------------

Exercise 7.6: Define your own versions of the add, read, and print functions.   */

//   Defines in Sales_data.h  (named print as display, because print already exists)


/*  Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p. 260) to use 
    these new functions.    */

// #include<iostream>
// #include<string>
// #include "Sales_data.h"
// using namespace std;

// int main()
// {
//     Sales_data total;

//     if(read(cin, total))
//     {
//         Sales_data trans;

//         while (read(cin, trans))
//         {
//             if(total.bookNo == trans.bookNo)
//             {
//                 // add(total, trans);            doubt here
//                 total.combine(trans);
//             }
//             else
//             {
//                 cout << "Book Number (isbn) is " << total.isbn() << endl;
//                 display(cout, total) << endl;
//                 total=trans;
//             }
//         }
//         cout << "Book Number (isbn) is " << total.isbn() << endl;
//         display(cout, total) << endl;
//     }
//     else
//     {
//         cerr << "No data entered!"; 
//     }
//     return 0;
// }


/*  Exercise 7.8: Why does read define its Sales_data parameter as a plain reference and print define its parameter 
    as a reference to const?    */

/*  Print defines its parameter as a reference to const so that it does not by mistake change the value of the member,
    whereas read is supposed to take input from the user, so it does not make sense to make it a const.     */


//  Exercise 7.9: Add operations to read and print Person objects to the code you wrote for the exercises in § 7.1.2

//  Added in Person.h


/*  Exercise 7.10: What does the condition in the following if statement do?
    if (read(read(cin, data1), data2))      */

/*  Lets divide it into steps
    istream firstStep = read(cin, data1);
    istream secondStep = read(firstStep, data2);
    if(secondStep);     
    The condition of if would read two objects at one time.     */