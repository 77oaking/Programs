#include <stdio.h>
#include <stdlib.h>



typedef struct{
    char name[20];
    float grade;
}course;
 typedef struct{
    char name;
    int age;
    course courses[4];
 }std;

void scanarray(std arr){
//    for(int j=0;j<5;j++){
//    printf("Enter student %d name:\n",j+1);
//    fflush(stdin);
//    gets(arr[j].name);
//    printf("Enter student %d age\n",j+1);
//    scanf("%d",&arr[j].age);
//    for(int i=0;i<4;i++){
//        printf("Enter course %d name:\n",i+1);
//        fflush(stdin);
//        gets(arr[j].courses[i].name);
//        printf("Enter course %d grade\n",i+1);
//        scanf("%f",&arr[j].courses[i].grade);
//    }
//    }
    printf("Enter student name:\n");
    //fflush(stdin);
    gets(&arr.name);
    //scanf("%s",arr.name);
    printf("Enter student age\n");
    scanf("%d",&arr.age);
    for(int i=0;i<4;i++){
        printf("Enter course %d name:\n",i+1);
        fflush(stdin);
        gets(arr.courses[i].name);
        printf("Enter course %d grade\n",i+1);
        scanf("%f",&arr.courses[i].grade);
    }
}
void printarray(std arr){
//        for(int j=0;j<5;j++){
//    printf("Student %d name: %s ",j+1,arr[j].name);
//    printf("Student %d age is ",j+1,arr[j].age);
//    for(int i=0;i<4;i++){
//        printf("Course %d name: %s",i+1,arr[j].courses[i].name);
//        printf("Course %d grade %f",i+1,arr[j].courses[i].grade);
//    }
//    }
    printf("Student name: %s ",arr.name);
    printf("Student age is %d",arr.age);
    for(int i=0;i<4;i++){
        printf("Course %d name: %s",i+1,arr.courses[i].name);
        printf("Course %d grade %f",i+1,arr.courses[i].grade);
    }
}


int main(){
    std student;
    //scanarray(student);
    //printarray(student);
        printf("Enter student name:\n");
    //fflush(stdin);
    gets(&student.name);
    //scanf("%s",arr.name);
    printf("Enter student age\n");
    scanf("%d",&student.age);
    for(int i=0;i<4;i++){
        printf("Enter course %d name:\n",i+1);
        fflush(stdin);
        gets(student.courses[i].name);
        printf("Enter course %d grade\n",i+1);
        scanf("%f",student.courses[i].grade);
    }
        printf("Student name: %s ",student.name);
    printf("Student age is %d",student.age);
    for(int i=0;i<4;i++){
        printf("Course %d name: %s",i+1,student.courses[i].name);
        printf("Course %d grade %f",i+1,student.courses[i].grade);
    }



    return 0;
}




