# UQECC01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A positive integer d is said to be a factor of another positive integer N if when N is divided by d, the remainder obtained is zero. For example, for number 12, there are 6 factors 1, 2, 3, 4, 6, 12. Every positive integer k has at least two factors, 1 and the number k itself. Given two positive integers N and k, write a program to print the kth largest factor of N.

Input Format: The input is a comma-separated list of positive integer pairs (N, k). Output Format: The kth highest factor of N. If N does not have k factors, the output should be 1.

Constraints: 1<N<10000000000 1<k<600. You can assume that N will have no prime factors which are larger than 13.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T06:57:13.975Z  

```java
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
```

---

[View on CodeChef](https://www.codechef.com/problems/UQECC01)