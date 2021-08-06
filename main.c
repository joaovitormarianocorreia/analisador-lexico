/*
 * Trabalho Desenvolvida pela Disciplica de Compiladores do Bacharelado em Ciencia da Computacao - UNESP Bauru
 * Autor: Joao Vitor Mariano Correia
 * RA: 191024929
 * 
 * Sistema Operacional: Ubuntu 20.04.2 LTS 64Bits
 * Compilador: gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "T2.h"

// *****************************************************************************************************************
// *
// * Analisador Lexico
// *
// *****************************************************************************************************************

void ERRO(int linha) {
    printf("[ERRO] Ocorreu um erro na linha %d. Aperte qualquer tecla para matar o processo", linha);
    fflush(stdin);
    getchar();
    exit(0);
}

void CODIGO(char lexema[], FILE *output) {
    if (!strcmp(lexema, "absolute")) {
        fprintf(output," 1");
    }
    else if (!strcmp(lexema, "and")) {
        fprintf(output," 2");
    }
    else if (!strcmp(lexema, "array")) {
        fprintf(output," 3");
    }
    else if (!strcmp(lexema, "begin")) {
        fprintf(output," 4");
    }
    else if (!strcmp(lexema, "case")) {
        fprintf(output," 5");
    }
    else if (!strcmp(lexema, "const")) {
        fprintf(output," 6");
    }
    else if (!strcmp(lexema, "div")) {
        fprintf(output," 7");
    }
    else if (!strcmp(lexema, "do")) {
        fprintf(output," 8");
    }
    else if (!strcmp(lexema, "downto")) {
        fprintf(output," 9");
    }
    else if (!strcmp(lexema, "else")) {
        fprintf(output," 10");
    }
    else if (!strcmp(lexema, "end")) {
        fprintf(output," 11");
    }
    else if (!strcmp(lexema, "external")) {
        fprintf(output," 12");
    }
    else if (!strcmp(lexema, "file")) {
        fprintf(output," 13");
    }
    else if (!strcmp(lexema, "for")) {
        fprintf(output," 14");
    }
    else if (!strcmp(lexema, "forward")) {
        fprintf(output," 15");
    }
    else if (!strcmp(lexema, "function")) {
        fprintf(output," 16");
    }
    else if (!strcmp(lexema, "goto")) {
        fprintf(output," 17");
    }
    else if (!strcmp(lexema, "if")) {
        fprintf(output," 18");
    }
    else if (!strcmp(lexema, "implementation")) {
        fprintf(output," 19");
    }
    else if (!strcmp(lexema, "in")) {
        fprintf(output," 20");
    }
    else if (!strcmp(lexema, "inline")) {
        fprintf(output," 21");
    }
    else if (!strcmp(lexema, "interface")) {
        fprintf(output," 22");
    }
    else if (!strcmp(lexema, "interrupt")) {
        fprintf(output," 23");
    }
    else if (!strcmp(lexema, "label")) {
        fprintf(output," 24");
    }
    else if (!strcmp(lexema, "mod")) {
        fprintf(output," 25");
    }
    else if (!strcmp(lexema, "nil")) {
        fprintf(output," 26");
    }
    else if (!strcmp(lexema, "not")) {
        fprintf(output," 27");
    }
    else if (!strcmp(lexema, "of")) {
        fprintf(output," 28");
    }
    else if (!strcmp(lexema, "or")) {
        fprintf(output," 29");
    }
    else if (!strcmp(lexema, "packed")) {
        fprintf(output," 30");
    }
    else if (!strcmp(lexema, "procedure")) {
        fprintf(output," 31");
    }
    else if (!strcmp(lexema, "program")) {
        fprintf(output," 32");
    }
    else if (!strcmp(lexema, "record")) {
        fprintf(output," 33");
    }
    else if (!strcmp(lexema, "repeat")) {
        fprintf(output," 34");
    }
    else if (!strcmp(lexema, "set")) {
        fprintf(output," 35");
    }
    else if (!strcmp(lexema, "shl")) {
        fprintf(output," 36");
    }
    else if (!strcmp(lexema, "shr")) {
        fprintf(output," 37");
    }
    else if (!strcmp(lexema, "string")) {
        fprintf(output," 38");
    }
    else if (!strcmp(lexema, "then")) {
        fprintf(output," 39");
    }
    else if (!strcmp(lexema, "to")) {
        fprintf(output," 40");
    }
    else if (!strcmp(lexema, "type")) {
        fprintf(output," 41");
    }
    else if (!strcmp(lexema, "unit")) {
        fprintf(output," 42");
    }
    else if (!strcmp(lexema, "until")) {
        fprintf(output," 43");
    }
    else if (!strcmp(lexema, "uses")) {
        fprintf(output," 44");
    }
    else if (!strcmp(lexema, "var")) {
        fprintf(output," 45");
    }
    else if (!strcmp(lexema, "while")) {
        fprintf(output," 46");
    }
    else if (!strcmp(lexema, "with")) {
        fprintf(output," 47");
    }
    else if (!strcmp(lexema, "xor")) {
        fprintf(output," 48");
    }
    else if (!strcmp(lexema, ".")) {
        fprintf(output," 49");
    }
    else if (!strcmp(lexema, ";")) {
        fprintf(output," 50");
    }
    else if (!strcmp(lexema, ",")) {
        fprintf(output," 51");
    }
    else if (!strcmp(lexema, "(")) {
        fprintf(output," 52");
    }
    else if (!strcmp(lexema, ")")) {
        fprintf(output," 53");
    }
    else if (!strcmp(lexema, ":")) {
        fprintf(output," 54");
    }
    else if (!strcmp(lexema, "=")) {
        fprintf(output," 55");
    }
    else if (!strcmp(lexema, "<")) {
        fprintf(output," 56");
    }
    else if (!strcmp(lexema, ">")) {
        fprintf(output," 57");
    }
    else if (!strcmp(lexema, "+")) {
        fprintf(output," 58");
    }
    else if (!strcmp(lexema, "-")) {
        fprintf(output," 59");
    }
    else if (!strcmp(lexema, "*")) {
        fprintf(output," 60");
    }
    else if (!strcmp(lexema, ":=")) {
        fprintf(output," 61");
    }
    else if (!strcmp(lexema, "(*")) {
        fprintf(output," 62");
    }
    else if (!strcmp(lexema, "*)")) {
        fprintf(output," 63");
    }
    else if (!strcmp(lexema, "integer")) {
        fprintf(output," 64");
    }
    else if (!strcmp(lexema, "real")) {
        fprintf(output," 65");
    }
    else if (!strcmp(lexema, "char")) {
        fprintf(output," 66");
    }
    else if (!strcmp(lexema, "string")) {
        fprintf(output," 67");
    }
    else if (!strcmp(lexema, "boolean")) {
        fprintf(output," 68");
    }
    else if (!strcmp(lexema, "read")) {
        fprintf(output," 69");
    }
    else if (!strcmp(lexema, "write")) {
        fprintf(output," 70");
    }
    // Numerico
    else if (lexema[0] >= 48 && lexema[0] <= 57) {
        fprintf(output, " 71");
    }
    //Identificador
    else if ((lexema[0] >= 65 && lexema[0] <= 90) || (lexema[0] >= 97 && lexema[0] <= 122)) {
        fprintf(output, " 72");
    }
    return;
}

void PROXIMO(FILE *input, FILE *output, char lexema[], int linha) {
    char ch, aux[MAX];
    memset(aux, 0, sizeof(aux));
    ch = fgetc(input);

    // Verifica o fim do arquivo
    if (ch == EOF) {
        return;
    }
    // Verifica se o caractere eh um simbolo especial
    else if (ch == ' ' || ch == '\n' || (ch >= 40 && ch <= 45) || (ch >= 58 && ch <= 62)) {
        if (ch == 61) {
            if (!strcmp(lexema, ":")) {
                fprintf(output, " 61");
                memset(lexema, 0, sizeof(lexema));
                PROXIMO(input, output, lexema, linha);
                ch = NULL;
            }
        }
        CODIGO(lexema, output);
        memset(lexema, 0, sizeof(lexema));
        aux[0] = ch;
        strcat(lexema, aux);
        if (ch == 58)
            PROXIMO(input, output,lexema, linha);
        CODIGO(lexema, output);
        memset(lexema, 0, sizeof(lexema));
        if (ch == '\n') {
            linha++;
            fprintf(output, "\n");
        }
    }
    // Verifica se o caractere eh uma letra
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        if (lexema[0] >= 48 && lexema[0] <= 57) {
            ERRO(linha);
        }
        else {
            aux[0] = ch;
            strcat(lexema, aux);
        }
    }
    // Verifica se o caractere eh um numero
    else if (ch >= 48 && ch <= 57) {
        aux[0] = ch;
        strcat(lexema, aux);
    }
    else if ((ch >= 33 && ch <= 39) || ch == 63 || ch == 64 || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) {
        ERRO(linha);
    }

    PROXIMO(input, output, lexema, linha);
    return;
}

// *****************************************************************************************************************
// *
// * Analisador Sintatico
// *
// *****************************************************************************************************************

void ERRO_SINTATICO(char tipo[MAX], int linha) {
    printf("[ERRO] Ocorreu um erro na linha %d. %s\n", linha, tipo);
    exit(0);
}

void PROX_TOKEN(FILE *input, char token[], int linha) {
    char ch, aux[50];
    memset(aux, 0, sizeof(aux));
    memset(token, 0, sizeof(token));
    ch = fgetc(input);
    while (ch == '\n' || ch == ' ') {
        ch = fgetc(input);
        if (ch == '\n')
            linha++;
    }
    while (ch != ' ' && ch != '\n' && ch != EOF) {
        aux[0] = ch;
        strcat(token, aux);
        ch = fgetc(input);
        if (ch == '\n')
            linha++;
    }
    printf("%c", ch);
    return;
}

void PROGRAM(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    if (!strcmp(token, "32")) {
        PROX_TOKEN(input, token, linha);
        if (IDENTIFICADOR(token))
            BLOCO(input, token, linha);
        else
            ERRO_SINTATICO("Esperado um identificador ", linha);
    }
    else
        ERRO_SINTATICO("Esperado o comando PROGRAM", linha);
}

void BLOCO(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    VARIAVEIS2(input, token, linha);
    DECLARACAO_SUBROTINAS(input, token, linha);
    COMANDO_COMPOSTO(input, token, linha);
    return;
}

void VARIAVEIS(FILE *input, char token[], int linha) {
    LISTA_IDENTIFICADORES(input, token, linha);
    if (!strcmp(token, "54")) {
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "64") || !strcmp(token, "68"))
            return;
        else
            ERRO_SINTATICO("Variavel declarada incorretamente", linha);
    }
    else
        ERRO_SINTATICO("Tipo da variavel incorreto ", linha);
    return;
}

void VARIAVEIS2(FILE *input, char token[], int linha) {
    if (!strcmp(token, "45")) {
        VARIAVEIS(input, token, linha);
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "50")) {
            PROX_TOKEN(input, token, linha);
            return;
        }
        else
            ERRO_SINTATICO("Esperado um ponto e virgula", linha);
    }
    return;
}

void LISTA_IDENTIFICADORES(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    if (IDENTIFICADOR(token)) {
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "51"))
            LISTA_IDENTIFICADORES(input, token, linha);
        else
            return;
    }
    else
        ERRO_SINTATICO("Esperado um identificador", linha);
}

void DECLARACAO_SUBROTINAS(FILE *input, char token[], int linha) {
    if (!strcmp(token, "31")) {
        PROCEDURE(input, token, linha);
        return;
    }
    return;
}

void PROCEDURE(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    if (IDENTIFICADOR(token)) {
        PARAM_FORMAIS(input, token, linha);
    }
    else
        ERRO_SINTATICO("Esperado um identificador", linha);
    BLOCO(input, token, linha);
}

void PARAM_FORMAIS(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    if (!strcmp(token, "50"))
        return;
    //secaoParametros();
}

void COMANDO_SEM_ROTULO(FILE *input, char token[], int linha) {
    if (!strcmp(token, "72") || !strcmp(token, "69" ) || !strcmp(token, "70")) {
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "61"))
            ATRIBUICAO(input, token, linha);
        else
            CHAMA_PROCEDURE(input, token, linha);
        return;
    }
    else if (!strcmp(token, "4"))
        COMANDO_COMPOSTO(input, token, linha);
    else if (!strcmp(token, "18"))
        CONDICIONAL(input, token, linha);
    else if (!strcmp(token, "46"))
        COMANDO_REPETITIVO(input, token, linha);
}

void COMANDO(FILE *input, char token[], int linha) {
    if (!strcmp(token, "71"))
        PROX_TOKEN(input, token, linha);
    COMANDO_SEM_ROTULO(input, token, linha);
    return;
}

void COMANDO_COMPOSTO(FILE *input, char token[], int linha) {
    if (!strcmp(token, "4")) {
        PROX_TOKEN(input, token, linha);
        while (strcmp(token, "11")) {
            COMANDO(input, token, linha);
        }
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "50") || !strcmp(token, "49")) {
            PROX_TOKEN(input, token, linha);
            return;
        }
        else
            ERRO_SINTATICO("Esperado um ponto e virgula", linha);
    }
    else
        ERRO_SINTATICO("Esperado o comando BEGIN", linha);
    return;
}

void COMANDO_REPETITIVO(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    EXPRESSAO(input, token, linha);
    if (!strcmp(token, "8")) {
        PROX_TOKEN(input, token, linha);
        COMANDO_SEM_ROTULO(input, token, linha);
        return;
    }
    else
        ERRO_SINTATICO("Esperado o comando DO", linha);
    return;
}

void CONDICIONAL(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    EXPRESSAO(input, token, linha);
    if (!strcmp(token, "39")) {
        PROX_TOKEN(input, token, linha);
        COMANDO_SEM_ROTULO(input, token, linha);
        PROX_TOKEN(input, token, linha);
        if (!strcmp(token, "10")) {
            PROX_TOKEN(input, token, linha);
            COMANDO_SEM_ROTULO(input, token, linha);
            if (!strcmp(token, "50")) {
                PROX_TOKEN(input, token, linha);
                return;
            }
            else
                ERRO_SINTATICO("Esperado um ponto e virgula", linha);
        }
        else
            return;
    }
    else
        ERRO_SINTATICO("Esperado o comando THEN", linha);
}

void FATOR(FILE *input, char token[], int linha) {
    if (IDENTIFICADOR(token)) {
        PROX_TOKEN(input, token, linha);
        return;
    }
    else if (NUMERICO(token)) {
        PROX_TOKEN(input, token, linha);
        return;
    }
    return;
}

void TERMO(FILE *input, char token[], int linha) {
    FATOR(input, token, linha);
    if (!strcmp(token, "60") || !strcmp(token, "7")) {
        PROX_TOKEN(input, token, linha);
        FATOR(input, token, linha);
    }
    return;
}

void EXPRESSAO_SIMPLES(FILE *input, char token[], int linha) {
    if (!strcmp(token, "58") || !strcmp(token, "59"))
        PROX_TOKEN(input, token, linha);
    TERMO(input, token, linha);

    if (!strcmp(token, "58") || !strcmp(token, "59") || !strcmp(token, "60") || !strcmp(token, "7") || !strcmp(token, "55")) {
        PROX_TOKEN(input, token, linha);
        TERMO(input, token, linha);
    }
    return;
}

int RELACAO(char token[]) {
    if (!strcmp(token, "55") || !strcmp(token, "56") || !strcmp(token, "57"))
        return 1;
    else
        return 0;
}

void EXPRESSAO(FILE *input, char token[], int linha) {
    EXPRESSAO_SIMPLES(input, token, linha);
    if (RELACAO(token)) {
        PROX_TOKEN(input, token, linha);
        EXPRESSAO_SIMPLES(input, token, linha);
    }
    return;
}

void ATRIBUICAO(FILE *input, char token[], int linha) {
    PROX_TOKEN(input, token, linha);
    EXPRESSAO(input, token, linha);
    if (!strcmp(token, "50")) {
        PROX_TOKEN(input, token, linha);
        return;
    }
    else
        ERRO_SINTATICO("Esperado um ponto e virgula", linha);

    return;
}

void LISTA_EXPRESSOES(FILE *input, char token[], int linha) {
    EXPRESSAO(input, token, linha);
    if (!strcmp(token, "51")) {
        PROX_TOKEN(input, token, linha);
        LISTA_EXPRESSOES(input, token, linha);
    }
    else if (!strcmp(token, "50")) {
        PROX_TOKEN(input, token, linha);
        return;
    }
    else
        ERRO_SINTATICO("Esperado um ponto e virgula", linha);
    return;
}

void CHAMA_PROCEDURE(FILE *input, char token[], int linha) {
    LISTA_EXPRESSOES(input, token, linha);
    return;
}

int NUMERICO(char token[]) {
    if (!strcmp(token, "71"))
        return 1;
    else
        return 0;
}

int IDENTIFICADOR(char token[]) {
    if (!strcmp(token, "72"))
        return 1;
    else
        return 0;
}

// *****************************************************************************************************************
// *
// * Programa Principal
// *
// *****************************************************************************************************************

int main() {
    FILE *input, *output;
    char lexema[MAX], token[MAX];
    int linha = 1;
    memset(lexema, 0, sizeof(lexema));
    input = fopen("Exemplo1_Trab2_Compiladores.txt", "r");
    output = fopen("output.txt","w");
    if (input == NULL) {
        printf("Erro ao ler o arquivo\n");
        printf("\n\nAperte qualquer tecla para encerrar.");
        fflush(stdin);
        getchar();
        return 0;
    }
    else {
        PROXIMO(input, output, lexema, linha);
    }
    fclose(input);
    fclose(output);

    // Inicio do Analisador Sintatico
    input = fopen("output.txt", "r");
    linha = 1;
    if (input == NULL) {
        printf("Erro ao ler o arquivo\n");
        printf("\n\nAperte qualquer tecla para encerrar.");
        fflush(stdin);
        getchar();
        return 0;
    }
    else {
        PROGRAM(input, token, linha);
    }

    fclose(input);

    printf("\n\n[OK] Aperte qualquer tecla para encerrar.");
    fflush(stdin);
    getchar();
    return 0;
}
