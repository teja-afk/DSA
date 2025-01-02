#include <iostream>
using namespace std;
// Runtime Polymorphism / Dynamic
// Function Overriding

class Shape // final keyword Prevents Class Inheritance
{
public:
    virtual void draw() // final keyword prevents virtual function ovveriding
    {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw(); // draw is polymorphic
}

int main()
{
    // Circle c;
    // // c.draw();
    // Rectangle r;
    // ShapeDrawing(&c); // Early Binding Compile Time
    // ShapeDrawing(&r);

    // Triangle *t = new Triangle();
    // Rectangle *r = new Rectangle();
    // ShapeDrawing(t);
    // ShapeDrawing(r);

    // w/o virtual keyword
    Shape *s = new Shape(); // left me jo likha hai, jiske obj mei actual obj store uska method call hoga
    s->draw();  

    // UPCASTING
    Shape *s3 = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c->draw();

    // DOWNCASTING
    Shape *s2 = new Shape(); // Actual obj ka method call hoga
    Circle *c2 = (Circle *)s2;
    c2->draw();

    return 0;
}