import java.util.*;
class Main{
    public static void main(String [] args)
    {
        Scanner sc=new Scanner(System.in);
         long n =sc.nextLong();
        int k = sc.nextInt();
        int count=0;
        for(long i =n;i>=1;i--){
            if(n%i==0)
            {
                count ++;
                if(count ==k)
                {
                    System.out.println(i);
                    sc.close();
                    return;
                }
            }
        }
        
        
        System.out.println(1);
        sc.close();
    } 
}