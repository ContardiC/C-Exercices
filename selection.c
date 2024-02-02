#include<stdio.h>
int main(){
    // dichiaro e iniz
    int a = 4, b =3;
    // stampare il numero maggiore tra A e B
    if(a > b){
        printf("%d\n",a);
    }else{
        if(a == b){
            printf("I numeri sono uguali! \n");
        }else{
            printf("%d\n",b);
        }
    }

    /*
    Premi 1 per somma 
    Premi 2 per differenza
    Premi 3 per moltiplicazione
    */
   int opt;
   printf(" Premi 1 per somma \n Premi 2 per differenza\n Premi 3 per moltiplicazione\n");
   scanf("%d",&opt);
   
   switch(opt){
    case 1:
    //  somma
    break;
    case 2:
    // differenza
    break;
    case 3:
    // moltiplicazione
    break;
    default:
    // gestisci eccezzione
   }
}

