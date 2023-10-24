#include <stdio.h>
int main(){
    int x;
    printf("输入一个数\n");
    scanf("%d",&x);
    x = (x > 0) ? 2*x : (x == 0 ? 0 : -1);
    switch(x){
        case 0: printf("f(x)=0"); break;
        case -1: printf("f(x)=-1"); break;
        default: printf("f(x)=%d",x); break;
    }
    return 0;
}
