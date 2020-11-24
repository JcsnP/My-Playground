#include <stdio.h>
#include <string.h>

int main(){
    int length = 0;
    float score[length], average, sum = 0;
    int min = 999, max = 0;
    char studentName[50], studentMax[50], studentMin[50];
    
    printf("Please input number of student in class: ");
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++){
        printf("Input student name %d: ", i+1);
        scanf("%s", studentName);
        printf("Input %s score %d: ", studentName, i+1);
        scanf("%f", &score[i]);
        
        if(score[i] > max){
            max = score[i];
            strcpy(studentMax, studentName);
        }
        if(score[i] < max){
            min = score[i];
            strcpy(studentMin, studentName);
        }
        sum += score[i];
    }
    
    average = sum / length;
    
    printf("Maximun score name: %s\t", studentMax);
    printf("Maximun score %d\n", max);
    printf("Minimun score name: %s\t", studentMin);
    printf("Minimum score %d\n", min);
    printf("Average score %.2f\n", average);
    
}
