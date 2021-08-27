#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data total;
    double totalPrice =0;
    string booknum;
    unsigned units = 0;
    if(cin >> booknum >> units >> totalPrice)
    {
        total.setBookNo(booknum);
        total.setUnitSold(units);
        total.calRevenue(totalPrice);
        Sales_data trans;
        double transPrice =0;
        string booknum2;
        unsigned units2 = 0;
        while(cin >> booknum2 >> units2 >> totalPrice)
        {
            trans.setBookNo(booknum2);
            trans.setUnitSold(units2);
            trans.calRevenue(transPrice);
            if(total.getBookNo() == trans.getBookNo())
            {
                total.addData(trans);
            }
            else
            {
                total.print();
                total = trans;
            }
        }
        total.print();
    }
    else
    {
        cerr << "No data entered!" << endl;
    }
    return 0;
}