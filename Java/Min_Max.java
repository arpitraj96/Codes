import java.util.Scanner;

public class Min_Max {
    static int getMin(int []arr){
        int n = arr.length;
        int min = arr[0];
        for(int i=1; i<n; i++){
            min = Math.min(min, arr[i]);
        }
        return min;
    }
    static int getMax(int []arr){
        int n = arr.length;
        int max = arr[0];
        for(int i=1; i<n; i++){
            max = Math.max(max, arr[i]);
        }
        return max;
    }
    static int sum(int max,int min){
        return max+min;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of element: ");
        int s = sc.nextInt();
        int []arr = new int[s];
        for(int i=0; i<s; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("You have entered: ");
        for(int i=0; i<s; i++){
            System.out.print(arr[i]+"   ");
        }
        System.out.println();
        System.out.print("Sum of the minimum and maximum element of the given array is: "+sum(getMax(arr), getMin(arr)));
        sc.close();
    }
}
