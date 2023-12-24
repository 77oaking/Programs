#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int startswith(char str1[],char str2[]){
    for(int i=0;i<strlen(str2);i++){
        if(str1[i]==str2[i]){
            continue;
        }else return 0;
    }
    return 1;
}
int stringocc(char str1[],char str2[]){
    int count=0;
    int j=1;
    for(int i=0;i<strlen(str1);i++){
        if(startswith(&str1[i],str2)){
            count++;
            printf("The occurance %d is in index %d \n",j++,i);
        }

    }
    return count;
}


int main(){
    printf("Enter your line:");
    char line[]={};
    gets(line);
    //printf("Enter the checking line:");
    char check[]="fuck";
    //gets(check);
    ///printf("%s",startswith(line,check)?"It has it":"This is whore");
    //stringocc(line,check);
    printf("The word %s occured %d times in  \"%s\" ",check,stringocc(line,check),line);

    return 0;
}





///String occurance with index
/*
int startswith(char str1[],char str2[]){
    for(int i=0;i<strlen(str2);i++){
        if(str1[i]==str2[i]){
            continue;
        }else return 0;
    }
    return 1;
}
int stringocc(char str1[],char str2[]){
    int count=0;
    int j=1;
    for(int i=0;i<strlen(str1);i++){
        if(startswith(&str1[i],str2)){
            count++;
            printf("The occurance %d is in index %d \n",j++,i);
        }

    }
    return count;
}


int main(){
    printf("Enter your line:");
    char line[]={};
    gets(line);
    //printf("Enter the checking line:");
    char check[]="fuck";
    //gets(check);
    ///printf("%s",startswith(line,check)?"It has it":"This is whore");
    //stringocc(line,check);
    printf("The word %s occured %d times in  \"%s\" ",check,stringocc(line,check),line);

    return 0;
}

*/



///string occurance
//int startswith(char str1[],char str2[]){
//    for(int i=0;i<strlen(str2);i++){
//        if(str1[i]==str2[i]){
//            continue;
//        }else return 0;
//    }
//    return 1;
//}
//int stringocc(char str1[],char str2[]){
//    int count=0;
//    for(int i=0;i<strlen(str1);i++){
//        count=(startswith(&str1[i],str2)) ? count+1:count;
//    }
//    return count;
//}
//
//
//int main(){
//    printf("Enter your line:");
//    char line[]={};
//    gets(line);
//    //printf("Enter the checking line:");
//    char check[]="fuck ";
//    //gets(check);
//    ///printf("%s",startswith(line,check)?"It has it":"This is whore");
//    printf("The word %s occured %d times in  \" %s \" ",check,stringocc(line,check),line);
//    return 0;
//}
//
//










///Starts with
//int startswith(char str1[],char str2[]){
//    for(int i=0;i<strlen(str2);i++){
//        if(str1[i]==str2[i]){
//            continue;
//        }else return 0;
//    }
//    return 1;
//}
//
//int main(){
//    printf("Enter your line:");
//    char line[]={};
//    gets(line);
//    //printf("Enter the checking line:");
//    char check[]="Whore";
//    //gets(check);
//    printf("%s",startswith(line,check)?"It has it":"This is whore");
//    return 0;
//}









///squeez spaces
//void squeez(char str[],char holder[]){
//
//    int j=0;
//    for(int i=0;i<strlen(str);i++){
//        if(str[i]==' ' && str[i+1]==' '){
//            continue;
//        }else{
//            holder[j]=str[i];
//            ++j;
//        }
//    }
//
//}
//
//int main(){
//
//    char line[1000];
//    gets(line);
//    char squeezed[strlen(line)+1];
//    squeez(line,squeezed);
//    puts(squeezed);
//
//
//    return 0;
//}





///reverse
//void reverse(char source[],char destination[]){
//    int i,j;
//    for(i = strlen(source)-1,j=0;i>=0;i--,j++){
//        destination[j]=source[i];
//    }
//    destination[strlen(source)]='\0';///because the string array starts from 0 so last element is stored in the strlen-1 thats why \ 0 is added in strlen
//}
//int main(){
//    char str[100];
//    gets(str);
//    char reversedstr[strlen(str)+1];
//    ///printf("%d",strlen(str));
//    reverse(str,reversedstr);
//    puts(reversedstr);
//
//    return 0;
//}
//



///Copy string to string
////void copystring(char source[],char destination[]){
////    for(int i=0;i<strlen(source);i++){
////        destination[i]=source[i];
////        destination[strlen(source)]='\0';
////    }
////}
////
////int main()
////{
////    char name[100];
////    gets(name);
////    char copied[strlen(name)+1];
////
////    copystring(name,copied);
////    puts(copied);
////    system("pause");
////    return 0;
////}
