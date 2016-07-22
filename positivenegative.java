public class Evenodd 
{
 public static void main(String[] args) 
 {
	 int n=Integer.parseInt(args[0]);
	 if(args.length==0)
	 {
		 System.out.println("please enter a number");
	 }
	 else if(n>0)
	 {
		 System.out.println("the given number is a positive number " +n);
	 }
	 else if(n<0)
	 {
		 System.out.println("the given number is negative "  +n);
	 }
	 else
	 {
		 System.out.println(" please enter an valid number");
	 }
 }
}
