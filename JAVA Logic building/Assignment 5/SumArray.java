<<<<<<< HEAD:JAVA Logic building/Assignment 5/SumArray.java
import java.util.Scanner;

class SumArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}
		
		int sum=0;
		for(int num:arr){
			sum=sum+num;
			
		}
		System.out.print("The sum of all numbers is: " + sum);
	}
=======
import java.util.Scanner;

class SumArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}
		
		int sum=0;
		for(int num:arr){
			sum=sum+num;
			
		}
		System.out.print("The sum of all numbers is: " + sum);
	}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/SumArray.java
}