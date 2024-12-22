#include<stdio.h>
#define MAX 30
void str(char s[],char p[],char r[],char f[])
{
int i,j,k,m,t,found;
i=j=k=m=t=found=0;
while(s[i]!='\0')
{
if(s[m++]==p[j++])
{
if(p[j]=='\0')
{
for(k=0;r[k]!='\0';k++,t++)
f[t]=r[k];
j=0;
i=m;
found=1;
}

}
else
{
f[t++]=s[i++];
m=i;
j=0;
}    
}         
f[t]='\0';


if (found)
{
printf("result string is \n");
puts(f);
}
else
{
printf("pattern not found\n");

}
}
void main()
{
char s[MAX],p[MAX],r[MAX],f[MAX];
printf("enter the main string\n");
gets(s);
printf("enter the pattern string\n");
gets(p);
printf("enter the replace string\n");
gets(r);
str(s,p,r,f);
}
