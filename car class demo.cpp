#include <iostream>
#include <string>
using namespace std;


class Car {
    public :
    string brand;
    string model;
    int mileage;
    float price;
    Car(string b, string m, int mil, float p) : brand(b), model(m), mileage(mil), price(p) {}
    void display(){
       cout << "Car details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;


    }
 void drive(int distance){
    cout << "Driving " << distance << endl;
    mileage += distance ;
    cout << "Updated mileage: " << mileage << endl; 
 }
};
 
 
 int main() {
    Car car1("Toyota", "Corolla", 5000, 20000);
    car1.display();
    car1.drive(150);
    car1.drive(300);
   
   
    return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 