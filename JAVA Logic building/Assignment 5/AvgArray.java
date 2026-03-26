<<<<<<< HEAD:JAVA Logic building/Assignment 5/AvgArray.java
import java.util.Scanner;

class AvgArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}
		
		int sum=0;
		float avg=0.0f;
		for(int num:arr){
			sum=sum+num;
			avg=sum/arr.length;
			
		}
		System.out.print("The average of the numbers is: " + avg);
	}
=======
import java.util.Scanner;

class AvgArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}
		
		int sum=0;
		float avg=0.0f;
		for(int num:arr){
			sum=sum+num;
			avg=sum/arr.length;
			
		}
		System.out.print("The average of the numbers is: " + avg);
	}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/AvgArray.java
}