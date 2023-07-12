import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // System.out.println("Hello");
        int a;
        System.out.print("Enter number of rows: ");
        a = sc.nextInt();
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}