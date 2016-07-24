
#include<stdio.h>
int main(){
    int num,r,re=0;
    scanf("%d",&num);

    while(num){
         r=num%10;
         re=re*10+r;
         num=num/10;
    }

    printf("%d",re);
    return 0;
}
