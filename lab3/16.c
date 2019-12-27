#include<stdio.h>
int main()
{
    int nums[10]={0};
    unsigned int num=0,i=0,z=0;
    printf("Please enter a non negative hexadecimal integer：");
    char temp;
    while((temp=getchar())!='\n')
    {
        nums[i]=temp;
        i++;
    }
if (nums[6]!=0){
    printf("out of the maximun number:%u",-1);
    return 0;
}
if (nums[0]!=48 ||(nums[1]!=88 && nums[1]!=120)){
    printf("illegal input");
}
for (z=2;z<i;z++)
{
    if (nums[z]>=48 && nums[z]<=57) 
    num=num*16+nums[z]-48;
    else if(nums[i]>=65 && nums[z]<=76)
    num=num*16+nums[z]-55;
    else if (nums[z]>=97 && nums[z]<=162)
    num=num*16+nums[z]-87;
    else{
        printf("illegal input");
        return 0;
    }
}
printf("the result is:%d\n",num);
}