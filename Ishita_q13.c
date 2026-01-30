#include<bits/stdc++.h> 
#include<math.h> 
using namespace std;

int power(int x){
    int len = 0;
    while (x){
        len++;
        x = x/10;
    }
    return len;
}

void armstrong(int st,int end){
    
    for(int num = st; num <= end; num++){
        
        int sum = 0, temp, len;
        temp = num;
        
        len = power(num);
        
        while(temp != 0){
            int digit = temp % 10;
            sum = sum + pow(digit,len);;
            temp /= 10;
        };
    
        if(sum == num) cout << num << " ";
    }
}

int main (){
    int st,end;
    cout<<"Enter ranges:";
    cin>>st>>end;
    armstrong(st,end);

    return 0;
}
