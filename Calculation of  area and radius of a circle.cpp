// Calculation of  area and radius of a circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    //declaring variables
    double Area, diameter, radius;
    double pi = 3.14;

    //prompt the user to enter the diameter of a circle
    cout << "enter the diameter of a circle" << endl;
    cin >> diameter;


    radius = (diameter / 2);
    Area = pi * radius * radius;



    cout << "The area of a circle with a diameter of " << diameter << " is equal to " << Area;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
