#include <stdio.h>
#include <stdlib.h>


int main(){


    FILE *monFichier;
    char turn[100];
    //int signe=0; // le signe est +
    //int signe=1; //le signe est -
    //char carac[];


    monFichier=fopen("01.input","r");

    while (fgets(turn,sizeof(turn) ,monFichier))
    {
        
        printf(" le caractère 1er de ");
        printf("%s\n",turn);
        
        //printf(" %c\n",turn[0]);

        if(turn[0]=='R'){
            printf("right");

        }

        else{
            printf("left");
        }

    }
    

    





    //fgets(turn,sizeof(turn),monFichier)

    //fscanf(monFichier,"%s",&turn[]);

    //printf("%c\n", turn[3]);

    //fclose(monFichier);




    



    return 0;
}