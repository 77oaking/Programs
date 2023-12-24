#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[15],s2[15],s3[15];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);

    if(s1[0]=='v'){
        if(s2[0]=='a'){
            if(s3[0]=='c'){
                printf("aguia\n");
            }
            if(s3[0]=='o'){
                printf("pomba\n");
            }
        }
        if(s2[0]=='m'){
            if(s3[0]=='o'){
                printf("homem\n");
            }
            if(s3[0]=='h'){
                printf("vaca\n");
            }
        }
    }
    if(s1[0]=='i'){
        if(s2[0]=='i'){
            if(s3[2]=='m'){
                printf("pulga\n");
            }
            if(s3[2]=='r'){
                printf("lagarta\n");
            }
        }
        if(s2[0]=='a'){
            if(s3[0]=='h'){
                printf("sanguessuga\n");
            }
            if(s3[0]=='o'){
                printf("minhoca\n");
            }
        }

    }
/// The whole code should be done in C++ Because its esier in that.

////string c;
////
//// cin >> c;
////
//// if(c == "vertebrado"){
////
////  cin >> c;
////  if(c == "ave"){
////
////   cin >> c;
////   if(c == "carnivoro"){
////    cout << "aguia" << endl;
////   }else{
////    cout << "pomba" << endl;
////   }
////  }else{
////
////   cin >> c;
////   if(c == "onivoro"){
////    cout << "homem" << endl;
////   }else{
////    cout << "vaca" << endl;
////   }
////  }
//// }else{
////
////  cin >> c;
////  if(c == "inseto"){
////
////   cin >> c;
////   if(c == "hematofago"){
////    cout << "pulga" << endl;
////   }else{
////    cout << "lagarta" << endl;
////   }
////  }else{
////
////   cin >> c;
////   if(c == "hematofago"){
////    cout << "sanguessuga" << endl;
////   }else{
////    cout << "minhoca" << endl;
////   }
////  }
//// }
    return 0;
}
