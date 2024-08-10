// PointType Class.cpp : This file contains the code and a separate test program for the PointType class.

#include <iostream>
#include "CircleType.h"

int main()
{
    cout << "Test CircleType with integers" << endl;
    cout << "Default constructor: ";
    CircleType<int> circle1;
    cout << "   Center Point: ";
    circle1.printCenterPoint();
    cout << "   Circumference Point: ";
    circle1.printCircumPoint();
    cout << endl;


    

    cout << endl << "Test CircleType with real numbers: " << endl;

   
    return 0;
    
}
