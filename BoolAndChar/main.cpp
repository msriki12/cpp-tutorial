#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

// char letter = 'd'; // Common chars can be declared with simple quotes
string letter = "dada"; // Arrays of chars have to be declared between double quotes if using char* (Better use C++ std:string type)

bool var = false;

int main(){
    cout << letter << "\n\n" << endl;
    cout << var << "\n\n" << endl;
    system("PAUSE");
    return 0;
}