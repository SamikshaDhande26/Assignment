import java.util.Scanner;

class StrArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		String[] arr=new String[4];

		System.out.println("Enter 4 strings:");
		
		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextLine();
		}

		System.out.println("Entered string");
		for(String str:arr){
			System.out.println(str);
		}
		System.out.println();
	}
}