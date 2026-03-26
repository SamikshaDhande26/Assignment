<<<<<<< HEAD:JAVA Logic building/Assignment 5/Palindrome.java
import java.util.Scanner;
class Palindrome{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter a string:");
		String str=sc.nextLine();

		String reverse="";

		for(int i=str.length()-1;i>=0;i--){
			reverse=reverse+str.charAt(i);
		}

		if(str.equals(reverse)){
			System.out.println("The string '" + str + "' is a palindrome.");
		}
	}
}

=======
import java.util.Scanner;
class Palindrome{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Enter a string:");
		String str=sc.nextLine();

		String reverse="";

		for(int i=str.length()-1;i>=0;i--){
			reverse=reverse+str.charAt(i);
		}

		if(str.equals(reverse)){
			System.out.println("The string '" + str + "' is a palindrome.");
		}
	}
}

>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/Palindrome.java
		