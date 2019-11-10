#include<stdio.h>
int num(int n){
int count = 0;
while(n){
  ++count;
 n = (n - 1) & n;
}
return count;
}
int main(int argc, char const *argv[])
{char b;
  int a = 0;
  while((b = getchar()) != '\n'){
  a = a * 10 + b - '0';
  }
  printf("%d\n",num(a));
  return 0;
}