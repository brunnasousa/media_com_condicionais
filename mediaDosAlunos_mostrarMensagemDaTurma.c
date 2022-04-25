#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int aluno1, aluno2, aluno3, aluno4;
    
    int media;
    
    printf("--- Programa para calcular a media de quatro alunos e calcular a media para mostrar a Turma ---\n\n");
    printf("Digite a idade do Aluno 1: \n");
    scanf("%d", &aluno1);
    
    printf("Digite a idade do Aluno 2: \n");
    scanf("%d", &aluno2);
    
    printf("Digite a idade do Aluno 3: \n");
    scanf("%d", &aluno3);
    
    printf("Digite a idade do Aluno 4: \n");
    scanf("%d", &aluno4);
    
    media = (aluno1 + aluno2 + aluno3 + aluno4) / 4;
    
    if(media < 25){
        printf("Media dos 4 alunos da turma e: %d\n", media);
        printf("Turma Jovem");
    } else if(media >= 25 && media <= 40){
        printf("Media dos 4 alunos da turma e: %d\n", media);
        printf("Turma Adulta");
    }else if(media > 40){
        printf("Media dos 4 alunos da turma e: %d\n", media);
        printf("Turma Idosa");
    }
    
    printf("\n\n----By: Brunna Sousa");
    return 0;
}