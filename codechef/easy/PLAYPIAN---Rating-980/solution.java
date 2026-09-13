import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();  // Consume the newline

        while (t-- > 0) {
            String s = sc.nextLine();
            int n = s.length();
            boolean isValid = true;

            // Check every pair of characters
            for (int i = 0; i < n - 1; i += 2) {
                if (s.charAt(i) == s.charAt(i + 1)) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
	}
}