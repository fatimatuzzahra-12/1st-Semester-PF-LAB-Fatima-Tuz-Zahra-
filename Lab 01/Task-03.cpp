/*
Lab: 01
Name: Fatima tuz zahra
Roll No: 2026-SE-04
Date: 20-11-2026
Purpose: Bug Hunt
*/

#include <iostream>
using namespace std; // BUG 1: missing ; after std

int main()
{
    cout << "Welcome to the lab!" << endl; // BUG 2: missing ;
    cout << "Today we learn \"C++\"." << endl; // BUG 3: Cout changed to cout
    cout << "Files are in C:\\Lab01" << endl; // BUG 4: backslash fixed
    cout << "Bye!" << endl; // BUG 5: quotation mark fixed
    return 0;
}

