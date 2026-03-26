import java.util.Scanner;
class Age{
	
	int checkAgeCategory(int age){

		if (age<=17){
			System.out.println("You are a minor.");
		}
		else if (age>=18 && age<=59){
			System.out.println("You are an adult.");
		}
		else{
			System.out.println("You are a senior citizen.");
		}
	return age;
	}
}

class AgeCheck{
	public static void main(String args[]){
	
		Age a=new Age();
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter your age");
		int age=sc.nextInt();

		a.checkAgeCategory(age);
	}
}