
#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
private:
    double radius;
    static constexpr double PI = 3.14159;

public:
    // Default constructor
    Circle()
    {
        radius = 0.0;
    }

    // Constructor that accepts a radius
    Circle(double r)
    {
        radius = r;
    }

    // Mutator function
    void setRadius(double r)
    {
        radius = r;
    }

    // Accessor function
    double getRadius() const
    {
        return radius;
    }

    // Calculate area
    double getArea() const
    {
        return PI * radius * radius;
    }

    // Calculate diameter
    double getDiameter() const
    {
        return radius * 2;
    }

    // Calculate circumference
    double getCircumference() const
    {
        return 2 * PI * radius;
    }
};

int main()
{
    double radius1;
    double radius2;
    double radius3;

    // Ask the user for three radii
    cout << "Enter the first radius: ";
    cin >> radius1;

    cout << "Enter the second radius: ";
    cin >> radius2;

    cout << "Enter the third radius: ";
    cin >> radius3;

    // Create an array of three Circle objects
    Circle circles[3] = {
        Circle(radius1),
        Circle(radius2),
        Circle(radius3)
    };

    cout << fixed << setprecision(2);

    // Display the results for each circle
    for (int i = 0; i < 3; i++)
    {
        cout << "\nCircle " << i + 1 << endl;
        cout << "Radius: " << circles[i].getRadius() << endl;
        cout << "Area: " << circles[i].getArea() << endl;
        cout << "Diameter: " << circles[i].getDiameter() << endl;
        cout << "Circumference: "
             << circles[i].getCircumference() << endl;
    }

    return 0;
}
