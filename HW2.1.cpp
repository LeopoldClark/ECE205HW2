#include <iostream>
#include <cmath>

using namespace std;

float gravCon = 6.673e-8f, mass1, mass2, dist, gravForce; //defines variables

int main(){

    while(1){
    cout << "Enter mass 1 in kg: "; //requests user to input mass 1
    cin >> mass1; //sets mass1 to user input
    mass1 = mass1 * 1000; //converst mass1 into grams
    cout << "Enter mass 2 in kg: "; //requests user to input mass 2
    cin >> mass2; //sets mass2 to user input
    mass2 = mass2 * 1000; //converts mass2 into grams
    cout << "Enter distance in kilometers: "; //requests user to input distance
    cin >> dist; //sets dist to user input
    dist = dist * 100000; //converts dist into centimeters

    gravForce = (gravCon * mass1 * mass2) / pow(dist, 2); //calculates gravitational force

    cout << "The gravitational force between the two masses is: " << gravForce << " dynes." << endl; //outputs gravitational force
    }
    
    return 0;
}