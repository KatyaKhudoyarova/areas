#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a;
    double b;
    double c;

public:
    Triangle(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;

        if (a <= 0 || b <= 0 || c <= 0) {
            cout << "Error: Invalid side lengths for a triangle." << endl;
        }
        else {
            if (a == b || a == c || b == c) {
                // Calculate the height (h) of the isosceles triangle using the Pythagorean theorem
                double h = sqrt(pow(a, 2) - pow(c / 2, 2));
                if (isnan(h)) {
                    cout << "Error: Invalid side lengths for an isosceles triangle." << endl;
                }
                else {
                    double result = (c * h) / 2;
                    cout << "Area of isosceles triangle is: " << result << endl;
                }
            }
            else if (a == b && a == c && b == c) {
                double result = (pow(a, 2) * sqrt(3)) / 4;
                cout << "Area of an equilateral triangle is: " << result << endl;
            }
            else {
                double p = (a + b + c) / 2;
                double result = sqrt(p * (p - a) * (p - b) * (p - c));
                cout << "Area of a triangle is: " << result << endl;
            }
        }
    }
};


class Rectangle {
private:
    double a;
    double b;

public:
    Rectangle(double a, double b) {
        this->a = a;
        this->b = b;

        if (a <= 0 || b <= 0) {
            cout << "Error: Invalid side lengths for a rectangle." << endl;
        }
        else {
            double result = a * b;
            cout << "Area of rectangle is: " << result << endl;
        }
    }
};

class Rhombus {
private:
    double a;
    double b;

public:
    Rhombus(double a, double b) {
        this->a = a;
        this->b = b;

        if (a <= 0 || b <= 0) {
            cout << "Error: Invalid side lengths for a rhombus." << endl;
        }
        else {
            double h = sqrt(pow(a, 2) - pow(b / 2, 2));
            double result = a * h;
            cout << "Area of rhombus is: " << result << endl;
        }
    }
};

int main() {
    int input;
    double a, b, c;

    cout << "Hello, let's start finding the area of different figures!" << endl;
    cout << "Which area do you want to find?" << endl;
    cout << "If you want to find the area of a Triangle, press '1'" << endl;
    cout << "If you want to find the area of a Rectangle, press '2'" << endl;
    cout << "If you want to find the area of a Rhombus, press '3'" << endl;
    cin >> input;

    if (input == 1) {
        cout << "Enter 'a', 'b', and 'c': ";
        cin >> a >> b >> c;
        Triangle triangle(a, b, c);
    }
    else if (input == 2) {
        cout << "Enter 'a' and 'b': ";
        cin >> a >> b;
        Rectangle rectangle(a, b);
    }
    else if (input == 3) {
        cout << "Enter 'a' and 'b': ";
        cin >> a >> b;
        Rhombus rhombus(a, b);
    }
    else {
        cout << "Invalid input. Please select 1, 2, or 3." << endl;
    }

    return 0;
}

