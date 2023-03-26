#include <stdio.h>
#include "struct.h"
#include "funzione.h"

int main()
{


    int scelta;
    Data dataInizio;
    Data dataFine;

    do{
    printf("\nScegli opzione: ");
    printf("\n1.Conta i giorni che hai lavorato\n");
    printf("2.Esci\n");
    scanf("%d",&scelta);

    switch (scelta)
{
    case 1:
        printf("\nInserisci il giorno di inizio: ");
        while(scanf("%d",&dataInizio.giorno)!=1 || dataInizio.giorno <= 0 || dataInizio.giorno > 31)
        {
             printf("\nInserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        printf("\nInserisci il mese: ");
        while(scanf("%d",&dataInizio.mese)!=1 || dataInizio.mese <=0 || dataInizio.mese > 12)
        {
             printf("\nInserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        printf("\nInserisci l'anno: ");
        while(scanf("%d",&dataInizio.anno)!=1 || dataInizio.anno <=0)
        {
             printf("\nInserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        printf("\nInserisci il giorno finale: ");
        while(scanf("%d",&dataFine.giorno)!=1 || dataFine.giorno <=0 || dataFine.giorno > 31 )
        {
             printf("\nInserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        printf("\nInserisci il mese: ");
        while(scanf("%d",&dataFine.mese)!=1 || dataFine.mese <=0 || dataFine.mese > 12)
        {
             printf("\ninserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        printf("\nInserisci l'anno: ");
        while(scanf("%d",&dataFine.anno)!=1 || dataFine.anno <=0)
        {
             printf("\nInserisci numero correttamente: ");
             while(getchar()!='\n');
        }
        conta(dataInizio,dataFine);
        break;

        case 2:
        printf("Ciao!");
        break;

        default:
        printf("Input errato");
        return -1;
}
    
    
   
} while(scelta == 1);

return 0;

}






