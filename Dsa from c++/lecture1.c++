/*#include <iostream>
using namespace std;
int main (){

//int  i;
int age =39;
float PI = 3.14;
cout << sizeof (PI)<< endl;
    //cin>>i;
   /// cout << "hello"<<endl<<"world";
    cout <<sizeof(age)<<endl;
   // cout << i<< endl;
    return 0;
}*/


// boilerplate code  alway write

 //  \n=>endl; both same -commit


 //variables => container store data


 /*type of dataTyes <= primitive    space taken
 .int                     4 bytes
 .char                    1byte
 .float                    4 bytes       
 .bool                      1 byte
 .double                   8 bytes
 */
//8bit= 1byte


/*type casting => converting data one type to another 

implicit and explicit

*/

#include <iostream> 
using namespace std;
int main (){
    int price = 100.99;
    int score;
    cin>> score;
    cout << "enter the scor   "<< score<< endl;
    int newprice = (int)price;
    cout << newprice<< endl;
    return 0;

}

/* operatirs

.arithmetice +,-,*,%./ ,%
.relational  => {<,>,<=,=>,==,!=}
.logical  => && and,|| or,! not

*/

/*
Unary operators
.Increment++

.Decrement--

*/