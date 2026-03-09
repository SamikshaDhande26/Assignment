import java.util.Scanner;
class Sum{

	void calculateSum(){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number:");
		int n=sc.nextInt();
		
		int sum=0;

		for(int i=1;i<=n;i++){
		
		sum=sum+i;
		
	}
	
	System.out.println("The sum of numbers from 1 to " + n + " is: " + sum);
}
}
class SumCheck{
	public static void main(String args[]){
		Sum s=new Sum();
		s.calculateSum();
	}
}

	