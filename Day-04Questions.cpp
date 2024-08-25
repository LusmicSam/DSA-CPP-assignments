 //#include<iostream>
 //using namespace std;
//Question 1
// int main(){
//     int num1,num2;
//     cout<<"Enter first integer: "<<endl;
//     cin>>num1;
//     cout<<"Enter second integer: "<<endl;
//     cin>>num2;
//     float div=float(num1)/float(num2);
//    cout<<"Addition: "<<num1+num2<<endl;
//    cout<<"Subtraction: "<<num1-num2<<endl;
//    cout<<"Multiplication: "<<num1*num2<<endl;
//    cout<<"Division: "<<div<<endl;
//    cout<<"Modulus: "<<num1%num2;
// }

//Question 2
// #include <iostream>

// using namespace std;

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double r = 0, double i = 0) : real(r), imag(i) {}

//     Complex operator + (const Complex& other) {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     Complex operator - (const Complex& other) {
//         return Complex(real - other.real, imag - other.imag);
//     }

//     void display() const {
//         cout << real << " + " << imag << "i" << endl;
//     }

//     void input() {
//         cout << "Enter real part: ";
//         cin >> real;
//         cout << "Enter imaginary part: ";
//         cin >> imag;
//     }
// };

// int main() {
//     Complex c1, c2;

//     cout << "Enter first complex number:" << endl;
//     c1.input();
//     cout << "Enter second complex number:" << endl;
//     c2.input();

//     Complex sum = c1 + c2;
//     Complex diff = c1 - c2;

//     cout << "Complex Number 1: ";
//     c1.display();
//     cout << "Complex Number 2: ";
//     c2.display();
//     cout << "Sum: ";
//     sum.display();
//     cout << "Difference: ";
//     diff.display();

 
// }
