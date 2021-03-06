#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;

class Sales_data
{
    // friend so that they can access its private members
    friend istream &read(istream &in, Sales_data &item);
    friend Sales_data add(Sales_data &book1, Sales_data &book2);
    friend ostream &display(ostream &out, Sales_data  &item);

    public:
    // constructors
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p): bookNo(s), unitSold(n), revenue(p*n) { }
    Sales_data(istream &is) { read(is, *this);}

    // methods
    void print();
    void calRevenue(double price);
    double avgPrice();
    void setData(Sales_data data);
    void addData(Sales_data data);
    string isbn() {return bookNo; }
    Sales_data& combine(const Sales_data&);
    string getBookNo() { return bookNo;}
    unsigned getUnitSold() { return unitSold;}
    double getRevenue() { return revenue;}
    void setBookNo(string newBookNo) { bookNo = newBookNo;}
    void setUnitSold(unsigned newUnit) { unitSold = newUnit;}


    private:
    // members
    string bookNo;
    unsigned unitSold = 0;
    double revenue = 0.0;
};

// member functions
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


// non-member funtions
istream &read(istream &in, Sales_data &item)
{
    double price;
    in >> item.bookNo >> item.unitSold >> price;
    item.revenue = price * item.unitSold;
    return in;
}

Sales_data add(Sales_data &book1, Sales_data &book2)
{
    Sales_data sum = book1;
    sum.combine(book2);
    return sum;
}

ostream &display(ostream &out, Sales_data  &item)
{
    out << item.isbn() << " " << item.unitSold << " " << item.revenue;
    return out;
}
 
// Constructor outside class for question 7.11
// Sales_data::Sales_data(istream &is)
// {
//     read(is, *this);
// }

#endif 

// isbn 0-201-78345-X 3 20.00