#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter num: ";
    cin>>a>>b>>c;
    int largest = max(a,max(b,c));
    cout<<"Largest num: "<<largest;
    return 0;
}
