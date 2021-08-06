#define MAX 50

void ERRO_SINTATICO(char tipo[MAX], int linha);
void PROX_TOKEN(FILE *input, char token[], int linha);
void PROGRAM(FILE *input, char token[], int linha);
void BLOCO(FILE *input, char token[], int linha);
void VARIAVEIS(FILE *input, char token[], int linha);
void VARIAVEIS2(FILE *input, char token[], int linha);
void LISTA_IDENTIFICADORES(FILE *input, char token[], int linha);
void DECLARACAO_SUBROTINAS(FILE *input, char token[], int linha);
void PROCEDURE(FILE *input, char token[], int linha);
void PARAM_FORMAIS(FILE *input, char token[], int linha);
void COMANDO_COMPOSTO(FILE *input, char token[], int linha);
void COMANDO(FILE *input, char token[], int linha);
void COMANDO_SEM_ROTULO(FILE *input, char token[], int linha);
void ATRIBUICAO(FILE *input, char token[], int linha);
void CHAMA_PROCEDURE(FILE *input, char token[], int linha);
void CONDICIONAL(FILE *input, char token[], int linha);
void COMANDO_REPETITIVO(FILE *input, char token[], int linha);
void LISTA_EXPRESSOES(FILE *input, char token[], int linha);
void EXPRESSAO(FILE *input, char token[], int linha);
int RELACAO(char token[]);
void EXPRESSAO_SIMPLES(FILE *input, char token[], int linha);
void TERMO(FILE *input, char token[], int linha);
void FATOR(FILE *input, char token[], int linha);
int NUMERICO(char token[]);
int IDENTIFICADOR(char token[]);