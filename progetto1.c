#include <stdio.h>





char pagina_utente()
{
    // int online = 1;
    // int inserimento;
    // while(online = 1)
    // {
    //     printf("\nOrdinamento della fila              C            ");
    //     scanf("%s", inserimento);
    // }

}


char pagina_stander()
{

}
char sign_in()
{
    char password[30];
    char nome_signin[30];
    printf("\nInserisci il nome o email del account e password\n");
    printf("\nInserisci il nome del account o l'email personale: ");
    scanf("%s", nome_signin);
    printf("\nInserisci il password: ");
    scanf("%s", password);
    printf("\n\n\nInserimento successo...\n");
}

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
    int q = 0;
    printf("Benvenuto! questa é Qskip!\nl'app perfetta per chi non vuole fare le lunghe file\n\n");
    printf("evitati anche tu ore in piedi comprando il tuo posto in fila!\n\n");
    printf("oppure guadagna anche tu solamente stando in piedi!\n\n");
    while(q == 0)
    {
        char scelta_opening[25];
        printf("Vuoi far parte anche tu di Qskip?\n\n");
        scanf("%s", scelta_opening);
        if('s' == scelta_opening[0] || 'S' ==scelta_opening[0])
        {
            q++;
            char equal[4];
            while(q == 1)
            {
                printf("hai giá un account?\n");
                scanf("%s", equal);
                if((equal[0] == 'n') && (equal[1] == 'o'))
                {
                    q++;
                    char utente[] = "utente";
                    char stander[] = "stander";
                    char risposta[50];
                    
                    
                    while(q == 2)
                    {
                        printf("\nperfetto!, vuoi essere un utente o uno stander?\n");
                        scanf("%s", risposta);
                        if(risposta[0] == 'u' && risposta[1] == 't' && risposta[2] == 'e' && risposta[3] == 'n' && risposta[4] == 't' && risposta[5] == 'e')
                        {
                            printf("hai scelto di essere un nuovo utente!\n\nadesso puoi fare la fila ovunque dal divano di casa tua!\n\nprima peró devi fare il login!\n\n");
                            login_utente();
                            printf("\ngrandioso! adesso puoi comprare posti in fila\n\n");   
                            q++;
                        }
                        else if(risposta[0] == 's' && risposta[1] == 't' && risposta[2] == 'a' && risposta[3] == 'n' && risposta[4] == 'd' && risposta[5] == 'e' && risposta[6] == 'r')
                        {
                            
                            printf("\ngrandioso! hai scelto di essere uno stander!\n\nadesso puoi iniziare a guadagnare solamente stando in piedi!\n\nprima peró devi fare il login.\n\n");
                            login_stander();
                            printf("\nhai completato il login!\n");
                            q++;
                            
                        }
                        
                        else
                        {
                            printf("\nErrore dell'inserimento\n\n");
                        }
                    }
                }
                else if((equal[0] == 's') && (equal[1] == 'i'))
                {
                    q++;
                    printf("\necco il sign in del account:\n");
                    sign_in();
                }   
                
                else
                {
                    printf("Errore dell'inserimento\n");
                }
                
            }
            
        }
        else if('n' == scelta_opening[0] || 'N' == scelta_opening[0])
        {
            printf("Speriamo di rivederti presto\n");
        }
        else
        {
            printf("Errore della risposta\n");
        }
    }
}