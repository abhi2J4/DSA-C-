// #include <iostream>
// using namespace std;

// /// numberic inverted half pyrmid
// int main (){
//     int n;
//     cout << "enter the  number "<< endl;
//     cin >> n;
//  for(int i = 0;i<n;i++){
//     for(int j= i+1;j <= n; j++){
//         cout << j;
//     }
//     cout << endl;
//  }
// }


#include <iostream>
using namespace std;

/// numberic inverted hollow half pyrmid
int main (){
    int n;
    cout << "enter the  number "<< endl;
    cin >> n;
   for(int i = 0;i<n;i++){
    for(int j= i+1;j <= n; j++){
        if( j == i+1 || j == n || i == 0) {
 cout << j;
        }
       else {
        cout << " ";
       }
    }
    cout << endl;
 }
}