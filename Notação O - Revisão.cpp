/******************************************************************************
NOTAÇÃO O

1° PASSO: Achar as repetições
for soltos = O(n)
constantes = O(1) - ignoradas



2° PASSO: Verificar a complexidade das funções
size = O(1)
sort = O(nlog(n)
va.count = O(n)

3° PASSO: Cálculo da complexidade:
 - O(n) dentro de O(n) = multiplicação
 - O(n) soltos é soma
 - exemplos:

O(n) * O(n) = O(n²)
O(n) + O(n) = 2*O(n)
se só tiver a função sort então resultado dessa função O(nlog(n) é pior do que o de cima


4° PASSO: Gráfico

de acordo com o resultado é obtido a resposta se é bom ou ruim


