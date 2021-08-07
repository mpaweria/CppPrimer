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