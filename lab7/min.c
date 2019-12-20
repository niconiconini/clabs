#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int a[100];
    int x=1;
   int y=0;
    for(x=1;x<argc;x++,y++){
        a[y]=atof(argv[x]);
    }
        int i;
        int min=a[0];
        for(i=0;i<argc;i++){
        if (min>a[i]){
        min=a[i];
    }
    }
    printf("%d \n",min);
    return 0;
}
