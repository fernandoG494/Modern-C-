/*
*   Coded by Incuerdo
*   The Modern C++ Challenge: Become an expert programmer by solving real-world problems by Marius Bancilla
*   Chapter 1: Math problems
*       3.- Least common multiple:
*       Write a program that will, given two or more positive integers, calculate and print the least common
*       multiple of them all.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

void EuclidMCD(int numbers[]){
	cout << sizeof(numbers)/sizeof(numbers[0]) << endl;
}

int main(int argc, char const *argv[])
{
	unsigned int n;
	cout << "N: "; cin >> n;
	if (n <= 0){
		cout << "N is not valid, should be positive > 0...\nExit program..."<< endl;
		return 0;
	}
	else{
		int numbers[n];
		for(int i = 0; i < n; i++){
			cout << "Number[" << i << "]: ";
			cin >> numbers[i];
			cout << "";
		}
		EuclidMCD(numbers);
		return 0;
	}
}
