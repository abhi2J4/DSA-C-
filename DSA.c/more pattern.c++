#include <iostream>
using namespace std;


// void printName(){
//     int n;
//     cout <<"Enter the value of n"<<endl;
//     cin>> n;
//     for (int i=0;i<n;i++){
//         cout << "abhi"<< endl;
//     }
// }

// int add(int a,int b){
//     int result= a+b;
//     return result;
// }




int findMax( int num1,int num2,int num3){
    if (num1>num2&&num1>3){
        return num1;
    }
    else if (num2 > num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main()
{


int a,b,c;
cin>>a>>b>>c;

int maximumNumber = findMax(a,b,c);
cout << maximumNumber <<endl;





// int a =5;
// cout <<"enter the valie of a" << endl;
// cin >>a;

// int b;
// cout <<"enter the value of b"<< endl;
// cin>>b;
// int sum =add(a,b);

// cout <<"addition result is:"<<sum<<endl;




// function call
// printName();
// int a =5;
// cout <<"address of  a list"<<&a << endl;

// memory me address per kaha hai


    // // vairable scoping

    // // decelaration
    // int a;
    // // initialisation
    // int b = 5;
    // // updation
    // b = 10;
    // if (true)
    // {
    //     int b = 15;
    //     cout <<b<< endl;
    // }
    // cout << b << endl;

    // int a = 12;
    // a = a<<1;
    // cout << a <<endl;

    // bool a = false;
    // bool b = true;
    // cout<<(2&3)<< endl;

    // bool a=true;
    // bool b =true;
    // cout<< (~a);
    // int n;
    // cin >> n;

    // //full praymid
    //  for (int row = 0; row<n; row = row + 1) {
    //         // space
    //         for (int col = 0; col < n - row - 1; col = col + 1) {
    //             cout << " ";
    //         }
    //         // stars
    //         for (int col = 0; col < row + 1; col = col + 1) {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // //inverted pryamid
    //     for (int row = 0;row<n;row=row+1){
    //         //spaces
    //         for(int col=0;col<row;col=col+1){
    //             cout<<" ";
    //         }
    //         //stars
    //         for(int col=0;col<n-row;col=col+1){
    //             cout <<"* ";
    //         }
    //         cout << endl;
    //     }

    // hollow diomond

    // square

    //   for (int row=0;row<n;row=row+1){
    //     for (int col=0;col<n;col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //   }

    // hollw square

    // for(int row = 0;row<n;row=row +1){
    //     cout << "* ";
    // }

    // numeric full pyramid //
    //    for (int row =0;row<n;row =row +1){
    //     //row+1 element print karne wala hai
    //     int start = row+1;
    //     for(int col=0;col<row+1;col=col+1){
    //         cout << start <<" ";
    //         start = start +1;

    //     }
    //     cout << endl;
    //    }

    // numeric full pyramid //
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // spaces
    //     for (int col = 0; col < n - __GCC_IEC_559 + 1; col = col + 1)
    //     {
    //         cout << " ";
    //     }
    //     // numbers
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << row + col + 1;
    //     }
    //     // reverse counting
    //     int start = 2 * row;
    //     for (int col = 0; col < row; col = col + 1)
    //     {
    //         cout << start;
    //         start = start - 1;
    //     }
    //     cout << endl;
    // }
}
