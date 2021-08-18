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



/*----------------------------------------------------7.1.4----------------------------------------------------------

Exercise 7.11: Add constructors to your Sales_data class and write a program to use each of the constructors.   */

// #include<iostream>
// #include<string>
// #include "Sales_data.h"
// using namespace std;

// int main()
// {
//     Sales_data item1;
//     display(std::cout, item1) << std::endl;
    
//     Sales_data item2("0-201-78345-X");
//     display(std::cout, item2) << std::endl;
    
//     Sales_data item3("0-201-78345-X", 3, 20.00);
//     display(std::cout, item3) << std::endl;
    
//     Sales_data item4(std::cin);
//     display(std::cout, item4) << std::endl;
    
//     return 0;
// }


/*  Exercise 7.12: Move the definition of the Sales_data constructor that takes an istream into the body of the 
    Sales_data class        */

//  will do tomorrow ugggggggggggggghhhhhhhhh 18-08-21


//  Exercise 7.13: Rewrite the program from page 255 to use the istream constructor.

// #include "ex7_12.h"

// int main()
// {
//     Sales_data total(std::cin);
//     if (!total.isbn().empty())
//     {
//         std::istream &is = std::cin;
//         while (is) {
//             Sales_data trans(is);
//             if (!is) break;
//             if (total.isbn() == trans.isbn())
//                 total.combine(trans);
//             else {
//                 print(std::cout, total) << std::endl;
//                 total = trans;
//             }
//         }
//         print(std::cout, total) << std::endl;
//     }
//     else
//     {
//         std::cerr << "No data?!" << std::endl;
//         return -1;
//     }
    
//     return 0;
// }


//  7.14

// Sales_data() : bookNo(""), units_sold(0) , revenue(0){ }


//  Exercise 7.15: Add appropriate constructors to your Person class.

// #ifndef CP5_ex7_15_h
// #define CP5_ex7_15_h

// #include <string>
// #include <iostream>

// struct Person;
// std::istream &read(std::istream&, Person&);

// struct Person {
//     Person() = default;
//     Person(const std::string sname, const std::string saddr):name(sname), address(saddr){ }
//     Person(std::istream &is){ read(is, *this); }
    
//     std::string getName() const { return name; }
//     std::string getAddress() const { return address; }
    
//     std::string name;
//     std::string address;
// };

// std::istream &read(std::istream &is, Person &person)
// {
//     is >> person.name >> person.address;
//     return is;
// }

// std::ostream &print(std::ostream &os, const Person &person)
// {
//     os << person.name << " " << person.address;
//     return os;
// }

// #endif