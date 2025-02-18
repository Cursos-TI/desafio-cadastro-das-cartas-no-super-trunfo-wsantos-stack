#include <stdio.h>

#define TOTAL_CIDADES 32  // 8 estados * 4 cidades por estado

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];  // Código do estado + número da cidade (ex: A01)
    char estado[20]; // Nome do estado
    char cidade[30]; // Nome da cidade
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[TOTAL_CIDADES] = {
        {"A01", "Amazonas", "Manaus", 2200000, 11401.1, 45.2, 12},
        {"A02", "Amazonas", "Parintins", 115000, 5941.2, 5.3, 6},
        {"A03", "Amazonas", "Itacoatiara", 102000, 8910.4, 6.7, 4},
        {"A04", "Amazonas", "Tefé", 62000, 2341.7, 3.2, 5},
        {"B01", "Bahia", "Salvador", 2900000, 693.8, 85.3, 20},
        {"B02", "Bahia", "Feira de Santana", 620000, 1320.5, 24.7, 10},
        {"B03", "Bahia", "Vitória da Conquista", 340000, 3456.6, 18.9, 8},
        {"B04", "Bahia", "Ilhéus", 160000, 1740.3, 9.8, 15},
        {"C01", "Ceará", "Fortaleza", 2700000, 314.8, 90.2, 22},
        {"C02", "Ceará", "Juazeiro do Norte", 280000, 248.3, 16.4, 12},
        {"C03", "Ceará", "Sobral", 210000, 1275.9, 12.3, 9},
        {"C04", "Ceará", "Crato", 140000, 1176.1, 9.1, 8},
        {"D01", "São Paulo", "São Paulo", 12300000, 1521.1, 500.7, 30},
        {"D02", "São Paulo", "Campinas", 1100000, 795.3, 120.6, 18},
        {"D03", "São Paulo", "Santos", 440000, 280.2, 58.4, 25},
        {"D04", "São Paulo", "Ribeirão Preto", 700000, 650.5, 40.9, 15},
        {"E01", "Pernambuco", "Recife", 1650000, 218.4, 75.8, 21},
        {"E02", "Pernambuco", "Olinda", 400000, 41.6, 18.2, 17},
        {"E03", "Pernambuco", "Caruaru", 365000, 920.7, 20.3, 14},
        {"E04", "Pernambuco", "Petrolina", 350000, 456.8, 22.6, 12},
        {"F01", "Rio de Janeiro", "Rio de Janeiro", 6700000, 1182.3, 350.4, 40},
        {"F02", "Rio de Janeiro", "Niterói", 515000, 133.9, 40.2, 18},
        {"F03", "Rio de Janeiro", "Campos dos Goytacazes", 510000, 4620.2, 25.1, 10},
        {"F04", "Rio de Janeiro", "Petrópolis", 310000, 795.8, 15.3, 20},
        {"G01", "Paraná", "Curitiba", 1960000, 435.0, 110.2, 25},
        {"G02", "Paraná", "Londrina", 575000, 1650.3, 50.8, 12},
        {"G03", "Paraná", "Maringá", 430000, 470.2, 38.1, 14},
        {"G04", "Paraná", "Foz do Iguaçu", 260000, 617.7, 18.6, 22},
        {"H01", "Rio Grande do Sul", "Porto Alegre", 1480000, 496.8, 95.3, 26},
        {"H02", "Rio Grande do Sul", "Caxias do Sul", 510000, 1652.5, 45.2, 14},
        {"H03", "Rio Grande do Sul", "Pelotas", 340000, 1611.2, 30.4, 12},
        {"H04", "Rio Grande do Sul", "Santa Maria", 280000, 1790.6, 28.7, 11}
    };

    // Exibição dos dados cadastrados
    printf("\nCartas cadastradas:\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("Código: %s\n", cidades[i].codigo);
        printf("Estado: %s\n", cidades[i].estado);
        printf("Cidade: %s\n", cidades[i].cidade);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2lf bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("-------------------------------------------------\n");
    }

    return 0;
}