// #include<iostream>
// using namespace std;

// bool find(int arr[],int size,int key){
// for (int i=0;i<size;i++){
//         if (arr[i]==key)
//        return true;
// }
// return false;
// }
// int main (){
//     int arr [5]={1,2,3,4,5};
//     int size=5;
//     int key;
//     cin>>key;
//  if(find(arr,size,key)){
//         cout << "find key value"<< endl;
//     }
//     else{
//         cout << "not found"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr []={1,1,1,1,1,0,0,0,0,0};
//     int size = 10;
    
//     int numzero = 0;
//     int numOne = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
// numzero++;

//         }
       
//         if(arr[i]==1){
// numOne++;
//         }
//     }
//     cout << "numzero count"<<numzero<< endl;
//     cout << "numzero count"<<numzero<< endl;
// }

//  #include <iostream>
//  #include <limits.h>
// using namespace std;
// int main(){
//     int arr []={1,2,3,4,5,6,7,8,9};
//     int size= 9;

//     int maxi = INT_MIN;
//     for(int i=0;i<size;i++){
//   if (arr[i] >maxi){
// maxi =arr[i];
//   }
//     }
//     cout << maxi<< endl;
// }


// vector dynamic array
// #include<iostream>
// #include<vector>
// using namespace std;
//  int main (){



//   vector<int>arr;
//   // int ans = (sizeof(arr)/sizeof(int));
//   // cout << ans << endl;
  
//   // cout << arr.size()<< endl;
//   // cout << arr.capacity()<< endl;
  
//   arr.push_back(0);
//   arr.push_back(3);
//   arr.push_back(6);
//   for (int i=0;i<arr.size();i++){
//     cout<<" " << arr[i];
//   }
// cout << endl;

// arr.pop_back();

//   for (int i=0;i<arr.size();i++){
//     cout<< " " << arr[i];
//   }
// cout << endl;
// int n;
// cout << "input data"<< endl;
// cin>>n;
// vector<int>brr(n,-101);
// cout << "size of brr is:"<< brr.size()<< endl;

// cout <<"capicity of brr is"<< brr.capacity()<< endl;
//  for (int i=0;i<brr.size();i++){
//     cout<< " " << brr[i];
//   }


//   vector<int>cinn{1,2,3,4,5,6};
//   cout << "size of brr is:"<<cinn.size()<< endl;

// cout <<"capicity of brr is"<<cinn.capacity()<< endl;
//  for (int i=0;i<cinn.size();i++){
//     cout<< " " << cinn[i];
//   }

//  }



#include <iostream>
using namespace std;
void clearBitRange(int n ,int i,int j){
  int a=(-1<<(i+1));
  int b=(1<<j)-1;
  int mask=a|b;
  n=n&mask;
  cout<< "after clearing in range:"<< n<<  endl;
}
int main (){

clearBitRange(15,2,0);


  return 0;
}