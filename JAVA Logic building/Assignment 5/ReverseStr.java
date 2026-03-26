<<<<<<< HEAD:JAVA Logic building/Assignment 5/ReverseStr.java
import java.util.Scanner;
class ReverseStr{
	public static void main(String args[]){
		Scanner sc =new Scanner(System.in);

		//String str=new String();

		System.out.println("Enter a string:");
		String str=sc.next();

		StringBuilder sb=new StringBuilder(str);
		String rev=sb.reverse().toString();

		System.out.println("Reversed String:" + rev);
	}
}
=======
import java.util.Scanner;
class ReverseStr{
	public static void main(String args[]){
		Scanner sc =new Scanner(System.in);

		//String str=new String();

		System.out.println("Enter a string:");
		String str=sc.next();

		StringBuilder sb=new StringBuilder(str);
		String rev=sb.reverse().toString();

		System.out.println("Reversed String:" + rev);
	}
}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/ReverseStr.java
