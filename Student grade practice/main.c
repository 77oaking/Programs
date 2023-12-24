#include <stdio.h>
#include <stdlib.h>
#include"student.h"
#include"grade.h"
int main()
{
    /// 550,552,556,621,522
    /// Azmaine, Maria, Maruf,Inan, Nahida
    ///int roll[]={550,552,556,621,522};/// 0='550' 1='552' 2='556' 3='621' 4='522'
    int roll[5]={1,2,5,3,4,6};



    return 0;
}


























//enum name_tag {
//  BLUEBERRY,
//  BANANA,
//  PINEAPPLE,
//  WATERMELON
//};
//typedef enum name_tag name_t;
//
//struct fruit_tag {
//  name_t name;
//  double size;
//};
//typedef struct fruit_tag fruit_t;
//
//fruit_t getBigger(fruit_t f, double d) {
//  f.size += d;
//  return f;
//}
//
//int main(void) {
//  fruit_t myFruit;
//  myFruit.name = BANANA;
//  myFruit.size = 5.2;
//  myFruit = getBigger(myFruit, 3.4);
//  printf("This fruit is %.2f grams.\n", myFruit.size);
//  return 0;
//}
//





































//enum fruit_tag {
//  BLUEBERRY,
//  BANANA,
//  PINEAPPLE,
//  WATERMELON
//};
//typedef enum fruit_tag fruit_t;
//
//void printFruit(fruit_t myFruit) {
//  switch(myFruit) {
//    case BLUEBERRY:
//      printf("a blueberry");
//      break;
//    case BANANA:
//      printf("a banana");
//      break;
//    case PINEAPPLE:
//      printf("a pineapple");
//      break;
//    case WATERMELON:
//      printf("a watermelon");
//      break;
//  }
//}
//
//void compareFruit(fruit_t fruit1, fruit_t fruit2) {
//  if (fruit1 > fruit2) {
//    printFruit(fruit1);
//    printf(" is larger than ");
//    printFruit(fruit2);
//  }
//  else {
//    printFruit(fruit1);
//    printf(" is smaller than ");
//    printFruit(fruit2);
//  }
//}
//
//int main(void) {
//  fruit_t myFruit = BANANA;
//  fruit_t otherFruit = WATERMELON;
//  compareFruit(myFruit, otherFruit);
//  return 0;
//}
