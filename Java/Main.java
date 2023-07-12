import java.util.Scanner;

//package com.first;
//
//public class Main {
//    public static void main(String[] args) {
//        //First Program -->> Comments " //-->> Double Slash"
//        System.out.println("Hello world!");
//        System.out.println("This is Arpit Raj"); //println simply adds new line at last.
//        System.out.print(80-2+2);
//        Variables and Datatype :-
//        String name = "India";
//        int population = 1393409038;
//        float populationDensity = 393.0f;
//        double GDP = 2.454;
//        char currency = 'R';
//        boolean isSecular = true;
//        System.out.println(currency);
//        System.out.println(name + " has population of " + population + '.');
//        System.out.println(name + " has population density of " + populationDensity + " per square kilometer.");
//        System.out.println(name + " has GDP of " + GDP + " trillion dollar.");
//        System.out.println("India's currency is: " + currency + '.');
//        // Type Conversion
//           // Implicit Conversion
//        int radius = 400;
//        double nradius = radius;
//        System.out.println(nradius);
//          // Explicit Conversion
//        double diameter = 3.78;
//        int ndiameter = (int)diameter;
//        System.out.println(ndiameter);
//    }
//}
//package com.first;
//
//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args){
////        System.out.println("Hey there");
//        // User Input
//        String name;
//        int age;
//        char nickName;
//        Scanner scanner = new Scanner(System.in);
//        System.out.print("Enter your name: ");
//        name = scanner.nextLine(); //nextLine() reads whole line however next() reads only one word. It is for strings
//        System.out.print("Enter your age: ");
//        age = scanner.nextInt(); //nestInt use for taking input as integer.
//        System.out.print("Enter your nickName(char): ");
//        nickName = scanner.next().charAt(0);
//        System.out.println("Your name is " + name);
//        System.out.println("Your age is " + age);
//        System.out.println("Your nickName is " + nickName);
//        scanner.close();
//    }
//}
//package com.first;
//public class Main {
//    public static void main(String[] args){
//        // Arithmetic Operators:-
////        int modulo = 15%2;
////        int add = 4+3;
////        int divide = 49/7;
////        int sub = 10-3;
////        int mul = 3*2;
////        int result = 3*(10-2)%5/2;
////        System.out.println(modulo);
////        System.out.println(add);
////        System.out.println(divide);
////        System.out.println(sub);
////        System.out.println(mul);
////        System.out.println(result);
//        // Relation Operator
////        int x = 7;
////        int y = 1;
////        int z = 1;
//        // Greater than and Greater than Equal to:
////        boolean r1 = z>y;   //False
////        boolean r2 = z>=y;  //True
//        //Less than and Less than Equal to:
////        boolean r3 = x<y;   //False
////        boolean r4 = x<=z;  //False
//        //Is Equal to and Is not Equal to:
////        boolean r5 = z==y;  //True
////        boolean r6 = x!=y;  //True
////        System.out.println(r1);
////        System.out.println(r2);
////        System.out.println(r3);
////        System.out.println(r4);
////        System.out.println(r5);
////        System.out.println(r6);
////        int num = 8;
////        System.out.println(num++ - ++num + --num);
//        // Logical Operators
////        int x = 8;
////        int y = 6;
////        System.out.println(true && false);
////        System.out.println(true || false);
////        System.out.println(!false);
//    }
//}
//package com.first;
//public class Main {
//    public static void main(String[] args){
//        //Conditional Statements:--
//            // if-else Statements:-
////        boolean isSecular = true;
////        String message;
////        if(isSecular){
////            System.out.println("India is a Secular Country");
////        }
////        else{
////            System.out.println("India is not a Secular Country");
////        }
//        //Ternary Operator:-  condition?Exp1:Exp2;
////        message = isSecular?"India is a Secular Country":"India is a Secular Country";
////        System.out.println(message);
//        // if-else ladder:-
//        int score = 94;
//        char grade;
//        if (score>=90){
//            grade = 'A';
//        } else if (score >= 80) {
//            grade = 'B';
//        }else if (score>=70){
//            grade = 'C';
//        } else if (score >= 60) {
//            grade = 'D';
//        }else {
//            grade = 'F';
//        }
//        System.out.println("Your Grade is "+grade);
//        // Switch Statement:-
//        switch (grade){
//            case 'A':
//                System.out.println("Excellent");
//                break;
//            case 'B':
//                System.out.println("Very Good");
//                break;
//            case 'C':
//                System.out.println("Good");
//                break;
//            case 'D':
//                System.out.println("Can do better");
//                break;
//            case 'F':
//                System.out.println("Failed");
//                break;
//            default:
//                System.out.println("Invalid Grade");
//        }
//        // This is Inline Comment.
//        /* This is block comment.
//            Means Multi Line Comment.
//         */
//
//    }
//}
//package com.first;
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args){
//        String name;
//        int age;
//        String bloodGroup;
//        String group = "";
//        Scanner sc = new Scanner(System.in);
//        name = sc.nextLine();
//        age = sc.nextInt();
//        bloodGroup = sc.next();
//        if(age>=20){
//            group = "Red";
//        } else if (age>=15 && age<20) {
//            group = "Blue";
//        } else if (age>=10 && age<15) {
//            group = "Yellow";
//        }
//        System.out.println("---------------------");
//        System.out.println("Name: "+name);
//        System.out.println("Age: "+age);
//        System.out.println("Blood Group: "+bloodGroup);
//        System.out.println("---------------------");
//        System.out.println("Your group is "+group);
//        System.out.println("---------------------");
//        int g=3;
//        System.out.println(++g*8);
//    }
//}
//package com.first;
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args){
        //Loops:--
        //for loop:--
            //Star pattern:

//                 *
//                 * *
//                 * * *
//                 * * * *
//                 * * * * *
//        for(int i=1; i<=5; i++){
//            for(int j=1; j<=i; j++){
//                System.out.print("* ");
//            }
//            System.out.println();
//        }
        //while loop:-
        //WAP to display factorial of a number.
//        int i=5;
//        int fact = 1;
//        while (i>0){
//            fact *= i;
//            i--;
//        }
//        System.out.println("Factorial = "+fact);
        //do-while loop:-
        //WAP to add numbers until user enters zero.
//        Scanner sc = new Scanner(System.in);
//        double num;
//        double sum = 0;
//        do {
//            System.out.print("Enter any number: ");
//            num = sc.nextDouble();
//            sum += num;
//        }while (num != 0);
//        System.out.println("Sum = "+sum);
//        Scanner sc = new Scanner(System.in);
//        int num;
//        int flag = 1;
//        System.out.print("Enter a number: ");
//        num = sc.nextInt();
//
//        //Using for loop
//        for(int i = 2; i<num; i++){
//            if(num==2){
//                System.out.println("Number is Prime");
//                break;
//            }
//            else if(num%i==0){
//                flag = 0;
//                break;
//            }
//        }
//
//        if(flag == 1)
//            System.out.println("Number is Prime");
//        else
//            System.out.println("Not a Prime Number");
//
//
//        //Using while loop;
//        int i=2;
//        while (i<num){
//            if(num==2){
//                System.out.println("Number is Prime");
//                break;
//            }
//            else if(num%i==0){
//                flag = 0;
//                break;
//            }
//            i++;
//        }
//        if(flag == 1)
//            System.out.println("Number is Prime");
//        else
//            System.out.println("Not a Prime Number");

        //Array
//        double[] arr1 = {1.2, 2.3, 3.4, 4.5, 5.6};
//        double sum = 0;
//        for(double num:arr1){
//            sum += num;
//        }
//        System.out.println("Sum = "+sum);

        // 2D array is collection of 1D Array
        //WAP to find sum of all the elements of the array.
//        int[][] myFirst2DArray = {
//                { 3, 5, 1, 9 },
//                { 10, 15, 3, 0  },
//                { 1, 11, 31, 90 },
//                { 2, 51, 1, 9 }
//        };
//        int sum = 0;
//        for (int row = 0; row < myFirst2DArray.length; row++) {
//
//            for (int column = 0; column < myFirst2DArray[row].length; column++) {
//                sum += myFirst2DArray[row][column];
//                System.out.print(myFirst2DArray[row][column] + " ");
//            }
//            System.out.println();
//        }
//        System.out.println("Sum of the elements are: "+sum);
//    }
//}
//package com.first;
//public class Main {
//    public static void main(String[] args){
        //Array
//        double[] arr1 = {1.2, 2.3, 3.4, 4.5, 5.6};
//        double sum = 0;
//        for(double num:arr1){
//            sum += num;
//        }
//        System.out.println("Sum = "+sum);

        // 2D array is collection of 1D Array
        //WAP to find sum of all the elements of the array.
//        int[][] myFirst2DArray = {
//                { 3, 5, 1, 9 },
//                { 10, 15, 3, 0  },
//                { 1, 11, 31, 90 },
//                { 2, 51, 1, 9 }
//        };
//        int sum = 0;
//        for (int row = 0; row < myFirst2DArray.length; row++) {
//
//            for (int column = 0; column < myFirst2DArray[row].length; column++) {
//                sum += myFirst2DArray[row][column];
//                System.out.print(myFirst2DArray[row][column] + " ");
//            }
//            System.out.println();
//        }
//        System.out.println("Sum of the elements are: "+sum);

//        char[] arr1 = {'W','H','O'};
//        System.out.println(arr1);
//    }
//}
//package com.first;
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args){
        //Methods or Functions --> Methods are the collection of statements that are grouped together to perform a specific operation.
//        int p,t;
//        float r;
//        Scanner sc = new Scanner(System.in);
//        System.out.print("Principle Amount: ");
//        p = sc.nextInt();
//        System.out.print("RateOfInterest: ");
//        r = sc.nextFloat();
//        System.out.print("Time: ");
//        t = sc.nextInt();
//        double s = si(p,r,t);
//        System.out.println("SI is "+s);

        //Methods or Functions Overloading:--
        //   ----> Same method name but different parametes.
//        add();   //Method1
//        add(7,1);       //Method 2
//    }
//    public static double si(int p,float r, int t){
//        double SI = p*r*t/100;
//        return SI;
//    }
//    public static void add(){    //Method 1
//        System.out.println(5+7);
//    }
//    public static void add(int a,int b){       //Method 2
//        int sum = a+b;
//        System.out.println(sum);
//    }
//}
//package com.first;
//import java.util.Scanner;
//public class Main
//{
//    public static void calculateTax(String name, long income)
//    {
//        long taxAmount;
//        long taxPercentage = 0L;
//        if (income >= 300000)
//        {
//            taxPercentage = 20L;
//        }
//        else if (income >= 100000 && income < 300000)
//        {
//            taxPercentage = 10L;
//        }
//        else if (income < 100000)
//        {
//            taxPercentage = 0L;
//        }
//        taxAmount = (taxPercentage)*(income)/(100);
//        System.out.println(name+ " : ₹ " +taxAmount);
//    }
//    public static void main(String[] args)
//    {
//        int personCount;
//        System.out.println("Tax Calculator App");
//        System.out.println("----- WELCOME -----");
//        Scanner reader = new Scanner(System.in);
//        System.out.println("Enter total person count: ");
//        personCount = reader.nextInt();
//        String[] namesArray = new String[personCount];
//        long[] incomesArray = new long[personCount];
//        for (int i=0; i < personCount; i++)
//        {
//            System.out.println("Enter Name " +(i+1)+ " : ");
//            namesArray[i] = reader.next();
//            System.out.println("Enter " +namesArray[i]+ "'s Annual Income : ");
//            incomesArray[i] = reader.nextLong();
//        }
//        for (int i=0; i < personCount; i++)
//        {
//            calculateTax(namesArray[i], incomesArray[i]);
//        }
//    }
//}
// package com.first;
// public class Main{
//     public static void main(String[] args){
//         System.out.println("Hello");
//     }
// }
// /////////////////////////////////////////////////////////////////////
class Student{
                
        private int Adm_num;
        private String Sname;
        private float eng;
        private float math;
        private float sci;
        private float total;

        float ctotal(){
                return eng+math+sci;
        }

        public void takedata(int Adm_num, String Sname, float eng, float math, float sci){
                this.Adm_num = Adm_num;
                this.Sname = Sname;
                this.eng = eng;
                this.math = math;
                this.sci = sci;
                this.total = ctotal();
        }

        public void showdata(){
                System.out.println("Adm_No: "+Adm_num);
                System.out.println("Name: "+Sname);
                System.out.println("Marks in English: "+eng);
                System.out.println("Marks in Math: "+math);
                System.out.println("Marks in Science: "+sci);
                System.out.println("Total marks: "+total);
        }
}
class Main{
        
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                Student s1 = new Student();
                int Adm_num;
                String Sname;
                float eng,math,sci;
                System.out.print("Enter your Adm_Num: ");
                Adm_num = sc.nextInt();
                System.out.print("Enter your name: ");
                Sname = sc.next();
                sc.nextLine();
                System.out.print("Enter your marks in English: ");
                eng = sc.nextFloat();
                System.out.print("Enter your marks in Math: ");
                math = sc.nextFloat();
                System.out.print("Enter your marks in Science: ");
                sci = sc.nextFloat();
                s1.takedata(Adm_num, Sname, eng, math, sci);
                s1.showdata();
                sc.close();
        }
}