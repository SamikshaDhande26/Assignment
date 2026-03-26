<<<<<<< HEAD:JAVA Logic building/Assignment 5/PrintArray.java
import java.util.Scanner;

class PrintArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}

		for(int num:arr){
			System.out.print(num);
		}
	}
=======
import java.util.Scanner;

class PrintArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}

		for(int num:arr){
			System.out.print(num);
		}
	}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/PrintArray.java
}