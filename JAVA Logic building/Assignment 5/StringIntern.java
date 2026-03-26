<<<<<<< HEAD:JAVA Logic building/Assignment 5/StringIntern.java
class StringConcat{
	public static void main(String args[]){
		
		String str1 = new String("hello"); 
		String str2 = str1.intern(); 
		String str3 = "hello"; 

		System.out.println("Is str2 and str3 pointing to the same object? " + (str2==str3));
			
}
=======
class StringConcat{
	public static void main(String args[]){
		
		String str1 = new String("hello"); 
		String str2 = str1.intern(); 
		String str3 = "hello"; 

		System.out.println("Is str2 and str3 pointing to the same object? " + (str2==str3));
			
}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/StringIntern.java
}