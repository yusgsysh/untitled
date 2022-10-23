#include <stdio.h>
#define MAXSIZE 100

typedef  int  DataType;
typedef  struct
{   DataType  data[MAXSIZE];
    int  top;
}SeqStack;

void zhuanhuan (int a,int b){
    char ch[6]={'A','B','C','D','E','F'};
    SeqStack q;
    q.top=-1;
    do{
        q.data[++q.top]=a%b;
        a=a/b;
    }while(a!=0);

    for(;q.top>=0;q.top--){

        if(q.data[q.top]>9)printf("%c",ch[q.data[q.top]-10]);
        else printf("%d",q.data[q.top]);
    }
}

int main (){
    int a,b;
    printf("请输入数字和转换为几进制\n");
    scanf("%d %d",&a,&b);
    zhuanhuan(a,b);
}