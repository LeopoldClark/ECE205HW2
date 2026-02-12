#include <iostream> //includes input output stream library
#include <cmath> //includes cmath library

using namespace std; //uses namespace std

int main(){ //initiates main function

    for(int i = 0; i < 4; i++){ //for loop beginning at 0 and iterating 4 times for the 4 chosen
        
        srand(time(0) + i); //chooses random seed based on time ensuring no repeating results and the 
        //i is added to ensure a different number otherwise the same number would be output each iteration
        int number; //assigns number variable to store the value
        number = rand() % 25 + 1; //value randomly chosen between 1 and 25 with the random function
        
        cout << "finalist " << number << " is a winner" << endl; //output statement
    }

    return 0;
}