#include <stdio.h>

int compterLongueur(char argument[]){
    int i = 0;
    int compteur = 0;

    for (i = 0; argument[i] != '\0'; ++i){
        compteur ++;
    }

    printf("\"%s\" est de longueur %d \n", argument, compteur);

    return 0;
}

int main(int argc, char *argv[]) {    
    if(argc == 1 || argc >= 3){
        printf("\nErreur: le programme prend exactement un argument");
        return 1;
    }else{
        compterLongueur(argv[1]);
    }

    return 0;
}
