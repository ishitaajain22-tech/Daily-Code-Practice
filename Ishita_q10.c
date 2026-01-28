#include <iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n){
    if(n<2){
        return false;
    }else{
        for(int i=2;i<sqrt(n);i++){
            if(n%i == 0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int st,end;
    cout<<"Enter start and end of range: ";
    cin>>st>>end;
    for(int i=st;i<=end;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
