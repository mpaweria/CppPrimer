#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
    string bookNo;
    unsigned unitSold = 0;
    double revenue = 0.0;

    void print();
    void calRevenue(double price);
    double avgPrice();
    void setData(Sales_data data);
    void addData(Sales_data data);
    string isbn() {return bookNo; }
    Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data &newBook)
{
    unitSold += newBook.unitSold;
    revenue += newBook.revenue;
    return *this;
}

void Sales_data::setData(Sales_data data)
{
    bookNo = data.bookNo;
    unitSold = data.unitSold;
    revenue = data.revenue;
}
void Sales_data::addData(Sales_data data)
{
    if(bookNo!=data.bookNo)
        return;
    else
    {
        unitSold += data.unitSold;
        revenue += data.revenue;
    }
}
void Sales_data::print()
{
    cout << bookNo << " " << unitSold << " " << revenue << endl;
    double averageprice = avgPrice();
    if(averageprice!=0)
    {
        cout << "Average price of book: " << averageprice << endl;
    }
    else
    {
        cout << "No book sold!" << endl;    
    }
}
void Sales_data::calRevenue(double price)
{
    revenue = unitSold * price;
}
double Sales_data::avgPrice()
{
    if(unitSold!=0)
    {
        return revenue/unitSold;
    }
    else
    {
        return 0.0;
    }
}
#endif 