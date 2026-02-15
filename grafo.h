#ifndef GRAFO_H
#define GRAFO_H

#define MAX_MUNICIPIOS 15
#define INF 99999

typedef struct main
{
    int num_municipios;
    char nomes[MAX_MUNICIPIOS][50];
    int distancias[MAX_MUNICIPIOS][MAX_MUNICIPIOS];
    int predecessores[MAX_MUNICIPIOS][MAX_MUNICIPIOS];
} Grafo;

void inserir_dados(Grafo *g);
void salvar_dados(Grafo *g, char *nome_arquivo);
void carregar_dados(Grafo *g, char nome_arquivo);
void executar_algiritmo(Grafo *g, int origem, int destino);


#endif