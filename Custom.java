import java.util.Scanner;
public class Custom 
{
      public static void main(String[] args)
      {
            Scanner scanner=new Scanner(System.in);
            System.out.println("Enter a number:");
            int a=scanner.nextInt();
            float b=scanner.nextInt();
            try {
                  if (b==0)
                  {
                        throw new ArithmeticException("division by zero not possible");

                  }
                  float result;
                  result=a/b;
                  System.out.println(result);
            }
            catch(ArithmeticException e)
            {
                  System.out.println(e.getMessage());
            }
            finally{
                  scanner.close();
            }
      }
}
