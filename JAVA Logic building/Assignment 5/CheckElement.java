<<<<<<< HEAD:JAVA Logic building/Assignment 5/CheckElement.java
import java.util.Scanner;
import java.util.Arrays;
import java.util.List;

class CheckElement{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		
		Integer[] arr=new Integer[5];

		System.out.println("Enter 5 integers:");

		for(int i=0;i<5;i++){
			arr[i]=sc.nextInt();

		}

		List<Integer> list=Arrays.asList(arr);

		System.out.println("Enter the number to search:");
		int num=sc.nextInt();

		if(list.contains(num)){
			System.out.println("Found");
		}else{
			System.out.println("Not Found");
		}
	}
}
=======
import java.util.Scanner;
import java.util.Arrays;
import java.util.List;

class CheckElement{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		
		Integer[] arr=new Integer[5];

		System.out.println("Enter 5 integers:");

		for(int i=0;i<5;i++){
			arr[i]=sc.nextInt();

		}

		List<Integer> list=Arrays.asList(arr);

		System.out.println("Enter the number to search:");
		int num=sc.nextInt();

		if(list.contains(num)){
			System.out.println("Found");
		}else{
			System.out.println("Not Found");
		}
	}
}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/CheckElement.java
		