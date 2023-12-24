
#include<stdio.h>
void main()
{
    int a=1154%7;
    int num[10], sum=0;
    for(int i=0; i<10; i++)
    {
        num[i] = 3*i + a;
    }
    for(int i=0; i<10; i++)
    {
        if(i%3 == 0)
        {
            printf("%d\n",*(num+i));
        }
        sum += *(num+i);
    }
    sum /= 10;
    printf("%d\n", sum);



}













////Ans to the question number 7
//#include<stdio.h>
//
//struct Soldier{
//    char id[10];
//    int age;
//    float weight;
//};
//
//int main(){
//    struct Soldier soldier1;
//    printf("Enter Soldier ID:\n");
//    scanf("%s",soldier1.id);
//    printf("Enter Soldier Age:\n");
//    scanf("%d",&soldier1.age);
//    printf("Enter Soldier Weight:\n");
//    scanf("%f",&soldier1.weight);
//
//    printf("Id: %s\n",soldier1.id);
//    printf("Age: %d\n",soldier1.age);
//    printf("Weight: %.1f\n",soldier1.weight);
//
//
//
//    return 0;
//}






















////Ans to the question number 6
//#include<stdio.h>
//
//int main(){
//    char sent[200];
//    char id[]={" 011201154"};
//    gets(sent);
//    int sensize= strlen(sent);
//    for(int i=0;i<sensize;i++){
//        if(sent[i]==' '){
//            sent[i+1]=toupper(sent[i+1]);
//        }
//    }
//    strcat(sent,id);
//    puts(sent);
//
//    return 0;
//}






////Ans To The Question Number 5
//#include<stdio.h>
//
//int sumOfSevens(int arr[],int n){
//    int sum=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]%7==0){
//            sum=sum+arr[i];
//        }
//    }
//    return sum;
//}
//
//int main(){
//
//
//    int scores[5];
//    for(int i=0;i<5;i++){
//        scores[i]=(1154%9+2i);
//    }
//    printf("Sum is:%d",sumOfSevens(scores,5));
//
//    return 0;
//}
