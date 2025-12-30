#include<iostream>
using namespace std;
int main()
{
    double numerator, denomenator, result;
    std::cout << "Enter numerator :";
    std::cin >> numerator;
    std::cout << "Enter denomenator :";
    std::cin>> denomenator;
    try
    {
        if(denomenator == 0)
        {
            //Throw an exception if denomenator is zero
            throw "Divison by zero error ";
        }
    result = numerator/denomenator;
    std::cout << numerator << "/" << denomenator << "= \n"<< result << "\nendl";
    }
    catch(const char * errorMessage)
    {
        // catch the throw exception
        std::cout << "Error :" << errorMessage << "endl";
    }
    return 0;
}

#include<iostream>
using namespace std;
template < typename T>
void display_value (T value)
{
    cout << "The value is : " << value << endl;
}
int main()
{
    int int_value = 10;
    float float_value = 15.5;
// calling template function with in
    display_value(int_value);
// calling template function with float 
    display_value(float_value);
return 0;
}


#include<iostream>
using namespace std;
template <typename T>
T add (T a, T b)
{
    return a+b;
}
int main ()
{
    cout << add (5,3) << endl; // Adds integration : 8
    cout << add (5.5,3.2) << endl; // Adds doubles : 8.7
    return 0;
}

#include<iostream>
using namespace std;
class Dog 
{
    public :
    // function defined inside the class
    void bark()
    {
        std::cout << "Woof !";
    }
};
int main()
{
    Dog myDog;
    myDog.bark(); // call the function using the object.
    return 0 ;
}

#include<iostream>
using namespace std;
void show(int a)
{
    cout << "Integer :" << a << endl;
}
void show(double a)
{
    cout<< "Double :" << a << endl;
}
int main()
{
    show(10);
    show(10.5);
    return 0;
}

#include<iostream>
using namespace std;
class Add
{
    public:
    int a;
    Add(intx) 
    {
        a = x;
    }
    Add operator + (Add obj)
    {
        return Add(a+ obj.a);
    }
};
int main()
{
    Add obj1(10);
    Add obj2(20);
    Add obj3 = obj1 + obj2;
    cout << "Value of onj3.a :" << obj3.a << endl;
    return 0;
}

#include<iostream> 
using namespace std; 

class Add { 
public: 
    int a; 

    // Corrected constructor: removed semicolon after 'a = x'
    Add(int x) { 
        a = x; 
    } 

    // Overloading the '+' operator
    Add operator + (Add obj) { 
        return Add(a + obj.a); 
    } 
}; 

int main() {
    // Create Add objects
    Add obj1(10);
    Add obj2(20);

    // Use the overloaded '+' operator
    Add obj3 = obj1 + obj2; // This calls obj1.operator+(obj2)

    // Print the result
    cout << "Value of obj3.a: " << obj3.a << endl; 

    return 0;
}

#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout << "Display of Base class " << endl;
    }
};
class Derived : public Base 
{
    public:
    void display()override
    {
        cout << "Display of Derived class " << endl;
    }
};
int main()
{
    Base*ptr;
    Base b;
    ptr = & b;
    ptr-> display();
    Derived d;
    ptr = & d;
    ptr -> display();
    return 0;
}

#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout << "This is a vehicle " << endl;
    }
};
class four_wheeler : public vehicle
{
    public:
    four_wheeler ()
    {
        cout << "four wheeler vehicle "<< endl;
    }
};
class Car : public four_wheeler
{
    public:
      Car()
    {
        cout << "This four wheeler vehicle is a car ";
    }
};
int main() 
{
    // Greating  object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
}

#include<iostream>
using namespace std;
class Land vehicle
{
    public:
    Land vehicle()
    {
        cout << "This is a Land vehicle"<< endl;
    }
};
class water vehicle
{
    public:
    water vehicle()
    {
        cout << "This is a water vehicle"<<endl;
    }
};
// sub class derived from two base classes
class Amphibious vehicle: public water vehicle, public Land vehicle
{
    public:
    Amphibious vehicle()
    {
        cout<< "This is a Amphibious vehicle "<<endl;
    }
};
int main()
{
    //creating object of subm Class will
    //invoke the constructor od base classes
    Amphibious vehicle obj;
    return 0;
}
