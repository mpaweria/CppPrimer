#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
    Sales_data total;
	double totalPrice;
	if (cin >> total.bookNo >> total.unitSold >> totalPrice)
	{
		total.calRevenue(totalPrice);
		Sales_data trans;
		double transPrice;

		while (cin >> trans.bookNo >> trans.unitSold >> transPrice)
		{
			trans.calRevenue(transPrice);
			if (total.bookNo == trans.bookNo)
			{
				total.addData(trans);
			}
			else
			{
				total.print();
				total.setData(trans);
			}
		}
		total.print();

		return 0;
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1; // indicate failure
	}
}