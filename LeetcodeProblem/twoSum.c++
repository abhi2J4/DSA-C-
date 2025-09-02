
// // brute force
// #include<iostream>
// #include <vector>
// using namespace std;

// bool twoSum (vector<int> &arr,int target){
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j< n; j++){
//             if(arr[i]+arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main (){
//     vector<int> arr ={0,-1,2,-3,1};
//     int target = -2;
//     if(twoSum(arr,target))
//     cout << "true";
//     else{
//         cout << "false";
//         return 0;
//     }
// }      // time complexity = O(n*n)
       // space complexity =O(1);


//   ****Two sum ****
     
// brute force
#include<iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int> &arr,int target){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j< n; j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {};
}
int main (){
    vector<int> arr ={0,-1,2,-3,1};
    int target = -2;
    vector<int> result =twoSum(arr,target);
    if(!result.empty()){
        cout << "indices:"<< result[0]<<", "<< result[1] << "\n";
    }else{
        cout<< "No solution Found\n";
    }
    return 0;
}      // time complexity = O(n*n)
       // space complexity =O(1);
