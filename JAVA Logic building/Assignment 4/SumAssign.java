import java.util.Scanner;
class SumofTwo{
	
	int sumOfTwoNumbers(int a,int b){
		int sum=a+b;
		System.out.println("The sum of " + a + " and " + b + " is " + sum + ".");
	return sum;
	
	}
}

class SumOfTwoCheck{
	public static void main(String args[]){
		Sum s=new Sum();
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter first number");
		int a=sc.nextInt();

		System.out.println("Enter second number");
		int b=sc.nextInt();

		s.sumOfTwoNumbers(a,b);
		
	}
}