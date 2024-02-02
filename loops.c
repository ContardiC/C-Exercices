#include<stdio.h>
int main(){
    
    // stampo i primi 10 numeri naturali
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }
    i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);

    return 0;
}