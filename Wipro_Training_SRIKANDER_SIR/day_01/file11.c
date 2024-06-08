// Area of circle and rectangle

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a circle given its radius

float area(float radius) {
    const float pi = 3.14;
    return pi * pow(radius, 2);
}

// Function to calculate the area of a rectangle given its length and breadth

int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int r = 0;
    cout << "Enter the radius: ";
    cin >> r;
    float area_circle = area(r);

    int l = 0;
    int b = 0;
    cout << "Enter the length and breadth of rectangle: ";
    cin >> l >> b;
    int area_rect = area(l, b);

    printf("Area of circle with radius %d = %f\n", r, area_circle);
    printf("Area of rectangle with length %d and breadth %d = %d\n", l, b, area_rect);

    return 0;
}
