#include <iostream>
using namespace std;

int calcSum(int a,int b){
    if(b<a){
        return 0;
    }
    return b+calcSum(a,b-1);
}

int main() {
    int a,b;
    cout<<"Enter num: ";
    cin>>a>>b;
    int sum=calcSum(a,b);
    cout<<sum;
    return 0;
}
