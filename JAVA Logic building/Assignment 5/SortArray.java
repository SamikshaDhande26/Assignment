<<<<<<< HEAD:JAVA Logic building/Assignment 5/SortArray.java
import java.util.Scanner;
import java.util.Arrays;

class SortArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			
			
		}
		
	Arrays.sort(arr);
	
	System.out.println("Sorted array:" + Arrays.toString(arr));
				
	}
=======
import java.util.Scanner;
import java.util.Arrays;

class SortArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[5];

		System.out.println("Enter 5 integers:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
			
			
		}
		
	Arrays.sort(arr);
	
	System.out.println("Sorted array:" + Arrays.toString(arr));
				
	}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/SortArray.java
}