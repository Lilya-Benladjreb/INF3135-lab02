#include <stdio.h>

int compterLongueur(char *argument[]){
    int i=0;
    int compteur;

    while(argument[i] != '\0'){
        compteur += compteur;
    }

    printf("\"%s\" est de longueur %d \n", argument, compteur);

    return 0;
}

int main(int argc, char *argv[]) {
    int compteur;
    
    if(argc == 1 || argc >= 3){
        printf("\nErreur: le programme prend exactement un argument");
        return 1;
    }else{
        compterLongueur(argv[1]);
    }

    return 0;
}
