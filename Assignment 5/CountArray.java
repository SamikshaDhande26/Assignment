import java.util.Scanner;

class CountArray{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		int[] arr=new int[6];

		System.out.println("Enter 6 integers:");
		
   		int count1=0;
		int count2=0;
		int count3=0;

		for(int i=0;i<arr.length;i++){
			arr[i]=sc.nextInt();
		}

		for(int i=0;i<arr.length;i++){
			if(arr[i]>0){
				count1++;
					
			}else
			if(arr[i]<0){
				count2++;
					
			}else{
				count3++;
			}

		}

					
		System.out.println("Positive numbers:" + count1);
		System.out.println("Negative numbers:" +count2);
	}
}