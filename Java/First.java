// import java.util.Scanner;
// public class First {
//     public static void main(String[] args){
//         System.out.println("Hello");
//         Scanner sc = new Scanner(System.in);
//         int a;
//         a = sc.nextInt();
//         System.out.println("a is: "+a);
//         sc.close();
//     }
// }
import java.util.Scanner;

class mul1{
    public int mul(int a, int b){
        return a*b;
    }
}
public class First{
    public static void main ( String []args ){
        //creating scanner object
        Scanner input=new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        mul1 s = new mul1();
        int r = s.mul(a,b);
        System.out.println("The product of " + a +" and " + b +" is " + r);
        System.out.println("Factorial of "+a+" is "+fact(a));
        System.out.println("Binomial distribution of "+a+" and "+b+" is "+binomialDistribution(a, b));

        input.close();
    }
    public static int fact(int a){
        int result=1;
        for(int i=1; i<=a; i++){
            result *= i;
        }
        return result;
    }
    public static int binomialDistribution(int n,int r){
        int numero = fact(n);
        int deno = fact(r);
        deno *= fact((n-r));
        return numero/deno;
    }
    // public static int binomialDistribution(int n, int r){
        
    // }
}