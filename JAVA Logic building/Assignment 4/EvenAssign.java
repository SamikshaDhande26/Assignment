class Even{
	
	void printEvenNumbers(){
		int i=1;
		while(i<=50){
			if(i%2==0){
				System.out.print(i + " ");
			}
		i++;
		}
	
	}
}

class EvenCheck{
	public static void main(String args[]){
		Even e =new Even();
		
		e.printEvenNumbers();
	}
}