/*-------------------------------------------------3.1---------------------------------------

Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.   */

//  1.4.1
// #include <iostream>
// using std::cout;
// using std::endl;
// int main()
// {
//     int sum = 0, val = 1;
//     // keep executing the while as long as val is less than or equal to 10
//     while (val <= 10) {
//     sum += val; // assigns sum + val to sum
//     ++val; // add 1 to val
//     }
//     cout << "Sum of 1 to 10 inclusive is "
//     << sum << endl;
//     return 0;
// }

//  2.6.2
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
    string isbn;
    unsigned unitSold=0;
    double price=0.0;
    double revenue=0.0; 
};
int main()
{
    int count=1;
    double totalRevenue;
    Sales_data item1, item2;
    cout << "Enter the details of the books:"<<endl;
    cin >> item1.isbn >> item1.unitSold >> item1.price;
    cin >> item2.isbn >> item2.unitSold >> item2.price;
    item1.revenue = item1.unitSold * item1.price;
    item2.revenue = item2.unitSold * item2.price;
    if(item1.isbn == item2.isbn)
    {
        totalRevenue = item1.revenue + item2.revenue;
        count = item1.unitSold + item2.unitSold;
        cout << item1.isbn << " " << count << " " << totalRevenue << endl;

        if(count!=0)
        {
            cout << "Average price of the book " << totalRevenue/count;
        }
        else 
        {
            cout << "No Sales.";
        }
        return 0;
    }
    else 
    {
        cerr << "Data must refer to same ISBN. ";
        return -1;
    }
}