// CPP program to demonstrate Public Access Modifier

#include <iostream>
using namespace std;

// class definition
class Circle
{
  public:
    double radius;        // class member
    double compute_area() // class definition
    {
      return 3.14 * radius * radius;
    }
};

// call main function 
int main() 
{
  Circle obj;  // create class object

  // Accessing public datamember outside the class
  cout << "Enter radius of circle, r = " ;
  cin >> obj.radius;
  cout << "Radius of circle = " << obj.radius << endl;
  cout << "Area of circle = " << obj.compute_area() << endl;
}

/*
* Note: if data members are not declared "public" explicitely, they are private
* members of class. 
* Private data members of class are not allowed to access outside the class
*/