A constructor in C++ is a special member function of a class. It is automatically called when an object of the class is created. The main purpose of a constructor is to initialize objects.

Key Features of Constructors:

1.Same Name as the Class:
A constructor must have the same name as the class it belongs to.

2.No Return Type:
Constructors do not have a return type, not even void.

3.Automatic Invocation:
It is called automatically when an object is instantiated. You don't need to explicitly invoke it.

4.Defined in the Public Section:
Typically, constructors are declared in the public section of the class to make objects accessible.

  Normal Constructor

class MyClass {
public:
    MyClass() {  // Default constructor
        std::cout << "Default Constructor Called!" << std::endl;
    }
};

int main() {
    MyClass obj; // Default constructor is automatically called
    return 0;
}

 Parametrized Const.

class MyClass {
public:
    int a;
    MyClass(int x) {  // Parameterized constructor
        a = x;
        std::cout << "Parameterized Constructor Called! Value: " << a << std::endl;
    }
};

int main() {
    MyClass obj(10); // Constructor with an argument
    return 0;
}

Copy Constructor

class MyClass {
public:
    int a;
    MyClass(int x) : a(x) {} // Parameterized constructor
    MyClass(const MyClass &obj) { // Copy constructor
        a = obj.a;
        std::cout << "Copy Constructor Called! Value: " << a << std::endl;
    }
};

int main() {
    MyClass obj1(20);  // Parameterized constructor
    MyClass obj2 = obj1; // Copy constructor is called
    return 0;
}

