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
//     string booknum;
//     unsigned units = 0;
//     if(cin >> booknum >> units >> totalPrice)
//     {
//         total.setBookNo(booknum);
//         total.setUnitSold(units);
//         total.calRevenue(totalPrice);
//         Sales_data trans;
//         double transPrice =0;
//         string booknum2;
//         unsigned units2 = 0;
//         while(cin >> booknum2 >> units2 >> totalPrice)
//         {
//             trans.setBookNo(booknum2);
//             trans.setUnitSold(units2);
//             trans.calRevenue(transPrice);
//             if(total.getBookNo() == trans.getBookNo())
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
            // if(total.getBookNo() == trans.getBookNo())         // to access private members
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

//  Done in Sales_data.h


//  Exercise 7.13: Rewrite the program from page 255 to use the istream constructor.

// #include <iostream>
// #include "Sales_data.h"
// #include <string>
// using namespace std;

// int main()
// {
//     Sales_data total(cin);
//     if(!total.isbn().empty())
//     {
//         istream &is = cin;
//         while(is)
//         {
//             Sales_data trans(is);
//             if(!is)
//                 break;
//             if(total.isbn() == trans.isbn())
//                 total.combine(trans);
//             else
//             {
//                 display(cout, total) << endl;
//                 total = trans;
//             }
//         }
//         display(cout, total) << endl;
//     }
//     else
//     {
//         cerr << "No data entered!" << endl;
//         return -1;
//     }
//     return 0;
// }

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


/*  Exercise 7.14: Write a version of the default constructor that explicitly initializes the members to the values 
    we have provided as in-class initializers.      */

// Sales_data() : bookNo(""), units_sold(0) , revenue(0){ }


//  Exercise 7.15: Add appropriate constructors to your Person class.

// Done in Person.h



/*----------------------------------------------------7.2----------------------------------------------------------

Exercise 7.16: What, if any, are the constraints on where and how often an access specifier may appear inside a class
definition? What kinds of members should be defined after a public specifier? What kinds should be private?     */

/*  There are no restrictions on how often an access specifier may appear.The specified access level remains in 
effect until the next access specifier or the end of the class body.

The members which are accessible to all parts of the program should define after a public specifier.

The members which are accessible to the member functions of the class but are not accessible to code that uses the 
class should define after a private specifier.      */


//  Exercise 7.17: What, if any, are the differences between using class or struct?

/*  The only difference between using a struct keyword or a class keyword to define a class is the access control.
    By default the members of struct are public and the members of class are private.   */


//  Exercise 7.18: What is encapsulation? Why is it useful?

/*  Encapsulation enforces the separation of a class’ interface and implementation. A class that is encapsulated 
    hides its implementation: users of the class can use the interface but have no access to the implementation.
    Advantages:
    User code cannot inadvertently corrupt the state of an encapsulated object.
    The implementation of an encapsulated class can change over time without requiring changes in user-level code.  */


/*  Exercise 7.19: Indicate which members of your Person class you would declare as public and which you would 
    declare as private. Explain your choice.    */

/*  i'd make the members name and address private and constructors, getName(), getAddress() public as the interface 
    should be defined as public, but the data shouldn't be exposes outside the class.     */



/*----------------------------------------------------7.2----------------------------------------------------------

Exercise 7.20: When are friends useful? Discuss the pros and cons of using friends.     */

/*  Friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as 
    members.

    Pros:
    The useful functions can refer to class members in the class scope without needing to explicitly prefix them 
    with the class name.
    You can access all the nonpublic members conveniently.
    Sometimes, more readable to the users of class.
    
    Cons:
    Lessens encapsulation and therefore maintainability.
    Code verbosity, declarations inside the class, outside the class.    */


/*  Exercise 7.21: Update your Sales_data class to hide its implementation. The programs you’ve written to use 
    Sales_data operations should still continue to work. Recompile those programs with your new class definition
    to verify that they still work.     */

//  Done in Sales_data.h


//  Exercise 7.22: Update your Person class to hide its implementation.

//  Done in Person.h