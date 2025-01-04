// #include<iostream>
// using namespace std;
// int main (){

// printing all array

//     int arr[5]={1,2,3,4,5};
//     cout <<arr[0] << endl;

//     for(int i= 0; i<5;i++){
//         cout << arr[i]<< " "<< endl;
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main (){
//     int arr[10] ;

// cout << "enter the value of an array "<< endl;
// // taking input in array 

//     for(int i= 0; i<10;i++){
//         cin >> arr[i];
//     }
// // printing the input data 
// cout << "Printing the value in array"<<endl;

//     for(int i= 0; i<10;i++){
//         cout << 
//     arr[i]<< " ";
//     }
// cout << endl;
//     return 0;
// }




	//srot 0 and 1s

	vector<int> arr{0,1,0,1,1,0,1,0,1,1};
	int start = 0;
	int end = arr.size() -1;
	int i = 0;

	while( i != end) {
		cout << "for i="<<i<< " start="<<start <<" end="<< end << endl;
		if(arr[i] == 0) {
			cout << "found zero" << endl;
			cout <<"before swap ";
			printArray(arr);
			
			swap(arr[start], arr[i]);
			cout <<"after  swap ";
			printArray(arr);
			start++;
			i++;
			cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;
		}
		else {
			cout << "found One" << endl;
			cout <<"before swap ";
			printArray(arr);
			swap(arr[end], arr[i]);
			cout <<"after  swap ";
			printArray(arr);
			end--;
						cout << "now i="<<i<< " start="<<start <<" end="<< end << endl;

		}
	}
	
	//print
	for(auto val : arr) {
		cout << val << " ";
	}
	
	
	
	
	return 0;
}
