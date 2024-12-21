#include <stdio.h>
#define max 5
int s[max],top=-1,ele,i;
void pal()
{
      int i=1,rev=0,digit,temp,n,len=0;
      printf("enter a number\n");
      scanf("%d",&n);
      temp=n;
      while(n!=0)
      {
            digit=n%10;
            n=n/10;
            push(digit);
            len++;
      }
      while(len!=0)
      {
            digit=pop();
            rev=rev+(i*digit);
            len--;
            i=i*10;
      }

      
      if(temp==rev)
      printf("number is palindrome\n");
      else
      printf("number is not palindrome\n");
}
void push(int ele)
{
     
      s[++top]=ele;
}
int pop()
{
      if(top==-1)
      {
            printf("stack underflow\n");
            return -1;
      }
      return s[top--];
}
void display()
{
      if(top==-1)
      {
            printf("stack is empty\n");
            return;
      }
      for(i=top;i>=0;i--)
      printf("%d ",s[i]);
}
int main()
{
      int ch;
      do
      {
            printf("1:push  2:pop  3:display   4:palindrome\n");
            printf("enter choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
                  case 1:
                        if(top>=max-1)
                        {
                              printf("stack overflow\n");
                              break;
                        }
                        printf("enter element\n");
                        scanf("%d",&ele);
                        push(ele);
                        break;
                  case 2:
                        ele=pop();
                        if(ele!=-1)
                        printf("popped element is %d\n",ele);
                        break;
                  case 3:
                        display();
                        break;
                  case 4:
                        pal();
                        break;
                  default:
                        printf("invalid choice\n");
            }
      }while(ch<=4);
      
}
