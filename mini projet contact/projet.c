#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//*structure*//
typedef struct{
char nom[100];
char number[100];
char email[100];
}contact;
//*declaration des variables//*
    int i=0;
    contact c[100];
//*fonction d ecriture *//
void saisie(){
    int y;
do{
printf("entre le nom de user :");
scanf("%s",c[i].nom);
printf("entre le number de user :");
scanf("%s",c[i].number);
printf("entre l email de user :");
scanf("%s",c[i].email);
printf("est ce tu vas ajoute un antre contacat(si oui click 1,si non click 0):");
scanf("%d",&y);
i++;
}while(y==1);
}
//*fonction d affichage//*
void afficher(){
    int j;
for(j=0;j<i;j++){
printf("les formation de %d user est :\n",j+1);
printf("le nom de user :%s \n",c[j].nom);
printf("le number de user est :%s \n",c[j].number);
printf("l email de user :%s \n",c[j].email);
}  }
//*modifier  les informations //*
void modifier(){
    char contactp[100];
    int m,n;
    n=0;
    modfier:
printf("entre le nom de contact : ");
scanf("%s",contactp);
for(int u=0;u<i;u++){
    if(strcmp(c[u].nom,contactp)==0){
        n==u;
        break;
    }
    else {
        goto modfier;
    }
}
printf("click 1 pour change le nom |\n");
printf("click 2 pour change le nemero de tel|\n");
printf("click 3 pour change l email |\n");
printf("entre :");
scanf("%d",&m);
if(m==1){
    printf("entre le neveau nom :");
    scanf("%s",c[n].nom);
    }
    else if(m==2){
printf("entre le neveau nemero :");
    scanf("%s",c[n].number);
    }
    else if(m==3){
        printf("entre le neveau email :");
        scanf("%s",c[n].email); 
        }
        else { printf("esseyaer ");
        goto modfier;    
        }   
}
//*recherche d un nom;
void recherche(){
    int s,a;
    char rech[100];
    printf("entre le nom de contact :");
    scanf("%s",rech);
for(s=0;s<=i;s++){
if(strcmp(c[s].nom,rech)==0){
    a=s;
break;
}
}
printf("le nom est :%s \n",c[a].nom);
printf("number est %s \n",c[a].number);
printf("l email est %s \n",c[a].email);

}
//*suprimer le contact*//
void suprimer(){
    char sup[100];
    int r,e;
printf("entre le nom de contact qui va suprimer: ");
scanf("%s",sup);
for(r=0;r<=i;r++){
    if(strcmp(c[r].nom,sup)==0){
        for(e=r;e<i-1;e++){
            strcpy(c[e].nom,c[e+1].nom);
            strcpy(c[e].email,c[e+1].email);
            strcpy(c[e].number,c[e+1].number);
    
        }
        i--;
        printf("le contact est suprimer \n");
    }else{
        printf(" le nom n est pas existe : essayer");
    }
}


}
//*main*//
int main(){
    //*menu//*
    int t,p;
    menu:
    printf("\n__________________________________________systeme de gestion de contact_______________________________________________________________\n \n");
printf("                                  pour demande une service entre la nombre qui correspond \n");
printf("         1. Ajouter un Contact                             2.  Afficher Tous les Contacts \n");
printf("         3. Modifier un Contact                            4. Rechercher un Contact \n");
printf("                               5. Supprimer un Contact \n");
printf("\n ________________________________________________________________________________________________________________________________________\n");
printf("entre :");
scanf("%d",&t);
switch(t){
    case 1:
saisie();
goto menu;
case 2:
afficher();
printf("click  1 pour retourne au menu \n click 2 pour fini le programme \n");
printf("entre :");
scanf("%d",&p);
switch(p)
case 1:{
goto menu;
case 2:
goto final;}
case 3:
modifier();
printf("click  1 pour retourne au menu \n click 2 pour fini le programme \n");
printf("entre :");
scanf("%d",&p);
switch(p)
case 1:{
goto menu;
case 2:
goto final;}
case 4:
recherche();
printf("click  1 pour retourne au menu \n click 2 pour fini le programme \n");
printf("entre :");
scanf("%d",&p);
switch(p)
case 1:{
goto menu;
case 2:
goto final;}
case 5:
suprimer();
            printf("click  1 pour retourne au menu \n click 2 pour fini le programme \n");
            printf("entre :");
            scanf("%d",&p);
switch(p)
case 1:{
goto menu;
case 2:
goto final;}
}
final:
printf("\n______________merci d avoir utiliser ce programme mini projet  stoker des contact SAS YOU CODE 2024__________________") ;
return 0;
}