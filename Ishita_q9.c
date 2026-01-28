#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter num: ";
    cin>>n;
    bool check = true;
    if(n<2){
        check = false;
    }else{
        for(int i=2;i<sqrt(n);i++){
            if(n%i == 0){
                check = false;
                break;
            }
        }
    }
    
    check ? cout<<"Prime":cout<<"Not prime";
    return 0;
}
