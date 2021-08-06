/*----------------------------------------------------7.1.1----------------------------------------------------------

Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24) using the Sales_data class you
defined for the exercises in § 2.6.1 (p. 72).     */

#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data total;
    double totalPrice =0;
    
    if(cin >> total.isbn >> total.unitSold >> totalPrice)
    {
        total.calRevenue(totalPrice);
        Sales_data trans;
        double transPrice =0;
        while(cin >> trans.isbn >> trans.unitSold >> transPrice)
        {
            trans.calRevenue(transPrice);
            if(total.isbn == trans.isbn)
            {
                total.addData(trans);
            }
            else
            {
                total.print();
                total = trans;
            }
        }
    }
    else
    {
        cerr << "No data entered!" << endl;
    }
    return 0;
}