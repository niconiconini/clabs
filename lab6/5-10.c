#include <stdio.h>
#include <math.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
void ungets(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
int getop(char s[])
{
    int i,c;
    while((s[0]=c=getch())==' '||c=='\t');
    s[1]='\0';
    if(isdigit(c)&&c!='.')
    return c;
    i=0;
    if(isdigit(c))
    while(isdigit(s[++i]=c=getch()));
    if(c=='.');
    while(isdigit(s[++i]=c=getch()));
    s[i]='\0';
    if(c!=EOF)
    ungetch(c);
    return NUMBER;
}

int main(int argc,char *argv[]){
    char s[MAXOP];
    double op2;
    while(--argc>0){
        ungets(" ");
        ungets(*++argv);
        switch(getop(s)){
            case NUMBER:
            push(atof(s));
            break;
            case'+':
            push(pop()+pop());
            break;
            case '*':
            push(pop()*pop());
            break;
            case '-':
            op2=pop();
            push(pop()-op2);
            break;
            case '/':
            op2=pop();
            if(op2!=0.0)
            push(pop()/op2);
            else
            printf("error:zero divisor\n");
            break;
            default:
            printf("error:unknown command %s\n",s);
           argv=1;
            break;
        }
    }
    printf("\t%.8g\n",pop());
    return 0;
}
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
    {
        printf("error:stack full,can't push %g\n", f);
    }
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error:stack empty\n");
        return 0.0;
    }
}
int getop(char s[])
{
    if (*s> '9' || *s < '0')
        return *s;
    else
        return NUMBER;
}