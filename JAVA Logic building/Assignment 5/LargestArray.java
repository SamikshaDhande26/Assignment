<<<<<<< HEAD:JAVA Logic building/Assignment 5/LargestArray.java
import java.util.Scanner;
import java.util.Arrays;

class LargestArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			
			
		}
		
	Arrays.sort(arr);
	
	int largest=arr[arr.length-1];
	System.out.println("The largest element is:" + largest);
				
	}
=======
import java.util.Scanner;
import java.util.Arrays;

class LargestArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			
			
		}
		
	Arrays.sort(arr);
	
	int largest=arr[arr.length-1];
	System.out.println("The largest element is:" + largest);
				
	}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/LargestArray.java
}