#include <stdio.h>
int strrindex(char a[],char b[])
{
int i,j,k=-1; 
for(i=0;a[i]!='\0';i++)
{int n=0; 
for(j=0;b[j]!='\0';j++)
{
if(a[i]!=b[j]) break;
i++;
n++;
}
if(b[j]=='\0') k=i-n;
}
return k;
}

int main()
{
char s[200],t[200];
gets(s);
gets(t);
printf( "%d\n",strrindex(s,t));
} 