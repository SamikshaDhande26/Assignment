<<<<<<< HEAD:JAVA Logic building/Assignment 5/Pattern23.java
class Pattern23{
	public static void main(String args[]){
		int n=6;
         
        for (int i = 1; i <= n; i++) {

            
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

           
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }

            System.out.println();
        }

        
        for (int i = n - 1; i >= 1; i--) {

            
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

           
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
=======
class Pattern23{
	public static void main(String args[]){
		int n=6;
         
        for (int i = 1; i <= n; i++) {

            
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

           
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }

            System.out.println();
        }

        
        for (int i = n - 1; i >= 1; i--) {

            
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

           
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
>>>>>>> 9719ac285f88c135575c0dbc4a5ccd84379d0f34:Assignment 5/Pattern23.java
