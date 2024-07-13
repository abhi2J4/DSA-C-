#include <iostream>
using namespace std;

class Animal{
// state or properties
private:
 int weight;
public:
 int age ;

 string name;
 string type;




// default constructor
Animal(){
    this->weight = 0;
    this->age = 0;
    this->type ="";
       cout <<"construcer call"<< endl;
}

// Parametrised  constructor
Animal(int age){
    this->age=age;
    cout << "Parametrised Constructor called "<< endl;
};


// copy constructor
 Animal( Animal & obj){
    this->age = obj.age;
     this->weight = obj.weight;
     this->type=obj.type;
     cout <<"I am inside copy constructor"<< endl;
 };

 //behaviour
void eat(){
cout<< "eating by him"<<endl;
}
void sleep (){
cout << "sleeping love him"<<endl;
}
int getWeight(){
    return weight;
}
void setWeight(int w) {
weight = w;
};

};
int main(){
  // object create 

  // static
//   Animal shaid;
//   shaid.name="lion";
//   shaid.age=23;
//   cout << "age of shaid is:"<<shaid.age<<endl;
//    cout << "age of shaid is:"<<shaid.name<<endl;
//    shaid.eat();


//    // to private number acess 
//    shaid.setWeight(101);
//    cout <<"weight"<<shaid.getWeight()<<endl;

   // Dynamic Memory
// Animal* shaid= new Animal;


// (*shaid).age=13;
// (*shaid).type="billi";


//alernate  dynamic

//    shaid->age = 13;
//     shaid->type = "billi";
//        cout << "age of shaid is: " << shaid->age << endl;
//     cout << "type of shaid is: " << shaid->type << endl;

//     shaid->eat();
//     shaid->sleep();
Animal a(10);
Animal* b = new Animal(1000); 

//object copy
Animal c = a;
Animal animal(c);

    return 0;
}