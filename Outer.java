public class Outer 
{
      public void display()
      {
            System.out.println("outer class display method");

      }
      class Inner
      {
            public void display()
            {
                  System.out.println("inner class display method");
            }
      }
      public static void main(String[] args)
      {
            Outer outer=new Outer();
            outer.display();
            Outer.Inner inner=outer.new Inner();
            inner.display();
      }
}
