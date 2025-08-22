#include<iostream>
using namespace std;
int main (){
    int a = 5;
    int* p = &a;
    cout << "p"<< p<< endl;
    cout << "p"<< &a<< endl;
    cout << "p"<< *p<< endl;
    cout << "p"<< *p*2<< endl;
    cout << "p"<< (*p)++<< endl;
    cout << "p"<< ++(*p)<< endl;
    cout << "p"<< ++(*p)<< endl;
   
}