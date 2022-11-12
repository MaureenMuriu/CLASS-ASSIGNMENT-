/**
 * @file excercise_2.cpp
 * 
 * write a program that comptes the area and perimeter
 * of a right angled triangle given:
 * -the base as 10,
 * -height as 7 and hypotenuse as 12
 * 
 */
#include<iostream>
using namespace std;

int main(){
    float base =10;
    float height =7;
    float hypotenuse=12;

    float area = (base*height)/2;
    float parameter =base+height+hypotenuse;

    cout<<"Area: "<<area<<'\n'<<"Parameter: "<<parameter<<endl;
}