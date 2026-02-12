#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int height, weight, age;
float hat, jacket, waist, jacketScalar, waistScalar;

int main(){

    cout << "Enter height in inches: "; //request user to input a height
    cin >> height; //assign user input to height variable
    cout << "Enter weight in pounds: "; //request uset to input a weight
    cin >> weight; //assign user input to weight variable
    cout << "Enter age in years: "; //request user to input an age
    cin >> age; //assign user input to age variable

    hat = 2.9 * (weight / height); //calculate hat size

    if (age > 30){
        jacketScalar = (age - 30) / 10;
        jacket = (height * weight / 288) + (0.125 * jacketScalar); //calculate jacket size when age is over 30
    }else{
        jacketScalar = 0;
        jacket = (height * weight / 288); //calculate jacket size when age is 30 or below
    }

    if (age > 28){
        waistScalar = (age - 28) / 2; //calculate waist size scalar when age is over 28
        waist = (weight / 5.7) + ((1/10) * waistScalar); //calculate waist size when age is over 28
    }else{
        waistScalar = 0;
        waist = (weight / 5.7); //calculate waist size when age is 28 or below
    }

    cout << setprecision(2) << fixed;

    cout << "\nYour hat size is: " << hat << endl; //output hat size
    cout << "Your jacket size is: " << jacket << endl; //output jacket size
    cout << "Your waist size is: " << waist << endl; //output waist size

    return 0;
}