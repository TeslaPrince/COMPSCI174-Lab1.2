//Jenna Lambert
//2-13-19
//Fence Calculator
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int GALLONS = 340;
	float height, length, surfaceArea, gallons;
	cout << setprecision(2) << fixed;
	cout << "How high is the fence?";
	cin >> height;
	cout << "How long is the fence?";
	cin >> length;
	surfaceArea = height * length * 2;
	gallons = surfaceArea / GALLONS;
	cout << "A wooden fence that is "<< height << " feet hight and " << length << " feet long needs " << gallons << " gallons of paint.";
}