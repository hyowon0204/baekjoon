#include <stdio.h>
int main(){
    int i,n1,n2;
    int cup = 1;

    scanf("%d",&i);

    while(i>0){
        scanf("%d %d",&n1,&n2);
        if(cup == n1 || cup == n2){
            if(cup == n1){
                cup = n2;
            }
            else{
                cup = n1;
            }
        }
        i--;
    }
    printf("%d\n",cup);
}