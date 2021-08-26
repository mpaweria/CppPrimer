#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data total;

    if(read(cin, total))
    {
        Sales_data trans;

        while (read(cin, trans))
        {
            if(total.bookNo == trans.bookNo)
            {
                // add(total, trans);            doubt here
                total.combine(trans);
            }
            else
            {
                cout << "Book Number (isbn) is " << total.isbn() << endl;
                display(cout, total) << endl;
                total=trans;
            }
        }
        cout << "Book Number (isbn) is " << total.isbn() << endl;
        display(cout, total) << endl;
    }
    else
    {
        cerr << "No data entered!"; 
    }
    return 0;
}