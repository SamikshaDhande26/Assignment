<<<<<<< HEAD:JAVA Logic building/Assignment 5/Vowels.java
import java.util.Scanner;

class Vowels{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter a string:");
		String str=sc.nextLine();

		str=str.toLowerCase();

		int count=0;
		
		for(int i=0;i<str.length();i++){
			char ch=str.charAt(i);
		
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
				count++;
			}
		}
		
		System.out.println("The number of vowels in " + str + " is: " + count);
	}
}
=======
import java.util.Scanner;

class Vowels{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter a string:");
		String str=sc.nextLine();

		str=str.toLowerCase();

		int count=0;
		
		for(int i=0;i<str.length();i++){
			char ch=str.charAt(i);
		
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
				count++;
			}
		}
		
		System.out.println("The number of vowels in " + str + " is: " + count);
	}
}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/Vowels.java
