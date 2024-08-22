#include <iostream>
using namespace std;


bool checkVailded(int a,int b,int c){
    if(a+b<=c||a+c<=b|| b+c<=a) 
    return false;
    else
    return true;
}
    
    int main ()
    {
        
        int a=3,b=8,c=9;
        if(checkVailded(a,b,c))
        cout << "vailed";
        else
        cout << "Invaild";
        
    }
