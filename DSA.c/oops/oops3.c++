#include <iostream>
using namespace std;

class fruit{
public:
 string name ;

};
class mango:public fruit{
    public:
 int weight;
};
class Alphanso:public fruit{
    public:

 int sugarlevel;
};

int main (){
   Alphansom a;
   cout << a.name << " "<<a.sugarlevel << endl;

    return 0;
}