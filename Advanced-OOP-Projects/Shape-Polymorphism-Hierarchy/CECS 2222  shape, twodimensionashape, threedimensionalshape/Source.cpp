#include <iostream>

#include "Rectangle.h"
#include "Circle.h"
#include "RectangularCone.h"
#include "RectangularCylinder.h"
#include "Sphere.h"
#include "Square.h"
using namespace::std;

int main() {
	Rectangle shape;
	cin >> shape;
	cout << shape;
	Circle shape1;
	cin >> shape1;
	cout << shape1;
	RectangularCylinder shape2;
	cin >> shape2;
	cout << shape2;
	RectangularCone shape3;
	cin >> shape3;
	cout << shape3;
	Square shape4;
	cin >> shape4;
	cout << shape4;
	Sphere shape5;
	cin >> shape5;
	cout << shape5;
	return 0;
}
/*Enter the Rectangle's Color: Blue
Enter the Rectangle's Length: 2
Enter the Rectangle's Height: 1
2D Shape's Name: Rectangle
2D Shape's Color: Blue
2D Shape's Length: 2
2D Shape's Height: 1
2D Shape's Area: 2
2D Shape's Perimeter: 6
2D Shape's Area Formula: A = 2 x 1
2D Shape's Perimeter Formula: P = (2 x 2) + (2 x 1)
Enter the Circle's Color: Red
Enter the Circle's Radius: 2
Enter the Circle's Center H: 0
Enter the 2D Circle's Center K: 0

2D Shape's Name: Circle
2D Shape's Color: Red
2D Shape's Radius: 2
2D Shape's Center H: 0
2D Shape's Center K: 0
2D Shape's Area: 12.5664
2D Shape's Diameter: 4
2D Shape's Circumference: 12.5664
The Circle's equation with the obtained center and radius is:
( x - 0 )^2 + ( y - 0 )^2 = 2^2


Enter the Rectangular Cylinder's Color: Red
Enter the Rectangular Cylinder's Height: 2
Enter the Rectangular Cylinder's Radius: 2
3D Shape's Name: Rectangular Cone
3D Shape's Color: Red
3D Shape's Height: 2
3D Shape's Radius: 2
3D Shape's Area: 25.1327
3D Shape's Volume: 25.1327
3D Shape's Area Formula: A = 2 x Pi x 2 x 2
3D Shape's Volume Formula: 25.1327
V = Pi x 2^2 x 2
Enter the Rectangular Cone's Color: Purple
Enter the Rectangular Cone's Height: 2
Enter the Rectangular Cone's Radius: 2
3D Shape's Name: Rectangular Cone
3D Shape's Color: Purple
3D Shape's Height: 2
3D Shape's Radius: 2
3D Shape's Area: 17.7715
3D Shape's Volume: 8.37757
3D Shape's Area Formula: A = Pi x 2 x sqrt(2^2 + 2^2)
3D Shape's Volume Formula: 8.37757
V = Pi x 2^2 x 2 / 3
Enter the Square's Color: 4
Enter the Square's Side: 4
2D Shape's Name: Square
2D Shape's Color: 4
2D Shape's Side: 4
2D Shape's Area: 16
2D Shape's Perimeter: 16
2D Shape's Area Formula: A = 4 x 4
2D Shape's Perimeter Formula: P = 4 x 4
Enter the sphere's Color: Pink
Enter the sphere's Radius: 2
3D Shape's Name: Sphere
3D Shape's Color: Pink
3D Shape's Radius: 2
3D Shape's Area: 50.2654
3D Shape's Volume: 33.5103
3D Shape's Area Formula: A = 4pi x 2^2
3D Shape's Volume Formula: 33.5103
V = 4pi x 2^3 / 3
 This is destructor
Geometric Figure Name:Sphere
Color:Pink
Press any key to continue . . .*/