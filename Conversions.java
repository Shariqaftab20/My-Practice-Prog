import java.util.*;
public class Conversions
{
    public static void main(String[] args) {
        Scanner sc= new Scanner (System.in);
        System.out.println("Select the type of conversion\n");
        System.out.println("1.Binary to Decimal");
        System.out.println("2.Decimal to Binary");
        System.out.println("3.Octal to Decimal");
        System.out.println("4.Decimal to Octal");
        System.out.println("5.Hexadecimal to Decimal");
        System.out.println("6.Decimal to Hexadecimal");
        System.out.println("7.Hexadecimal to Binary");
        System.out.println("8.Binary to Hexadecimal");
        System.out.println("9.Binary to Octal");
        System.out.println("10.Octal to Hexadecimal");
        System.out.println("11.Hexadecimal to Octal");
        System.out.println("12.Octal to Binary");
        int ch=sc.nextInt();
        switch (ch){
            case 1:
        {
             int val;
             System.out.println("Enter a Number");

            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 2:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(DecimaltoBinary(val));
            break;
        }
    case 3:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(OctaltoDecimal(val));
            break;
        }
    case 4:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 5:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 6:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 7:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 8:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 9:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 10:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 11:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    case 12:
        {
            int val;
            System.out.println("Enter a Number");
            val=sc.nextInt();
            System.out.println(BinarytoDecimal(val));
            break;
        }
    default:
        {
            System.out.println("Fuck you MotherFucker");

        }
        }
        sc.close();
    }

   static  int BinarytoDecimal(int n){
        int ans=0 ;
        int x=1;
        while(n!=0)
        {
            ans+=n%10*x;
            x*=2;
            n/=10;
        }

        return ans ;
    }
    static  int OctaltoDecimal(int n){
        int ans=0 ;
        int x=1;
        while(n!=0)
        {
            ans+=n%10*x;
            x*=8;
            n/=10;
        }

        return ans ;
    }
    static String DecimaltoBinary(int n)
    {
        String ans="";
        int x=2;
        while(n>1)
        {
            ans=n%x+ans;
            n/=x;
        }
        if(n==1)
        ans=1+ans;
        return ans;
    }
}