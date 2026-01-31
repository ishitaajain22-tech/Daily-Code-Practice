import java.util.Scanner;

public class Main {
    
    static int fact(int num){
        if(num==0){
            return 1;
        }
        return num*fact(num-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int fct = fact(a);
        System.out.println("Fact: "+fct);
    }
}
