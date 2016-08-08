public class Even_Odd

{

    public static void main(String[] args) 

    {

        int n1;

        Scanner s = new Scanner(System.in);

        System.out.print("Enter no. of elements you want in array:");

        n1 = s.nextInt();

        int b[] = new int[n1];
        System.out.println("Enter all the elements:");

        for (int i = 0; i < n; i++) 

        {

            b[i] = s.nextInt();

        }

        System.out.print("Odd numbers:");

        for(int i = 0 ; i < n ; i++)

        {

            if(b[i] % 2 != 0)

            {

                System.out.print(b[i]+" ");

            }

        }

        System.out.println("");

        System.out.print("Even numbers:");

        for(int i = 0 ; i < n ; i++)

        {

            if(b[i] % 2 == 0)

            {

                System.out.print(b[i]+" ");

            }

        }

    }}
