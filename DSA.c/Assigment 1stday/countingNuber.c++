#include <iostream>
using namespace std ;

    void ReverseCounting (int N){
        for (int i=N;i>0;i--){
            cout << i<<" ";
        }
    }
    int main(){
        int N;
        cin >>N;
       ReverseCounting(N);
    }
