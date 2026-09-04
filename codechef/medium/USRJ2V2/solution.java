import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner read = new Scanner(System.in);
        int a = read.nextInt();
        int b = read.nextInt();
		int sum = a + b;
		int diff = a - b;
		System.out.println("Sum is: " + sum);
		System.out.println("Difference is: " + diff);
	}
}