#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   double a[100];
    int x=1;
   int y=0;
    for(x=1;x<argc;x++,y++){
        a[y]=atof(argv[x]);
    }
        int i=0;
        int min=a[0];
        for(i=0;i<argc-2;i++){
        if (a[i+1]>a[i]){
        min=a[i];
        a[i]=a[i+1];
        a[i+1]=min;
    }
    }
    printf("The min number is%f \n",a[x]);
    return 0;
}
