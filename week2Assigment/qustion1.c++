// #include <iostream>
// using namespace std;

// /// numberic half pyrmid
// int main (){
//     int n;
//     cout << "enter the  number "<< endl;
//     cin >> n;
//     for(int row = 0; row < n;row++){
//         for(int col = 0;col < row + 1;col++){
//             cout << col+1;
//         }
//         cout << endl;
//     }
// }


#include <iostream>
using namespace std;

/// numberic hollow half pyrmid
int main (){
    int n;
    cout << "enter the  number "<< endl;
    cin >> n;
    for(int row = 0; row < n;row++){
        for(int col = 0;col < row + 1;col++){
            if(col == 0 || col == row || row == n-1){
 cout << col+1;
            }
            else{
                cout << " ";
            }
           
        }
        cout << endl;
    }
}