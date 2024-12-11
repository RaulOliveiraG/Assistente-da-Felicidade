#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void sleep_ms(int ms){usleep(ms * 1000);}

void triste() {
    setlocale(LC_ALL, "Portuguese");
    char resposta[1000], resposta1[1000], desabafo[1000];
    int valido = 0;

    printf("\t\tOlá! Eu sou o seu assistente pessoal da felicidade.\n\n");
    printf("Como está indo o seu dia hoje"); sleep_ms(600); printf("?");sleep_ms(150); printf("?");	sleep_ms(150); printf("?");	printf("\t");	

    while (!valido) {
        fgets(resposta, sizeof(resposta), stdin);
        resposta[strcspn(resposta, "\n")] = 0;
													printf("\n");
													sleep_ms(300);
        if (isalpha(resposta[0])) {
            for (int i = 0; resposta[i]; i++) {
                resposta[i] = tolower(resposta[i]);
            }

            if (strstr(resposta, "bom") != NULL||strstr(resposta, "melhor") != NULL||strstr(resposta, "bem") != NULL|| strstr(resposta, "otimo") != NULL|| strstr(resposta, "perfeito") != NULL|| strstr(resposta, "excelente") != NULL|| strstr(resposta, "maravilhoso") != NULL|| strstr(resposta, "magnifico") != NULL|| strstr(resposta, "sublime") != NULL|| strstr(resposta, "formidavel") != NULL|| strstr(resposta, "extraordinario") != NULL|| strstr(resposta, "superior") != NULL|| strstr(resposta, "esplendido") != NULL|| strstr(resposta, "notavel") != NULL|| strstr(resposta, "inigualavel") != NULL|| strstr(resposta, "supremo") != NULL|| strstr(resposta, "excepcional") != NULL|| strstr(resposta, "ótimo") != NULL|| strstr(resposta, "magnífico") != NULL|| strstr(resposta, "formidável") != NULL|| strstr(resposta, "extraordinário") != NULL|| strstr(resposta, "esplêndido") != NULL|| strstr(resposta, "notável") != NULL|| strstr(resposta, "iniguálavel") != NULL|| strstr(resposta, "Ótimo") != NULL|| strstr(resposta, "magnÍfico") != NULL|| strstr(resposta, "formidÁvel") != NULL|| strstr(resposta, "extraordinÁrio") != NULL|| strstr(resposta, "esplÊndido") != NULL|| strstr(resposta, "notÁvel") != NULL|| strstr(resposta, "iniguÁlavel") != NULL) {
                sleep_ms(300);
				const char *responses[] = {"Que ótimo, e você tem ficado muito triste?", "Que beleza, espero que continue assim, mas vc tem ficado muito triste nos últimos tempos?"};//pode-se colocar mais mensagens seguindo esse padrão
                srand(time(NULL));
                printf("%s\n", responses[rand() % 2]);
                valido = 1;
            } else if (strstr(resposta, "mal") != NULL ||strstr(resposta, "pior") != NULL|| strstr(resposta, "cu") != NULL|| strstr(resposta, "lento") != NULL|| strstr(resposta, "devagar") != NULL|| strstr(resposta, "paia") != NULL|| strstr(resposta, "chato") != NULL|| strstr(resposta, "ruim") != NULL|| strstr(resposta, "merda") != NULL|| strstr(resposta, "horroroso") != NULL|| strstr(resposta, "horrivel") != NULL|| strstr(resposta, "pessimo") != NULL|| strstr(resposta, "terrivel") != NULL|| strstr(resposta, "atroz") != NULL|| strstr(resposta, "desumano") != NULL|| strstr(resposta, "impiedoso") != NULL|| strstr(resposta, "abominavel") != NULL|| strstr(resposta, "repugnante") != NULL|| strstr(resposta, "deploravel") != NULL|| strstr(resposta, "intolerante") != NULL|| strstr(resposta, "medonho") != NULL|| strstr(resposta, "pavoroso") != NULL|| strstr(resposta, "monstruoso") != NULL|| strstr(resposta, "menos") != NULL|| strstr(resposta, "razoavel") != NULL|| strstr(resposta, "medio") != NULL|| strstr(resposta, "mediano") != NULL|| strstr(resposta, "moderado") != NULL|| strstr(resposta, "relativo") != NULL|| strstr(resposta, "nem bem nem mal") != NULL|| strstr(resposta, "horrível") != NULL|| strstr(resposta, "péssimo") != NULL|| strstr(resposta, "terrível") != NULL|| strstr(resposta, "abominável") != NULL|| strstr(resposta, "deplorável") != NULL|| strstr(resposta, "intolerável") != NULL|| strstr(resposta, "razoável") != NULL|| strstr(resposta, "médio") != NULL|| strstr(resposta, "horrÍvel") != NULL|| strstr(resposta, "pÉssimo") != NULL|| strstr(resposta, "terrÍvel") != NULL|| strstr(resposta, "abominÁvel") != NULL|| strstr(resposta, "deplorÁvel") != NULL|| strstr(resposta, "intolerÁvel") != NULL|| strstr(resposta, "razoÁvel") != NULL|| strstr(resposta, "mÉdio") != NULL) {
                sleep_ms(300);
				const char *responses[] = {"Poxa, que coisa chata, mas vc está triste?","espero que melhore, mas vc está triste?"};//pode-se colocar mais mensagens seguindo esse padrão
				srand(time(NULL));
                printf("%s\n", responses[rand() % 2]);
                valido = 1;
            } else if (strstr(resposta, "para") != NULL||strstr(resposta, "parar") != NULL||strstr(resposta, "pare") != NULL||strstr(resposta, "interromper") != NULL||strstr(resposta, "interrompa") != NULL||strstr(resposta, "cessar") != NULL||strstr(resposta, "cesse") != NULL||strstr(resposta, "suspender") != NULL||strstr(resposta, "suspenda") != NULL||strstr(resposta, "deter") != NULL||strstr(resposta, "detenha") != NULL||strstr(resposta, "detenha se") != NULL||strstr(resposta, "bloquear") != NULL||strstr(resposta, "travar") != NULL||strstr(resposta, "trave") != NULL||strstr(resposta, "detenhase") != NULL||strstr(resposta, "deteha-se") != NULL) {
                printf("Me desculpa ter te encomodado\n");
                return;
            } else if (strstr(resposta, "normal") != NULL|| strstr(resposta, "comum") != NULL|| strstr(resposta, "habitual") != NULL|| strstr(resposta, "regular") != NULL|| strstr(resposta, "ordinario") != NULL|| strstr(resposta, "padrao") != NULL|| strstr(resposta, "convencional") != NULL|| strstr(resposta, "usual") != NULL|| strstr(resposta, "frequente") != NULL|| strstr(resposta, "rotineiro") != NULL|| strstr(resposta, "corrente") != NULL|| strstr(resposta, "tradicional") != NULL|| strstr(resposta, "costumeiro") != NULL|| strstr(resposta, "ordinário") != NULL|| strstr(resposta, "ordinÁrio") != NULL|| strstr(resposta, "padrão") != NULL|| strstr(resposta, "padrÃo") != NULL) {
                const char *responses[] = {"eu não posso considerar essa palavra,'este meio termo não me vale como resposta.'"};
                srand(time(NULL));
                printf("%s\n", responses[rand() % 1]);//caso deseje adicionar mais respostas aumente o numero e siga o pradrao dos else if acima
            } else {
                printf("Essa palavra é muito complicada para mim talvez tenha um numero ou um acento que eu não sei ultilizar. Tente novamente com palavras como 'bom, 'ruim', 'normal', 'mais ou menos', entre muitas outras.\n");
            }
        }
    }
	printf("\n");
    valido--;
    while (!valido) {
        fgets(resposta1, sizeof(resposta1), stdin);
        resposta1[strcspn(resposta1, "\n")] = 0;

        if (isalpha(resposta1[0])) {
            for (int i = 0; resposta1[i]; i++) {
                resposta1[i] = tolower(resposta1[i]);
            }

            if (strstr(resposta1, "sim") != NULL|| strstr(resposta1, "s") != NULL|| strstr(resposta1, "claro") != NULL|| strstr(resposta1, "com certeza") != NULL|| strstr(resposta1, "certamente") != NULL|| strstr(resposta1, "concordo") != NULL|| strstr(resposta1, "confirmado") != NULL|| strstr(resposta1, "exatamente") != NULL|| strstr(resposta1, "verdade") != NULL) {
                sleep_ms(300); 
                printf("\n");
				const char *responses[] = {"Poxa, que coisa chata","espero que melhore"};//pode-se colocar mais mensagens seguindo esse padrão
				srand(time(NULL));
                printf("%s\n", responses[rand() % 2]);
                valido = 1;
            } else if (strstr(resposta1, "não") != NULL || strstr(resposta1, "n") != NULL|| strstr(resposta1, "nao") != NULL|| strstr(resposta1, "mais ou menos") != NULL|| strstr(resposta1, "nunca") != NULL|| strstr(resposta1, "nem") != NULL|| strstr(resposta1, "jamais") != NULL|| strstr(resposta1, "mais ou menos") != NULL|| strstr(resposta1, "razoavel") != NULL|| strstr(resposta1, "medio") != NULL|| strstr(resposta1, "mediano") != NULL|| strstr(resposta1, "moderado") != NULL|| strstr(resposta1, "relativo") != NULL|| strstr(resposta1, "nem bem nem mal") != NULL) {
                sleep_ms(300);
                printf("\n");
				const char *responses[] = {"Que ótimo", "Que beleza, espero que continue assim"};//pode-se colocar mais mensagens seguindo esse padrão
				srand(time(NULL));
                printf("%s\n", responses[rand() % 2]);
                valido = 1;
             } else if (strstr(resposta1, "para") != NULL||strstr(resposta1, "parar") != NULL||strstr(resposta1, "pare") != NULL||strstr(resposta1, "interromper") != NULL||strstr(resposta1, "interrompa") != NULL||strstr(resposta1, "cessar") != NULL||strstr(resposta1, "cesse") != NULL||strstr(resposta1, "suspender") != NULL||strstr(resposta1, "suspenda") != NULL||strstr(resposta1, "deter") != NULL||strstr(resposta1, "detenha") != NULL||strstr(resposta1, "detenha se") != NULL||strstr(resposta1, "bloquear") != NULL||strstr(resposta1, "travar") != NULL||strstr(resposta1, "trave") != NULL||strstr(resposta1, "detenhase") != NULL||strstr(resposta1, "deteha-se") != NULL) {
                printf("\n");
				printf("Me desculpa ter te encomodado\n");
                return;
            } else if (strstr(resposta, "normal") != NULL|| strstr(resposta, "comum") != NULL|| strstr(resposta, "habitual") != NULL|| strstr(resposta, "regular") != NULL|| strstr(resposta, "ordinario") != NULL|| strstr(resposta, "padrao") != NULL|| strstr(resposta, "convencional") != NULL|| strstr(resposta, "usual") != NULL|| strstr(resposta, "frequente") != NULL|| strstr(resposta, "rotineiro") != NULL|| strstr(resposta, "corrente") != NULL|| strstr(resposta, "tradicional") != NULL|| strstr(resposta, "costumeiro") != NULL|| strstr(resposta, "ordinário") != NULL|| strstr(resposta, "ordinÁrio") != NULL|| strstr(resposta, "padrão") != NULL|| strstr(resposta, "padrÃo") != NULL) {
                const char *responses[] = {"eu não posso considerar essa palavra,'este meio termo não me vale como resposta.'"};
                srand(time(NULL));
                printf("%s\n", responses[rand() % 1]);//caso deseje adicionar mais respostas aumente o numero e siga o pradrao dos else if acima
            } else {
            	printf("\n");
                printf("Essa palavra é muito complicada para mim talvez tenha um numero ou um acento que eu não sei ultilizar. Tente novamente com palavras como 'sim', 'não' ou 'mais ou menos'.\n");
            }
            
        }
    }
    			sleep_ms(600);
                printf("\n espero ter ajudado você, aqui em baixo você pode desabafar sobre seus problemas, escrever um pouco pode te ajudar \n");sleep(0.5); printf("-");sleep_ms(100); printf("-");sleep_ms(100); printf("-");sleep_ms(100); printf("-");sleep_ms(100); printf("-");sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-"); sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(100); printf("-");	sleep_ms(100); printf("-");sleep_ms(150); printf("-");	sleep_ms(150); printf("-");	printf("\n\t\t\t"); sleep_ms(150); printf("|");printf("\n\t\t\t"); sleep_ms(150); printf("V"); printf("\n\t\t\t");
	fgets(desabafo, sizeof(desabafo), stdin);
        desabafo[strcspn(desabafo, "\n")] = 0;
        
        printf("\n\t infelizmente eu não posso te ajudar com isso, ainda sou muito limitado :(");
		sleep(3);
		printf(ANSI_COLOR_RED "\n\n\nMensagem final\t\t Até outra vez"ANSI_COLOR_RESET"\n");
    
}

int main() {
    triste();
    system("pause");
 return 0;
}