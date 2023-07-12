import java.util.Scanner;
// import java.util.Arrays;
class question {
    public static void main(String[] args) {
        // System.out.println("You have entered: "+args[0]);
        // String s = args[0];
        // int size = s.length();
        // for(int i=0; i<size; i++){
        //     char c = s.charAt(i);
        //     if(Character.isUpperCase(c)){
        //         System.out.print(c);
        //     }
        // } 

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any String: ");
        String s1 = sc.nextLine();
        System.out.print("Times you want to print: ");
        int n = sc.nextInt();
        for(int i=1; i<=n; i++){
            System.out.print(s1);
        }
        sc.close();
    }
}

//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter any string: ");
//         String s = sc.nextLine();
//         int l = s.length();
//         int []count = new int[l];
//         for(int i=0; i<s.length(); i++){
//             char c = s.charAt(i);
//             int g= 0;
//             for(int j=0; j<s.length(); j++){
//                 // if(j==i){
//                 //     continue;
//                 // }
//                 if(c==s.charAt(j)){
//                     g++;
//                 }
//             }
//             count[i] = g;
//         }
//         int max = count[0];
//         int index = 0;
//         for(int i=0; i<l; i++){
//             if(max<count[i]){
//                 max = count[i];
//                 index = i;
//             }
//         }
//         System.out.println(s.charAt(index));
//     }
// }
