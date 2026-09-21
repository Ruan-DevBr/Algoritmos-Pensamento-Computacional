#include <stdio.h>
#include <math.h>

int main() {

    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh, preco_kit, outros_custos, orcamento;

    int qte_times, faltante;
    float consumo_energia, custo_alimentacao;
    float custo_total, custo_por_participante, saldo, margem_seguranca, custo_estimado;

    printf("=== ARENA TECH - Planejamento do Evento ===\n\n");

    printf("Quantidade de participantes: ");
    scanf("%d", &qte_participantes);

    printf("Jogadores por time: ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Computadores disponiveis: ");
    scanf("%d", &qte_computadores);

    printf("Potencia media por computador (W): ");
    scanf("%f", &potencia);

    printf("Duracao do evento (horas): ");
    scanf("%f", &duracao);

    printf("Preco do kWh (R$): ");
    scanf("%f", &preco_kwh);

    printf("Preco do kit de alimentacao por participante (R$): ");
    scanf("%f", &preco_kit);

    printf("Outros custos do evento (R$): ");
    scanf("%f", &outros_custos);

    printf("Orcamento disponivel (R$): ");
    scanf("%f", &orcamento);

    // Calculos
    qte_times = ceil((float)qte_participantes / qte_jogadores_por_time);

    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_estimado = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_estimado + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;

    // validando infraestrutura
    printf("\n--- Validacao de Infraestrutura ---\n");
    if(qte_computadores >= qte_participantes){
        printf("INFRAESTRUTURA SUFICIENTE\n");
    } else {

        faltante = qte_participantes - qte_computadores;
        printf("INFRAESTRUTURA INSUFICIENTE: Faltam %d computadores\n", faltante);
    }

    // Saida relatorio
    printf("\n=============================================\n");
    printf("         RELATORIO FINAL DO EVENTO           \n");
    printf("=============================================\n");
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessarios: %d\n", qte_times);
    printf("Computadores disponiveis: %d\n", qte_computadores);

    if(qte_computadores >= qte_participantes){
        printf("infraestrutura: SUFICIENTE\n");
    } else {
        printf("infraestrutura: INSUFICIENTE (Faltam %d)\n", qte_participantes - qte_computadores);
    }

    printf("Consumo Estimado: %.2f kWh\n", consumo_energia);
    if (consumo_energia <= 20){
        printf("Classificacao do consumo: BAIXO\n");
    } else if (consumo_energia > 20 && consumo_energia <= 40){
        printf("Classificacao do consumo: MODERADO\n");
    } else {
        printf("Classificacao do consumo: ALTO\n");
    }

    printf("Custo da energia: R$ %.2f\n", custo_estimado);
    printf("Custo da alimentacao: R$ %.2f\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n", outros_custos);
    printf("---------------------------------------------\n");
    printf("CUSTO TOTAL: R$ %.2f\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custo_por_participante);
    printf("Orcamento disponivel: R$ %.2f\n", orcamento);
    printf("Saldo: R$ %.2f\n", saldo);

    if (custo_total > orcamento){
        printf("Situacao do orcamento: ACIMA ORCAMENTO\n");
    } else if (custo_total <= orcamento && saldo <= (orcamento * 0.05)){
        printf("Situacao do orcamento: NO LIMITE DO ORCAMENTO\n");
    } else {
        printf("Situacao do orcamento: DENTRO DO ORCAMENTO\n");
    }
    printf("---------------------------------------------\n");

    if (qte_computadores < qte_participantes || custo_total > orcamento){
        printf("DECISAO FINAL: NAO RECOMENDADO\n");
    } else if (qte_computadores >= qte_participantes && custo_total <= orcamento && consumo_energia > 40){
        printf("DECISAO FINAL: APROVADO COM RESSALVAS\n");
    } else {
        printf("DECISAO FINAL: APROVADO\n");
    }

    if (qte_computadores < qte_participantes || custo_total > orcamento){
        printf("Motivo: Computadores insuficientes ou orcamento menor que custo total.\n");
    } else if (qte_computadores >= qte_participantes && custo_total <= orcamento && consumo_energia > 40){
        printf("Motivo: Consumo elevado de energia.\n");
    } else {
        printf("Motivo: Sem motivos, aprovado.\n");
    }
    printf("=============================================\n");

    return 0;
}