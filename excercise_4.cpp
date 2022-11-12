/**
 * @file excercise_4.cpp
 * @author your name (you@domain.com)
 *
 * Create a simple user profile using a c++ program
 * accepts your details and displays them as output. They include
 *
 * your first name
 * your last name
 * your full name
 * your favorite meal
 * your favorite movie
 */

#include <iostream>
using namespace std;
int main()
{
    string first_name, last_name, favorite_meal, favorite_movie;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Enter your favorite meal: ";
    cin >> favorite_meal;
    cout << "Enter your favorite movie: ";
    cin >> favorite_movie;

    string full_name= first_name + last_name;
    
    cout << "\nFirst Name:" << first_name<<'\n'
    <<"Last Name: "<<last_name<<'\n'<<"Favorite meal: "<<favorite_meal<<'\n'
    <<"Favorite movie: "<<favorite_movie<<'\n';
    cout << endl;
    return 0;
}
