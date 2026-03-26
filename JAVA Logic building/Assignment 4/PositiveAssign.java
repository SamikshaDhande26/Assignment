import java.util.Scanner;
class Positive{

	Scanner sc=new Scanner(System.in);
	void askForPositiveNumber(){
		int n;

		do{
			System.out.println("Enter a positive number:");
			n=sc.nextInt();
			
			if(n>0){
				System.out.println("you entered the positive number :" + n);
                		break;
			}
		}while(n<=0);
	}
}

class PositiveCheck{
	public static void main(String args[]){
		Positive p=new Positive();
		p.askForPositiveNumber();
	}
}