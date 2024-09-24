// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string b, string m, string e, int seats)
        : brandName(b), model(m), engine(e), numberOfSeats(seats) {}

    void displayInfo() const {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", "V6", 5);

    myCar.displayInfo();

    return 0;
}

#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
   
    Rectangle(double l, double w) : length(l), width(w) {}

    Rectangle(const Rectangle& rect) : length(rect.length), width(rect.width) {
        cout << "Copy constructor called!" << endl;
    }

    double area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect1(10.0, 5.0);

    Rectangle rect2 = rect1;

    cout << "Area of rect2: " << rect2.area() << endl;

    return 0;
}

