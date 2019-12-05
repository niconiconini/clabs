#include <stdio.h>
int swap(char *s,char *p)
{
   int i = 0;
   char temp;
   if(*++p != '\0')
      i = swap(s,p);
   if((s+i) <= (--p))
   {
      temp = *(p);
      *(p) = *(s+i); *(s+i) = temp;
   }
   return ++i;
}
char *reverse(char *s)
{
   char *p,*q;
   q = p = s;
   swap(q,p);
   return s;
}
int main(void)
{
  char s[100];
  scanf("%s", s);
   printf("%s\n",reverse(s));
   return 0;
}