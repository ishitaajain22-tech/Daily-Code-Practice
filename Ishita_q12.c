#include <iostream>
#include <string.h>
using namespace std;

void lower(char str[]){
  int i = 0;
  while (str[i] != '\0'){
    str[i] = tolower(str[i]);
    i++;
  }
}
int main() 
{
    string str;
    cin>>str;
    int i, len, flag = 0;
    
    lower(str);
    
    len = strlen(str);
    
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]){
            flag++;
            break;
        }
    }

    if (flag)
        cout << str << " is not palindrome";
    else
        cout << str << " is palindrome";
        
    return 0;
}
