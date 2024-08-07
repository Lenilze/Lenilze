#include <studio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Português");

    float media;

    printf("Informe a média");
    scanf("%f", &media);

    if (media>=6) {
        printf("Aluno aprovado");
    }

    else {
        printf("Aluno reprovado");
    }
    return0
}