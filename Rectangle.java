interface Resizable
{
      void resizewidth(int width);
      void resizeheight(int height);

}

class Rectangle implements Resizable
{
      private int width;
      private int height;

      public Rectangle(int width, int height)
      {
            this.width = width;
            this.height = height;
      }

      public void resizewidth(int width)
      {
            this.width = width;
      }

      public void resizeheight(int height)
      {
            this.height = height;
      }

      public int getwidth()
      {
            return width;
      }

      public int getheight()
      {
            return height;
      }


      public static void main(String[] args)
      {
            Rectangle rectangle = new Rectangle(10, 5);
            System.out.println("Original width " + rectangle.getwidth() );
            System.out.println( "original height" + rectangle.getheight());

            rectangle.resizewidth(20);
            rectangle.resizeheight(15);

            System.out.println("new width" + rectangle.getwidth() + "new height" + rectangle.getheight());
      }
}