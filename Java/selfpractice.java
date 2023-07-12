import java.util.Scanner;

public class selfpractice {
    public static void main(String[] args){
// Factorial of a number
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Factorial");
        // System.out.print("Enter a number: ");
        // int num;
        // int fact = 1;
        // num = sc.nextInt();
        // for(int i=1; i<=num; i++){
        //     fact *= i;
        // }
        // System.out.println("Factorial of "+num+" is: "+fact);
        // sc.close();
// /////////////////////////////////////////////////////////////////
// Fibonaaci Series
        // Scanner sc = new Scanner(System.in);
        // System.out.println("-------Fibonaaci Series-------");
        // int num;
        // System.out.print("Enter any range:  ");
        // num = sc.nextInt();
        // int n1= 0;
        // int n2 = 1;
        // int n;
        // while(n1<num){
        //     System.out.print(n1);
        //     n = n1+n2;
        //     n1 = n2;
        //     n2 = n;
        //     if(n1<num){
        //         System.out.print(" ");
        //     }
        // }
        // System.out.println("-----"+n);
        // sc.close();
// //////////////////////////////////////////////
// Palindrome
        // int num = Integer.parseInt(args[0]);
        // Scanner sc = new Scanner(System.in);
        // int num = sc.nextInt();
        // int dnum = num;
        // int d,d1 = 0;
        // while(num>0){
        //     d = num%10;
        //     d1 = d1*10+d;
        //     num /= 10;
        // }
        // if(dnum==d1){
        //     System.out.println("Palindrome");
        // }
        // else{
        //     System.out.println("Not Palindrome");
        // }
        // sc.close();
// ///////////////////////////////////////////////
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.print("Enter number of rows: ");
        num = sc.nextInt();
        for(int i=1; i<=num; i++){
                for(int j=1; j<=i; j++){
                        System.out.print(" ");
                }
                for(int k=0; k<=num; k++){
                        System.out.print("* ");
                }
                System.out.println();
        } 
        sc.close();
    }
}