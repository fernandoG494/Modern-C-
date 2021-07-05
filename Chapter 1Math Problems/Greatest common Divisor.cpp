/*
*   Coded by Incuerdo
*   The Modern C++ Challenge: Become an expert programmer by solving real-world problems by Marius Bancilla
*   Chapter 1: Math problems
*       2.- Greatest common divisor:
*       Write a program that, given two positive integers, will calculate and print the greatest common divisor
*       of the two.    
*/

#include <stdio.h>
#include <iostream>

using namespace std;

void Euclid(int a, int b){
	if(a == 0){
		cout << b << endl;
	}else if(b == 0){
		cout << a << endl;
	}else{
		int multiplo = a/b;
		int act = a - (b * multiplo);
		Euclid(b, act);
	}
}

int main(int argc, char const *argv[])
{
    unsigned int n1, n2;
    unsigned int common;
    cout << "Number 1: "; cin >> n1;
    cout << "Number 2: "; cin >> n2;
    Euclid(n1, n2);
    return 0;
}
