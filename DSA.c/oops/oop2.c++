// #include <iostream>
// using namespace std;

// class Animal{
 


// public:
//  int age ;
//   int weight;
// void eat(){
//     cout << "eating" << endl;

// }
// };
// class Dog:public Animal{
    
// };

// int main (){
//     Dog d1;
//     d1.eat();

//     return 0;
// }



/// mode of inheritance
#include <iostream>
using namespace std;

class Animal{


public:
 int age ;


};
class Dog:public Animal{
    public:
    void print(){
        cout << this->age;
    }
};

int main (){
    Dog d1;
    d1.print();

    return 0;
}