import java.util.Scanner;
class Table{
	void printMultiplicationTable(){
		Scanner sc =new Scanner(System.in);
			System.out.println("Enter a number");
			int n=sc.nextInt();

		for(int i=1;i<=10;i++){
			
			System.out.println(n + " * " + i + " = " + n*i);
		}
	}
}

class TableCheck{
	public static void main(String args[]){
		Table t=new Table();
		t.printMultiplicationTable();
	}
}
			
			