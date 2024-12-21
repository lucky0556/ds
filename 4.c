#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int op1,op2,res,i,top=-1,s[10],ele,n;
void push(int ele)
{
      top++;
      s[top]=ele;
}
int pop()
{
      int ele;
      ele=s[top];
      top--;
      return(ele);
}
void eval()
{
      int e;
      char postfix[20],ch;
      printf("enter the postfix\n");
      scanf("%s",postfix);
      for(i=0;postfix[i]!='\0';i++)
      {
            ch=postfix[i];
            if(isdigit(ch))
            push(ch-'0');
            else{
                  op2=pop();
                  op1=pop();
                  switch(ch)
                  {
                        case '+':
                              res=op1+op2;
                              break;
                        case '-':
                              res=op1-op2;
                              break;
                        case '*':
                              res=op1*op2;
                              break;
                        case '/':
                              res=op1/op2;
                              break;
                  }
                  push(res);
            }
      }
      printf("result of the postfix exp %d\n",res);

}
void tow(int n,char s,char t,char d)
{
      if(n==1)
      {
            printf("\nMove disk 1 from rod %c to rod %c",s,d);
            return;
      }
      tow(n-1,s,d,t);
      printf("\nMove disk %d from rod %c to rod %c",n,s,d);
      tow(n-1,t,s,d);
}
void main()
{
      int ch;
      do
      {
            printf("\n1.Tower of Hanoi\n2.Postfix Evaluation\n");
            printf("enter your choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
                  case 1:
                        printf("enter the number of disks\n");
                        scanf("%d",&n);
                        tow(n,'A','C','B');
                        break;
                  case 2:
                        eval();
                        break;
            }
      } while (ch<=2);
      
}
