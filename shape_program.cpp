#include <iostream>
using namespace std;

class Shape {
public:
virtual void draw() {
cout << "Drawing a shape." << endl;
}
};
class Circle : public Shape {
public:
void draw() {
cout << "Drawing a circle." << endl;
}
};
class Rectangle : public Shape {
public:
void draw() {
cout << "Drawing a rectangle." << endl;
} };

int main() {
Shape* shapePtr;
Shape s2;
shapePtr = &s2;
shapePtr->draw();
Circle circle;
Rectangle rectangle;
shapePtr = &circle;
shapePtr->draw();
shapePtr = &rectangle;
shapePtr->draw();


// 
Shape s1;
s1.draw();
Circle c1;
c1.draw();
Rectangle r1;
r1.draw();
//
return 0;
}