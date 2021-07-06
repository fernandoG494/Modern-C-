/*
*   Coded by Incuerdo
*   The Modern C++ Challenge: Become an expert programmer by solving real-world problems by Marius Bancilla
*   Chapter 1: Math problems
*       1.- Sum of naturals divisible by 3 and 5:
*       Write a program that calculates and prints the sum of all the naturals numbers divisible by either 3 ir 5,
*       up to given limit entered by the user.    
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers;
    long acum = 0;
    cout << "Limit number: ";
    cin >> numbers;
    //cout << numbers << endl;
    for(int i = 0; i < numbers; i++){
        if((i % 3 == 0 || i % 5 == 0) && i != 0){
            //cout << i << endl;
            acum += i;
        }
    }
    cout << "Sum: " << acum << endl;
    return 0;
}
