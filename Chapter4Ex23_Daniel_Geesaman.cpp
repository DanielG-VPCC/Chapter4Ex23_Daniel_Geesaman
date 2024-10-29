/*
Title:Chapter 4 Exercise 23 - Geometry Calculator
File name:Chapter4Ex23_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:10/29/2024
Requirements:

Write a program that displays the following menu:
    
    Geometry Calculator
    1. Calculate the area of a Circle
    2. Calculate the area of a Rectangle
    3. Calculate the area of a Triangle
    4. Quit
    Enter your choice (1-4):

if the user enters 1, the program should ask for the radius of the circle then display its area.
Use the following formula:

area = PI * r2

Use 3.14159 for PI and the radius of the circle for r. 
If the user enters 2, the program should ask for the length and width of the rectangle, then display the rectangle’s area. 
Use the following formula:

area = length * width

If the user enters 3, the program should ask for the length of the triangle’s base and its height, then display its area. Use the following formula:

area = base * height * .5

if the user enters 4, the program should end.

input validation: display an error message if the user enters a number outside of the range of 1-4 when selecting an item from the menu.
Do not accept negative values for the circle's radius, the rectangle's length or width, or the triangle's base or height.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double radius;
    double area;
    double width;

    while (true)
    {
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
        cout << "What is the radius of the circle? ";
        cin >> radius;

        if (radius < 0)
        {
            cout << "calculated value must be positive." << endl;
            break;
        }

        area = pow(radius, 2) * 3.14159;
        cout << "The area of your circle is: " << area << endl << endl;
        break;
    case 2:
        double length;

        cout << "What is the width of the rectangle?";
        cin >> width;
        cout << "What is the length of the rectangle?";
        cin >> length;

        if (width < 0)
        {
            cout << "calculated value must be positive." << endl;
            break;
        }
        else if (length < 0)
        {
            cout << "calculated value must be positive." << endl;
            break;
        }

        area = width * length;
        cout << "the area of your rectangle is: " << area << endl << endl;
        break;
    case 3:
        double height;
        cout << "What is the width of the triangle's base?";
        cin >> width;
        cout << "What is the height of the triangle?";
        cin >> height;

        if (width < 0)
        {
            cout << "calculated value must be positive." << endl;
            break;
        }
        else if (height < 0)
        {
            cout << "calculated value must be positive." << endl;
            break;
        }

        area = (0.5 * width) * height;
        cout << "The area of your triangle is: " << area << endl << endl;
        break;
    case 4:
        return false;
        break;
    default:
        cout << "Please make a valid choice";
    }
    }
}


