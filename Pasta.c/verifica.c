#include <studio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portugu�s");

    float media;

    printf("Informe a m�dia");
    scanf("%f", &media);

    if (media>=6) {
        printf("Aluno aprovado");
    }

    else {
        printf("Aluno reprovado");
    }
    return0
}