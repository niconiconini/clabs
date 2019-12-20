#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int i,int min;
    double a[100];
    int x=1;
    int y=0
    for(x=1;x<argc;x++,y++){
        a[x] atof(argv[x]);
    }
    for(i=0,i<argc,i++){
    if (min>a[i]){
        a[i]=min}
    }
    printf("%d \n",min);
    return 0;
}
