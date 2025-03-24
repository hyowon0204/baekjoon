#include <stdio.h>
int main(){

    int a;
    int n1,n2;
    scanf("%d",&a);

    while(a>0){
        scanf("%d %d",&n1,&n2);
        if(n1>=n2){
            printf("MMM BRAINS\n");
        }else{
            printf("NO BRAINS\n");
        }
        a--;
    }

}