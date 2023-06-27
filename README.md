README.md - Sistema de Controle de Gastos

Este é um programa simples em C que permite aos funcionários registrarem seus gastos mensais e controlarem suas economias. O programa solicita ao usuário informações sobre seu salário, gastos e economias, e com base nesses dados, determina o saldo disponível e oferece opções de guardar dinheiro na conta ou utilizar crédito da empresa, caso o saldo seja negativo.


Integrantes do Grupo
João Virgílio Martins
Petherson Rodrigo Solforoso
Vitor Albara


Como Usar
Certifique-se de ter um compilador C instalado em seu sistema.
Faça o download do código-fonte do programa.
Abra o terminal ou prompt de comando e navegue até o diretório onde o arquivo do código-fonte está localizado.
Compile o programa usando o comando de compilação apropriado. Por exemplo, se você estiver usando o compilador GCC, execute o seguinte comando:

gcc -o controle_gastos controle_gastos.c
Após a compilação bem-sucedida, execute o programa digitando o seguinte comando:

./controle_gastos
O programa será iniciado e exibirá uma mensagem de boas-vindas. Você será solicitado a iniciar o teste digitando 'S' ou 'N' para continuar.

Digite 'S' para iniciar o teste e prossiga respondendo às perguntas e inserindo as informações solicitadas.

O programa solicitará o salário do mês e o número de gastos e economias. Forneça os valores solicitados de acordo com as instruções exibidas.

Após inserir os valores dos gastos e economias, o programa calculará o saldo disponível.

Com base no saldo, o programa oferecerá opções para guardar dinheiro na conta ou utilizar crédito da empresa. Digite 'S' ou 'N' para responder às perguntas.

Depois de concluir as interações, o programa encerrará e exibirá uma mensagem de encerramento.


O que está incluído

O código-fonte fornecido contém:
A definição de uma estrutura de dados chamada Funcionario, que armazena informações sobre o salário, gastos e economias do funcionário.
Uma função calcularTotal para calcular a soma dos valores de um array.
A função main, que é a função principal do programa, responsável pela interação com o usuário e pela execução do fluxo do programa.
Contribuição
Sinta-se à vontade para contribuir com melhorias para este código. Você pode fazer isso criando um fork do repositório, fazendo suas modificações e enviando um pull request. Será um prazer revisar suas alterações e incorporá-las ao projeto principal.


Limitações
O programa possui um número máximo de gastos e economias definidos pelas constantes MAX_GASTOS e MAX_ECONOMIAS, respectivamente.
Os valores de gastos e economias devem ser inseridos manualmente pelo usuário durante a execução do programa.
O programa não faz validações adicionais sobre os valores inseridos pelo usuário, portanto, certifique-se de fornecer valores válidos de acordo com as instruções apresentadas.


Licença
Este código é fornecido sob a licença MIT.
