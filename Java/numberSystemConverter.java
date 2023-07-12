import java.util.Scanner;

class numberSystemConverter{
    static int dec_bin(int a){
        int bin = 0;
        int rev = 1;
        while(a!=0 ){
            int rem = a%2;
            bin += rem*rev;
            a /= 2;
            rev *= 10;
        }
        return bin;
    }
    static int bin_dec(int a){
        int dec = 0;
        int i = 0;
        while(a!=0){
            int ld = a%10;
            dec += ld*(int)Math.pow(2, i);
            i++;
            a /= 10;
        }
        return dec;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the binary value: ");
        int bin = sc.nextInt();
        System.out.println("Decimal: "+bin_dec(bin));
        System.out.print("Enter the decimal value: ");
        int dec=sc.nextInt();
        System.out.println("Binary:"+dec_bin(dec));
        sc.close();
    }
}