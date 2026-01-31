import java.util.Scanner;

public class Main {
  
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int base = sc.nextInt();
        double exp = sc.nextDouble();
        double res1 = Math.pow(base, exp);
 	    System.out.println(base + " ^ " + exp + " = " + res1 );
    }
}
