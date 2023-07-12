import java.util.Scanner;
class Basics{
    public static void test1(){
        System.out.println("Hello");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // System.out.print("Enter Principle amount: ");
        // float p = sc.nextFloat();
        // System.out.print("Enter Rate of Interest: ");
        // float r = sc.nextFloat();
        // System.out.print("Enter Time Period: ");
        // float t = sc.nextFloat();
        // float si = (p*r*t)/100;
        // System.out.println("Simple Interest = "+si);
        // System.out.println("Amount = "+(si+p));
        

        // Character input using Scanner Class
        // System.out.print("Enter any Character: ");
        // char a = sc.next().charAt(0);
        // System.out.println("Character: "+a);
        test1();
        sc.close();
    }
}
