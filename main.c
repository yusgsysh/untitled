#include <stdio.h>
#define MAXSIZE 100

typedef  int  DataType;
typedef  struct
{   DataType  data[MAXSIZE];
    int  top;
}SeqStack;

void zhuanhuan (int a,int b){
    SeqStack q;
    q.top=-1;
    do{
        q.data[++q.top]=a%b;
        a=a/b;
    }while(a!=0);

    for(;q.top>=0;q.top--){
        printf("%d",q.data[q.top]);
    }
}

int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    zhuanhuan(a,b);
}
