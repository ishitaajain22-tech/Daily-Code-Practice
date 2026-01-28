#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int year;
    cout<<"Enter num: ";
    cin>>year;
    (year%400 == 0 || (year%4==0 && year%100!=0)) ? cout<<"Leap year" : cout<<"Not leap year";
    return 0;
}
