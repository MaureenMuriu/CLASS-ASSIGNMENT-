/**
 * @file excercise_3.cpp
 *write a program that computes the profit made
 for selling a motor vehicle

 the progream should allow a user to input the buying
 price and selling price and then compute and display the profit
 *
 */

#include <iostream>
using namespace std;

int main()
{
    float buying_price, selling_price, profit;
    cout << "Enter buying price: ";
    cin >> buying_price;
    cout << "Enter selling price: ";
    cin >> selling_price;

    profit = selling_price - buying_price;
    if (profit < 0)
    {
        cout << "You sold at a loss";
    }
    else
    {
        cout << "\nYour profile " << profit;
    }
    cout << endl;
    return 0;
}