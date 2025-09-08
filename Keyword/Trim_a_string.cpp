#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    // string data(" mini Test Test ");
     string data;
     getline(cin,data);
    remove(data.begin(), data.end(), ' ');
    cout << data << endl;
    return 0;
}