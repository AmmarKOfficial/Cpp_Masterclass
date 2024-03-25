// class Base {
//   public:
//     int x;
//   protected:
//     int y;
//   private:
//     int z;
// };

// class PublicDerived: public Base {
//   // x is public
//   // y is protected
//   // z is not accessible from PublicDerived
// };

// class ProtectedDerived: protected Base {
//   // x is protected
//   // y is protected
//   // z is not accessible from ProtectedDerived
// };

// class PrivateDerived: private Base {
//   // x is private
//   // y is private
//   // z is not accessible from PrivateDerived
// };


// C++ program to demonstrate function overriding

// #include <iostream>
// using namespace std;

// class Base {
//   public:
//     void print() {
//         cout << "Base Function" << endl;
//     }
// };

// class Derived : public Base {
//   public:
//     void print() {
//         cout << "Derived Function" << endl;
//     }
// };

// int main() {
//     Derived derived1;
//     derived1.print();
//     return 0;
// }

// C++ program to access overridden function
// in main() using the scope resolution operator ::

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
        // // call overridden function
        // Base::print();
    }
};

int main() {
    Derived derived1, derived2;
    derived1.print();

    // access print() function of the Base class
    derived2.Base::print();

    return 0;
}