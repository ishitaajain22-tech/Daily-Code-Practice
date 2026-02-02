import java.util.Scanner;

class Main {
    static int fact(int num){
        if(num == 0){
            return 1;
        }
        return num * fact(num-1);
    }
    static boolean detectStrong (int num)
  {

     int digit, sum = 0;
    int temp = num;
    
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + fact(digit);
        temp /= 10;
    }
    
    return sum == num;

  }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num =sc.nextInt();
        if (detectStrong(num))
        System.out.println (num + " is Strong Number");
        else
        System.out.println (num + " is not a Strong Number");
    }
}
