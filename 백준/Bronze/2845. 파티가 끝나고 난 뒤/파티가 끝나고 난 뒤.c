#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a*b;
    int p1,p2,p3,p4,p5;
    scanf("%d %d %d %d %d",&p1,&p2,&p3,&p4,&p5);

    printf("%d %d %d %d %d\n",p1-c,p2-c,p3-c,p4-c,p5-c);

}