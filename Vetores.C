#include <stdio.h>
int main()
{
    int n, i;

   printf("Quantos n�meros voc� vai digitar?")
   scanf("%d", &N);
   double vet[N];
   for( i = 0;  i < N; i++){
    printf("Digite um n�mero: ")
    scanf("%lf", &vet[i]);
    printf("\nN�meros digitados:\n")
    for( i = 0;  i < N; i++){
        printf("%.1lf\n, ", vet[i]);
    }
   }


   return 0;

}
