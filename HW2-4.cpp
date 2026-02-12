#include <iostream>
#include <cmath>

using namespace std;

int main(){

    for(int i = 0; i < 4; i++){
        
        srand(time(0) + i);
        int number;
        number = rand() % 25 + 1;
        
        cout << "finalist " << number << " is a winner" << endl;
    }

    return 0;
}