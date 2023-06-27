#include <stdio.h>

#define MAX_GASTOS 10
#define MAX_ECONOMIAS 5

typedef struct {
    float salario;
    float gastos[MAX_GASTOS];
    int numGastos;
    float economias[MAX_ECONOMIAS];
    int numEconomias;
} Funcionario;

float calcularTotal(float arr[], int tamanho) {
    float total = 0.0;
    for (int i = 0; i < tamanho; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    Funcionario funcionario;
    char opcao, opcao2;

    printf("Olá! Bem-vindo ao nosso sistema de controle de gastos.\n");
    printf("Deseja iniciar o teste agora? (S/N): ");
    scanf(" %c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        printf("OK! Vamos lá!\n");

        printf("Digite o salário do mês: ");
        scanf("%f", &funcionario.salario);

        do {
            printf("Quantos gastos você teve durante o mês? (Máximo de %d): ", MAX_GASTOS);
            scanf("%d", &funcionario.numGastos);
        } while (funcionario.numGastos > MAX_GASTOS || funcionario.numGastos < 0);

        printf("Digite os valores dos gastos (até %d valores):\n", MAX_GASTOS);
        for (int i = 0; i < funcionario.numGastos; i++) {
            printf("Gasto %d: ", i + 1);
            scanf("%f", &funcionario.gastos[i]);
        }

        do {
            printf("Quantas economias você possui? (Máximo de %d): ", MAX_ECONOMIAS);
            scanf("%d", &funcionario.numEconomias);
        } while (funcionario.numEconomias > MAX_ECONOMIAS || funcionario.numEconomias < 0);

        printf("Digite os valores das economias (até %d valores):\n", MAX_ECONOMIAS);
        for (int i = 0; i < funcionario.numEconomias; i++) {
            printf("Economia %d: ", i + 1);
            scanf("%f", &funcionario.economias[i]);
        }

        float totalGastos = calcularTotal(funcionario.gastos, funcionario.numGastos);
        float totalEconomias = calcularTotal(funcionario.economias, funcionario.numEconomias);

        float saldo = funcionario.salario - totalGastos + totalEconomias;

        if (saldo > 0) {
            printf("Sobrou dinheiro! Deseja guardar na conta? (S/N): ");
            scanf(" %c", &opcao2);

            if (opcao2 == 'S' || opcao2 == 's') {
                printf("Saldo guardado na conta!\n");
            } else {
                printf("Use o seu dinheiro com sabedoria.\n");
            }
        } else {
            printf("Saldo negativo. Deseja utilizar o crédito da empresa? (S/N): ");
            scanf(" %c", &opcao);

            if (opcao == 'S' || opcao == 's') {
                printf("Crédito utilizado!\n");
            } else {
                printf("Use o seu dinheiro com sabedoria.\n");
            }
        }
    } else {
        printf("Obrigado por estar aqui! Caso queira executar o teste mais tarde, estaremos à disposição.\n");
    }

    return 0;
}
