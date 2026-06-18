#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o numero de horas trabalhadas e o valor do salario
  mínimo,calcule e e mostre o salário a receber , seguindo essas regras: a)a
  hora trabalhada vale a metade do salário mínimo. b)o salário bruto equivale ao
  número de horas trabalhadas multiplicado pelo valor da hora trabalhada c)o
  imposto equivale a 3% do salário bruto d)o salário a receber equivale ao
  salário bruto menos o imposto*/

int main() {
  int hrsTrab, vlrHrtrab;
  float slrAreceber, slrMin, slrBruto, vlrImpost;

  printf("Digite o numero de horas trabalhadas:\n");
  scanf("%d", &hrsTrab);

  printf("\nDigite o valor do salario minimo:\n");
  scanf("%f", &slrMin);

  vlrHrtrab = (slrMin / 2);
  slrBruto = (hrsTrab * vlrHrtrab);
  vlrImpost = (slrBruto * 0.03);
  slrAreceber = (slrBruto - vlrImpost);

  printf("\nO valor do salario a receber sera de %.2f\n", slrAreceber);

  return 0;
}
