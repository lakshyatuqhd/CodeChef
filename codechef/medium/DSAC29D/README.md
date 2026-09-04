# DSAC29D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Check Palindrome using stack
## Task

You are given a string  **S**  and you have to tell if it is a palindrome or not, using stack.
A stack using Array is already given in the editor.

It has three functions:-

- push(val) - This function is used to push values in the stack.
- pop() - This function is used to pop values from the stack.
- check() - This function is used to get the top value from the stack.

Use these three functions to interact with the stack and output whether the string is a palindrome or not.
Print "Yes" if the string is a palindrome and print "No" if the string is not a palindrome.

 **Note** :

- The length of the string will not exceed 100
- You need to take the input string from the user inside main() and complete the required logic
### Input Format
- The first line of input will contain a single integer $T$, denoting the number of strings.
- Next $T$ lines contain two variables. An integer $n$ denoting the length of the string and a string $S$
### Output Format

For each test case, output on a new line "Yes" if the string is a Palindrome. Otherwise, output "No"

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
### Sample 1:
Input
Output

```
3
5
hello
3
bob
7
rotator
```

```
No
Yes
Yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T15:11:51.600Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int  MAX = 101;
char stack[101];
int top = 0;

void push(char val)
{
    if(top==MAX)
    {
        printf("Overflow\n");
    }
    else{
        stack[top] = val;
        top++;
    }
}
void pop()
{
    if(top==0)
    {
        printf("Underflow\n");
    }
    else {
        top--;
    }
}
char check()
{
    if(top==0)
    {
        printf("Stack Empty\n");
    }
    else
    {
        return (stack[top-1]);
        printf("%d\n", stack[top-1]);  
    }
    
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char word[101];
        scanf("%d", &n);
        scanf("%s", word);
        for(int i=0; i<n; i++)
        {
            push(word[i]);
        }
        int flag = 1;
        for(int i=0; i<n; i++)
        {
            if(word[i]!=check())
            {
                flag = 0;
            }
            pop();
        }
        if(flag==1)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
        
    }
	return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/DSAC29D)