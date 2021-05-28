/*
 * Trabalho Desenvolvida pela Disciplica de Compiladores do Bacharelado em Ciencia da Computacao - UNESP Bauru
 * Autor: Joao Vitor Mariano Correia
 * RA: 191024929
 * 
 * Sistema Operacional: Windows 10 Home 20H2 64Bits
 * Compilador: gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

void ERRO(int linha)
{
    printf("\n\n[ERRO] Ocorre um erro na linha %d. Aperte qualquer tecla para matar o processo", linha);
    fflush(stdin);
    getchar();
    exit(0);
}

void CODIGO(char lexema[])
{
    if (!strcmp(lexema, "absolute"))
    {
        printf(" 1");
    }
    else if (!strcmp(lexema, "and"))
    {
        printf(" 2");
    }
    else if (!strcmp(lexema, "array"))
    {
        printf(" 3");
    }
    else if (!strcmp(lexema, "begin"))
    {
        printf(" 4");
    }
    else if (!strcmp(lexema, "case"))
    {
        printf(" 5");
    }
    else if (!strcmp(lexema, "const"))
    {
        printf(" 6");
    }
    else if (!strcmp(lexema, "div"))
    {
        printf(" 7");
    }
    else if (!strcmp(lexema, "do"))
    {
        printf(" 8");
    }
    else if (!strcmp(lexema, "downto"))
    {
        printf(" 9");
    }
    else if (!strcmp(lexema, "else"))
    {
        printf(" 10");
    }
    else if (!strcmp(lexema, "end"))
    {
        printf(" 11");
    }
    else if (!strcmp(lexema, "external"))
    {
        printf(" 12");
    }
    else if (!strcmp(lexema, "file"))
    {
        printf(" 13");
    }
    else if (!strcmp(lexema, "for"))
    {
        printf(" 14");
    }
    else if (!strcmp(lexema, "forward"))
    {
        printf(" 15");
    }
    else if (!strcmp(lexema, "function"))
    {
        printf(" 16");
    }
    else if (!strcmp(lexema, "goto"))
    {
        printf(" 17");
    }
    else if (!strcmp(lexema, "if"))
    {
        printf(" 18");
    }
    else if (!strcmp(lexema, "implementation"))
    {
        printf(" 19");
    }
    else if (!strcmp(lexema, "in"))
    {
        printf(" 20");
    }
    else if (!strcmp(lexema, "inline"))
    {
        printf(" 21");
    }
    else if (!strcmp(lexema, "interface"))
    {
        printf(" 22");
    }
    else if (!strcmp(lexema, "interrupt"))
    {
        printf(" 23");
    }
    else if (!strcmp(lexema, "label"))
    {
        printf(" 24");
    }
    else if (!strcmp(lexema, "mod"))
    {
        printf(" 25");
    }
    else if (!strcmp(lexema, "nil"))
    {
        printf(" 26");
    }
    else if (!strcmp(lexema, "not"))
    {
        printf(" 27");
    }
    else if (!strcmp(lexema, "of"))
    {
        printf(" 28");
    }
    else if (!strcmp(lexema, "or"))
    {
        printf(" 29");
    }
    else if (!strcmp(lexema, "packed"))
    {
        printf(" 30");
    }
    else if (!strcmp(lexema, "procedure"))
    {
        printf(" 31");
    }
    else if (!strcmp(lexema, "program"))
    {
        printf(" 32");
    }
    else if (!strcmp(lexema, "record"))
    {
        printf(" 33");
    }
    else if (!strcmp(lexema, "repeat"))
    {
        printf(" 34");
    }
    else if (!strcmp(lexema, "set"))
    {
        printf(" 35");
    }
    else if (!strcmp(lexema, "shl"))
    {
        printf(" 36");
    }
    else if (!strcmp(lexema, "shr"))
    {
        printf(" 37");
    }
    else if (!strcmp(lexema, "string"))
    {
        printf(" 38");
    }
    else if (!strcmp(lexema, "then"))
    {
        printf(" 39");
    }
    else if (!strcmp(lexema, "to"))
    {
        printf(" 40");
    }
    else if (!strcmp(lexema, "type"))
    {
        printf(" 41");
    }
    else if (!strcmp(lexema, "unit"))
    {
        printf(" 42");
    }
    else if (!strcmp(lexema, "until"))
    {
        printf(" 43");
    }
    else if (!strcmp(lexema, "uses"))
    {
        printf(" 44");
    }
    else if (!strcmp(lexema, "var"))
    {
        printf(" 45");
    }
    else if (!strcmp(lexema, "while"))
    {
        printf(" 46");
    }
    else if (!strcmp(lexema, "with"))
    {
        printf(" 47");
    }
    else if (!strcmp(lexema, "xor"))
    {
        printf(" 48");
    }
    else if (!strcmp(lexema, "."))
    {
        printf(" 49");
    }
    else if (!strcmp(lexema, ";"))
    {
        printf(" 50");
    }
    else if (!strcmp(lexema, ","))
    {
        printf(" 51");
    }
    else if (!strcmp(lexema, "("))
    {
        printf(" 52");
    }
    else if (!strcmp(lexema, ")"))
    {
        printf(" 53");
    }
    else if (!strcmp(lexema, ":"))
    {
        printf(" 54");
    }
    else if (!strcmp(lexema, "="))
    {
        printf(" 55");
    }
    else if (!strcmp(lexema, "<"))
    {
        printf(" 56");
    }
    else if (!strcmp(lexema, ">"))
    {
        printf(" 57");
    }
    else if (!strcmp(lexema, "+"))
    {
        printf(" 58");
    }
    else if (!strcmp(lexema, "-"))
    {
        printf(" 59");
    }
    else if (!strcmp(lexema, "*"))
    {
        printf(" 60");
    }
    else if (!strcmp(lexema, ":="))
    {
        printf(" 61");
    }
    else if (!strcmp(lexema, "(*"))
    {
        printf(" 62");
    }
    else if (!strcmp(lexema, "*)"))
    {
        printf(" 63");
    }
    else if (!strcmp(lexema, "integer"))
    {
        printf(" 64");
    }
    else if (!strcmp(lexema, "real"))
    {
        printf(" 65");
    }
    else if (!strcmp(lexema, "char"))
    {
        printf(" 66");
    }
    else if (!strcmp(lexema, "string"))
    {
        printf(" 67");
    }
    else if (!strcmp(lexema, "boolean"))
    {
        printf(" 68");
    }
    // Numerico
    else if (lexema[0] >= 48 && lexema[0] <= 57)
    {
        printf(" 69");
    }
    //Identificador
    else if ((lexema[0] >= 65 && lexema[0] <= 90) || (lexema[0] >= 97 && lexema[0] <= 122))
    {
        printf(" 70");
    }
    return;
}

void PROXIMO(FILE *input, char lexema[], int linha)
{
    char ch, aux[MAX];
    memset(aux, 0, sizeof(aux));
    ch = fgetc(input);

    // Verifica o fim do arquivo
    if (ch == EOF) 
    {
        return;
    }
    // Verifica se o caractere eh um simbolo especial
    else if (ch == ' ' || ch == '\n' || (ch >= 40 && ch <= 45) || (ch >= 58 && ch <= 62))
    {
        if (ch == 61)
        {
            if (!strcmp(lexema, ":"))
            {
                printf(" 61");
                memset(lexema, 0, sizeof(lexema));
                PROXIMO(input, lexema, linha);
                ch = NULL;
            }
        }
        CODIGO(lexema);
        memset(lexema, 0, sizeof(lexema));
        aux[0] = ch;
        strcat(lexema, aux);
        if (ch == 58)
            PROXIMO(input, lexema, linha);
        CODIGO(lexema);
        memset(lexema, 0, sizeof(lexema));
        if (ch == '\n')
        {
            linha++;
            printf("\n%-5d", linha);
        }
    }
    // Verifica se o caractere eh uma letra
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        if (lexema[0] >= 48 && lexema[0] <= 57)
        {
            ERRO(linha);
        }
        else
        {
            aux[0] = ch;
            strcat(lexema, aux);
        }
    }
    // Verifica se o caractere eh um numero
    else if (ch >= 48 && ch <= 57)
    {
        aux[0] = ch;
        strcat(lexema, aux);
    }
    else if ((ch >= 33 && ch <= 39) || ch == 63 || ch == 64 || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) {
        ERRO(linha);
    }

    PROXIMO(input, lexema, linha);
    return;
}

int main()
{
    FILE *input;
    char lexema[MAX];
    int linha = 1;
    memset(lexema, 0, sizeof(lexema));
    input = fopen("Trab1_Compiladores.txt", "r");
    if (input == NULL)
    {
        printf("Erro ao ler o arquivo\n");
        printf("\n\nAperte qualquer tecla para encerrar.");
        fflush(stdin);
        getchar();
        return 0;
    }
    else
    {
        printf("%-5d", 1);
        PROXIMO(input, lexema, linha);
    }
    fclose(input);
    printf("\n\n[OK] Aperte qualquer tecla para encerrar.");
    fflush(stdin);
    getchar();
    return 0;
}