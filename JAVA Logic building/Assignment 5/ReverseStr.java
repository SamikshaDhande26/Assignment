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
