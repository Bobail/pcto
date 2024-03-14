#include <stdio.h>

char login_stander()
{
    char password[30];
    char nome_account[30];
    char nome[30];
    char cognome[30];
    char accesso[] = "si";
    char scelta_login[15];
    char telefono[20];
    char email[20];
    int giorno;
    int mese;
    int anno;
    
    printf("\nInserisci il tuo nome e cognome?\n\n\n Nome:  Cognome:\n\n");
    scanf("%s %s", nome, cognome);
    printf("\nInserisci la tua data di nascita\ngg_mm_aaaa\n");
    scanf("%d %d %d", &giorno, &mese, &anno);
    printf("\nInserisci il nome del account: ");
    scanf("%s", nome_account);
    printf("\nInserisci il numero di telefono: ");
    scanf("%s", telefono);
    printf("\nInserisci l'email personale: ");
    scanf("%s", email);
    printf("\nInserisci il password: ");
    scanf("%s", password);

}




char login_utente()
{
    char password[30];
    char nome_account[30];
    char nome[30];
    char cognome[30];
    char accesso[] = "si";
    char scelta_login[] = "si";
    int giorno;
    int mese;
    int anno;
    
    printf("\nInserisci il tuo nome e cognome?\n\nNome:  Cognome:\n\n");
    scanf("%s %s", nome, cognome);
    printf("\nInserisci la tua data di nascita\n gg_mm_aaaa\n");
    scanf("%d %d %d", &giorno, &mese, &anno);
    printf("\nInserisci il nome del account\n\n");
    scanf("%s", nome_account);
    printf("\nInserisci la password: ");
    scanf("%s", password);
     

}




int main()
{
    printf("Benvenuto! questa é Qskip!\nl'app perfetta per chi non vuole fare le lunghe file\n\n");
    printf("evitati anche tu ore in piedi comprando il tuo posto in fila!\n\n");
    printf("oppure guadagna anche tu solamente stando in piedi!\n\n");
    
    char si[] = "si";
    char no[] = "no";
    char scelta_opening[25];
    printf("Vuoi far parte anche tu di Qskip?\n\n");
    scanf("%s", scelta_opening);
    if(si[0] == scelta_opening[0])
    {
        char utente[] = "utente";
        char stander[] = "stander";
        char risposta[50];

         
        printf("perfetto!, vuoi essere un utente o uno stander?\n");
        scanf("%s", risposta);
        if((risposta[0] == utente[0]) && (risposta[1] == utente[1]) && (risposta[2] == utente[2]) && (risposta[3] == utente[3]) && (risposta[4] == utente[4]) && risposta[5] == utente[5])
        {
            printf("hai scelto di essere un nuovo utente!\n\nadesso puoi fare la fila ovunque dal divano di casa tua!\n\nprima peró devi fare il login!\n\n");
            login_utente();
            printf("\ngrandioso! adesso puoi comprare posti in fila\n\n");
            
            
        }
        else if(risposta[0] == stander[0] && risposta[1] == stander[1] && risposta[2] == stander[2] && risposta[3] == stander[3] && risposta[4] == stander[4] && risposta[5] == stander[5] && risposta[6] == stander[6])
        {
            
            printf("\ngrandioso! hai scelto di essere uno stander!\n\nadesso puoi iniziare a guadagnare solamente stando in piedi!\n\nprima peró devi fare il login.\n\n");
            login_stander();
            printf("\nhai completato il login!\n");
        }
        
        else
        {
            printf("Errore dell'inserimento\n\n");
        }
    

    }
    else if(no[0] == scelta_opening[0])
    {
        printf("sperando Lei ritorna\n");
    }
}