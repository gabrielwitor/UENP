/*
Faça um programa para controlar as provas feitas pelos alunos no curso de Ciência da Computação. 
O programa deve receber a idade de oito alunos e armazenar em um vetor; 
em outro vetor deve armazenar o código de cinco disciplinas; 
e em uma matriz armazenar a quantidade de provas que cada aluno fez em cada disciplina. 
Em seguida, implemente funções para realizar as seguintes tarefas:

a) Calcular e mostrar a quantidade de alunos com idade entre 18 e 25 anos 
que fizeram mais de duas provas em uma disciplina com código digitado pelo usuário. 
O usuário pode digitar um código que não está cadastrado; 
nesse caso, mostrar mensagem adequada. 

b) Exibir uma listagem com os números de alunos e os respectivos códigos das disciplinas em
que fizeram menos de três provas. Analisar cada disciplina.

c) Calcular e mostrar a média de idade dos alunos que não fizeram prova em alguma disciplina.
Cuidado para não contar duas vezes o mesmo aluno.

*/

#include <stdio.h>

#define STUDENTS_TOTAL 8 // total de estudantes
#define SUBJECTS_TOTAL 5 // total de matérias

int findSubjectID(int id, int *subjectsIDs);
int searchForSpecificStudents(int subjectCode, int *studentAges, int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]);
void listSpecificSubjects(int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]);
float averageAgeofSpecificStudents(int *studentAges, int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]);

int main(){
    int studentAges[STUDENTS_TOTAL], subjectsIDs[SUBJECTS_TOTAL], studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL];

    for(int i = 0; i < STUDENTS_TOTAL; i++){
        printf("Digite a idade do aluno [%d]: ",i);
        scanf("%d",&studentAges[i]);
    }

    for(int i = 0; i < SUBJECTS_TOTAL; i++){
        printf("Digite o codigo da materia [%d]: ",i);
        scanf("%d",&subjectsIDs[i]);
    }

    for(int i = 0; i < STUDENTS_TOTAL; i++){
        for(int j = 0; j < SUBJECTS_TOTAL; j++){
            printf("Digite a quantidade de provas da materia [%d] (Codigo [%d]) que o aluno [%d] fez: ",j,subjectsIDs[j],i);
            scanf("%d",&studentTests[i][j]);
        }
    }


    int subjectID;
    printf("Digite um codigo de materia: ");
    scanf("%d",&subjectID);

    if(findSubjectID(subjectID,subjectsIDs) != -1){
        printf("Quantidade de alunos entre 18 e 25 anos que fizeram mais de duas provas na materia de codigo [%d]: %d\n",subjectID,searchForSpecificStudents(findSubjectID(subjectID,subjectsIDs), studentAges, subjectsIDs, studentTests));
    } else {
        printf("O codigo [%d] e invalido.\n",subjectID);
    }

    listSpecificSubjects(subjectsIDs,studentTests);

    printf("Media da idade dos alunos que não fizeram provas em alguma disciplina: %.2f",averageAgeofSpecificStudents(studentAges, subjectsIDs, studentTests));

    return 0;
}

int findSubjectID(int id, int *subjectsIDs){
    for(int i = 0; i < sizeof(subjectsIDs); i++){
        if(id == subjectsIDs[i])
            return i;
    }
    
    return -1; //retorna -1 se o ID não estiver presente no vetor
}

int searchForSpecificStudents(int subjectIndex, int *studentAges, int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]){
    int counter = 0;
    for(int student = 0; student < STUDENTS_TOTAL; student++){
        if((studentAges[student] >= 18) && (studentAges[student] <= 25) && (studentTests[student][subjectIndex] > 2)){
            counter++;
        }
    }
    return counter;
}

void listSpecificSubjects(int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]){
    for(int subject = 0; subject < SUBJECTS_TOTAL; subject++){
        int counter = 0;
        for(int student = 0; student < STUDENTS_TOTAL; student++){
            if(studentTests[student][subject] < 3)
                counter++;
        }
        printf("Total de alunos que fizeram menos de 3 provas na disciplina de codigo [%d]: %d\n",subjectsIDs[subject],counter);    
    }
}

float averageAgeofSpecificStudents(int *studentAges, int *subjectsIDs, int studentTests[STUDENTS_TOTAL][SUBJECTS_TOTAL]){
    int sumOfAges = 0;
    int counter = 0;
    for(int student = 0; student < STUDENTS_TOTAL; student++){
        for(int subject = 0; subject < SUBJECTS_TOTAL; subject++){
            if(studentTests[student][subject] == 0){
                sumOfAges += studentAges[student];
                counter++;
                continue;
            }
        }
    }
    if(counter == 0)
        return 0;

    return (float)sumOfAges/counter;
}