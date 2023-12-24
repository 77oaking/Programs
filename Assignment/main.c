#include <stdio.h>
#define input 100

int main()
{
    int a[input];
    int i, max, min, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=1; i<size; i++)
    {
        if(a[i] > max)
          max = a[i];
        if(a[i] < min)
          min = a[i];
    }

    printf("\nMaximum = %d\nMinimum = %d\n", max, min);

    return 0;
}





























//#include <stdio.h>
//
//int main(){
//    int n,m;
//    printf("Enter the number of Students:\n");
//    scanf("%d",&n);
//    printf("Enter the number of Courses:\n");
//    scanf("%d",&m);
//    int std[n];
//    float course_marks[m],sum;
//    for(int j=0;j<n;j++){
//
//        for(int i=0;i<m;i++){
//            printf("Enter the marks of course %d for student %d: ",i+1,j+1);
//            scanf("%f",&course_marks[i]);
//            sum=course_marks[i]+sum;
//        }
//        printf("Student %d marks ",j+1);
//        for(int i=0;i<m;i++){
//        printf("Course %d%d(%.2f) ",i+1,i+1,course_marks[i]);}
//        printf(" Avg is %.2f \n",sum/3);
//
//        //printf("Student %d marks course 11(%.2f) +course 22(%.2f) +course 33(%.2f) = Avg is %.2f\n",j+1,course_marks[0],course_marks[1],course_marks[2],sum/3);
//        sum=0;
//
//    }
//
//    return 0;
//}
//






//#include<stdio.h>
//int main()
//{
//   int i,n, std_i,co_i,sub;
//   printf("Enter the number of student ");
//   scanf("%d",&n);
//   printf("Enter the number of sub ");
//scanf("%d",&sub);
//float a[n],avg1,avg2,avg3,sum1=0,sum2=0,sum3=0, total_avg;
//   printf("enter the 1st student marks : ");
//for (i=0 ; i<n ;i++)
//{scanf("%f",&a[i]);
//sum1=sum1+a[i];
//}
//avg1=sum1/sub;
//   printf("enter the 2nd student the marks : ");
//for (i=0 ; i<n ;i++)
//{
//    scanf("%f",&a[i]);
//sum2=sum2+a[i];
//}
//avg2=sum2/sub;
//   printf("enter the 3rd student marks : ");
//for (i=0 ; i<n ;i++)
//{
//    scanf("%f",&a[i]);
//sum3=sum3+a[i];
//}
//avg3=sum3/sub;
//printf("1st student avg %f\n",avg1);
//printf("2nd student avg %f\n",avg2);
// printf("3rd student avg %f\n",avg3);
//total_avg=(avg1+avg2+avg3)/n;
//printf(" total avg of student %f\n",total_avg);
// return 0;
//}







































//#include <stdio.h>
//int main() {
//    int r, c, a[100][100], b[100][100], sum[100][100], i, j,sub[100][100];
//    printf("Enter the number of rows (between 1 and 100): ");
//    scanf("%d", &r);
//    printf("Enter the number of columns (between 1 and 100): ");
//    scanf("%d", &c);
//
//    printf("\nEnter elements of 1st matrix:\n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j) {
//            printf("Enter element a%d%d: ", i + 1, j + 1);
//            scanf("%d", &a[i][j]);
//        }
//
//    printf("Enter elements of 2nd matrix:\n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j) {
//            printf("Enter element a%d%d: ", i + 1, j + 1);
//            scanf("%d", &b[i][j]);
//        }
//
//
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j) {
//            sum[i][j] = a[i][j] + b[i][j];
//            sub[i][j] = a[i][j] - b[i][j];
//        }
//
//
//    printf("\nSum of two matrices: \n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j) {
//            printf("%d   ", sum[i][j]);
//            if (j == c - 1) {
//                printf("\n\n");
//            }
//        }
//    printf("\nSubstraction of two matrices: \n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j) {
//            printf("%d   ", sub[i][j]);
//            if (j == c - 1) {
//                printf("\n\n");
//            }
//        }
//
//    return 0;
//}
//















//
//int main(){
//    char c=250;
//    c+=8;
//    printf("%d",c);
//}






//int anotherFunction(int a, int b) {
//  int answer = 2;
//  int x = 0;
//  printf("In anotherFunction(%d,%d)\n",a,b);
//  while (b > a) {
//    printf("a is %d, b is %d\n", a, b);
//    answer = answer + (b - a);
//    b -= x;
//    a += x / 2;
//    x++;
//  }
//  return answer;
//}
//
//int someFunction(int x, int y) {
//  int a = x + y;
//  if (x < y) {
//    for (int i = 0; i < x; i++) {
//      printf("In the loop with i = %d, a = %d\n", i, a);
//      a = a + x;
//    }
//  }
//  else {
//    y = anotherFunction(y,a+1);
//  }
//  return a * (y-10);
//}
//
//int main(void) {
//  int x = 2;
//  int b = someFunction(3,x);
//  printf("b = %d\n", b);
//  printf("x = %d\n", x);
//  return 0;
//}

//int main (void) {
//  int a = 2;
//  int b = 6;
//  while (a <= b) {
//    if (a % 2 == 1) {
//      printf("a is %d\n", a);
//    }
//    else {
//      printf("b is %d\n", b);
//      for (int i = 0; i < b - a ; i++) {
//        printf("a * i + b = %d\n", a * i + b);
//      }
//    }
//    a++;
//    b--;
//  }
//  return 0;
//}
//










//
//int anotherFunction(int a, int b) {
//  int answer = 42;
//  int x = 0;
//  printf("In anotherFunction(%d,%d)\n",a,b);
//  while (b > a) {
//    printf("a is %d, b is %d\n", a, b);
//    answer = answer + (b - a);
//    b -= x;
//    a += x / 2;
//    x++;
//  }
//  return answer;
//}
//
//int someFunction(int x, int y) {
//  int a = x + y;
//  if (x < y) {
//    for (int i = 0; i < x; i++) {
//      printf("In the loop with i = %d, a = %d\n", i, a);
//      a = a + x;
//    }
//  }
//  else {
//    y = anotherFunction(y,a+4);
//  }
//  return a * y;
//}
//
//int main(void) {
//  int x = 2;
//  int a = someFunction(x,3);
//  printf("a = %d\n", a);
//  printf("x = %d\n", x);
//  return 0;
//}
//







//int main()
//{
//    printf("%d",g(2,3));
//    //f(3,6);
//    return 0;
//}
//int main (void) {
//  int a = 3;
//  int b = 6;
//  while (a <= b) {
//    if (a % 2 == 1) {
//      printf("a is %d\n", a);
//    }
//    else {
//      printf("b is %d\n", b);
//      for (int i = 0; i < b - a ; i++) {
//        printf("a * i + b = %d\n", a * i + b);
//      }
//    }
//    a++;
//    b--;
//  }
//  return 0;
//}
//int f (int x, int y) {
//  if (x + 2 < y) {
//    x = x + 3;
//    return y * x;
//  }
//  else {
//    return x + y + 2;
//  }
//}
//void f (int x, int y) {
//  while (x < y) {
//    printf("%d ", y - x);
//    x = x + 1;
//    y = y - 1;
//  }
//}
//int f (int n) {
//  int ans = 0;
//  for (int i = 1; i < n; i++) {
//    if (i < n/2) {
//      ans -= i;
//    }
//    else {
//      ans += i;
//    }
//  }
//  return ans;
//}

int g (int x, int n) {
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      x *= i + 1;
      continue;
    }
    x--;
    if (x == 0) {
      break;
    }
  }
  return x;
}

//int g (int x, int y) {
//  switch(x - y) {
//  case 0:
//    return x;
//  case 4:
//    y = y + 1;
//    break;
//  case 7:
//    x = x - 1;
//  case 9:
//    return x*y;
//  case 3:
//    y = x + 9;
//  default:
//    return y - x;
//  }
//return y;
//}





//
//    int num,temp,r,sum=0;
//    printf("Enter any num:");
//    scanf("%d",&num);
//
//    temp=num;
//    while(temp!=0)
//    {
//        r=temp%10;
//        sum=sum*10+r;
//        temp=temp/10;
//    }
//
//    if(num==sum)
//        printf("palindrome number");
//    else
//        printf("Not palindrome number");
//




//    int num1,num2,n1,n2,rem,lcm,gcm;
//    printf("Enter two num: ");
//    scanf("%d %d",&num1,&num2);
//
//    n1=num1;
//    n2=num2;
//
//    while(n2!=0)
//    {
//        rem=n1%n2;
//        n1=n2;
//        n2=rem;
//    }
//
//    gcm=n1;
//    lcm=(num1*num2)/gcm;
//    printf("GCM= %d\n",gcm);
//    printf("LCM= %d\n",lcm);
//




//    char str[200],ch;
//    int i,character,word;
//    i=character=word=0;
//    printf("write a sentence : ");
//    gets(str);
//    while((ch=str[i])!='\0')
//    {
//        if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
//        character++;
//        else if(ch==' ')
//        word++;
//        i++;
//    }
//    word++;
//    printf("Number Of Character = %d\n",character);
//    printf("Number of Word= %d\n",word);
//
//



//
//    int a,b,c,d;
//    float x1,x2,p,q;
//    printf("a= ");
//    scanf("%d",&a);
//    printf("b= ");
//    scanf("%d",&b);
//    printf("c= ");
//    scanf("%d",&c);
//    printf("d= ");
//    scanf("%d",&d);
//
//    d=b*b-4*a*c;
//
//    if(d>0)
//    {
//        x1=(-b+sqrt(d))/(2*a);
//        x2=(-b-sqrt(d))/(2*a);
//        printf("\n x1= %.2f\nx2= %.2f",x1,x2);
//    }
//    else if(d==0)
//    {
//        x1=x2=-b/(2*a);
//        printf("\nx1= %.2f\nx2= %.2f",x1,x2);
//
//    printf("\nx1= %.2f\nx2= %.2f",x1,x2);
//    }
//    else
//    {
//        p=-b/(2*a);
//        q=sqrt(-d)/(2*a);
//        printf("\nx1= %.2f\nx2= %.2f-%.2f",p,q,p,q);
//    }






















//    int year;
//    printf("Enter The Year :");
//    scanf("%d",&year);
//    if(year%4==0)
//    {
//        if(year%100==0)
//        {
//            if(year%400==0)
//            {
//                printf("Yes, This year is leap year  \n");
//            }
//            else
//            {
//                printf("no, This is not leap year\n");
//            }
//        }
//        else
//        {
//            printf("Yes, This is leap year  \n");
//        }
//    }
//    else
//    {
//        printf("No, This is not leap year\n");
//    }



//    int first, second,third,fourth,max;
//    printf("a= ");
//    scanf("%d",&first);
//    printf("b= ");
//    scanf("%d",&second);
//    printf("c= ");
//    scanf("%d",&third);
//    printf("d= ");
//    scanf("%d",&fourth);
//
//
//    if((first<second) && (first<third) && (first<fourth))
//        printf("Min=%d",first);
//    else if((second<first) && (second<third) && (second<fourth))
//        printf("Min=%d",second);
//    else if((third<second) && (third<first) && (third<fourth))
//        printf("Min=%d",third);
//    else if((fourth<second) && (fourth<third) && (fourth<first))
//        printf("Min=%d",fourth);



//    if((first>second) && (first>third) && (first>fourth))
//        printf("Max=%d",first);
//    else if((second>first) && (second>third) && (second>fourth))
//        printf("Max=%d",second);
//    else if((third>second) && (third>first) && (third>fourth))
//        printf("Max=%d",third);
//    else if((fourth>second) && (fourth>third) && (fourth>first))
//        printf("Max=%d",fourth);



//       if((first>second) && (first>third) && (first>fourth)){
//        if((second<first) && (second<third) && (second<fourth)){
//            mid1=third;
//            mid2=fourth;
//        }
//    else if((third<second) && (third<first) && (third<fourth)){
//        mid1=second;
//        mid2=fourth;
//    }
//    else if((fourth<second) && (fourth<third) && (fourth<first)){
//        mid1=second;
//        mid2=third;
//    }
//       }
//
//    else if((second>first) && (second>third) && (second>fourth)){
//        if((first<second) && (first<third) && (first<fourth)){
//        mid1=third;
//        mid2=fourth;
//        }
//        else if((third<second) && (third<first) && (third<fourth)){
//        mid1=first;
//        mid2=fourth;
//        }
//        else if((fourth<second) && (fourth<third) && (fourth<first)){
//        mid1=first;
//        mid2=third;
//        }
//    }
//
//    else if((third>second) && (third>first) && (third>fourth)){
//        if((first<second) && (first<third) && (first<fourth)){
//        mid1=second;
//        mid2=fourth;
//        }
//    else if((second<first) && (second<third) && (second<fourth)){
//        mid1=first;
//        mid2=fourth;
//    }
//    else if((fourth<second) && (fourth<third) && (fourth<first)){
//        mid1=first;
//        mid2=second;
//    }
//    }
//    else if((fourth>second) && (fourth>third) && (fourth>first)){
//    if((first<second) && (first<third) && (first<fourth)){
//        mid1=second;
//        mid2=third;
//    }
//    else if((second<first) && (second<third) && (second<fourth)){
//       mid1=first;
//       mid2=third;
//    }
//    else if((third<second) && (third<first) && (third<fourth)){
//        mid1=first;
//        mid2=second;
//    }
//    }
//    printf("mid1=%d,mid2=%d",mid1,mid2);
//













//    if((first<second) && (first<third) && (first<fourth))
//        printf("\nFirst number is smallest");
//    else if((second<first) && (second<third) && (second<fourth))
//        printf("\nSecond number is smallest");
//    else if((third<second) && (third<first) && (third<fourth))
//        printf("\nThird number is smallest");
//    else if((fourth<second) && (fourth<third) && (fourth<first))
//        printf("\nFourth number is smallest");
//






//    if(a>b)
//    {
//        if(a>c)
//            max=a;
//        else
//            max=c;
//    }
//    else
//    {
//        if(b>c)
//            max=b;
//        else
//            max=c;
//    }
//    printf("Maximum= %d",max);




//    mid= (a>b)?(a>c)?(b>c)?b:c:a:(b>c)?(a>c)?a:c:b;
//    printf("%d ",mid);


//    int mark;
//    printf("Mark= ");
//    scanf("%d",&mark);
//    if(mark>=60)printf("First Division");
//    else if(mark>=45) printf("Second Division");
//    else if(mark>=33) printf("Third Division");
//    else printf("Fail");




//    int a,b,min;
//    printf("a=");
//    scanf("%d",&a);
//    printf("b=");
//    scanf("%d",&b);
//    if(a<b)printf("Minimum= %d",a);
//    else printf("Minimum= %d",b);




//if(a>b)printf("Maximum= %d",a);
//    else printf("Maximum= %d",b);















//    long n;
//    printf("Print any number: ");
//    scanf("%ld",&n);
//    printf("Square root of %ld=%ld",n,(long)sqrt(n));




//    int x,y;
//    printf("X= ");
//    scanf("%d",&x);
//    printf("Y= ");
//    scanf("%d",&y);
//    printf("%d to the power %d = %.2f",x,y,pow(x,y));








//// constant PI is defined
//    const double PI =  3.1415926;
//    double x, result;
//
//    scanf("%lf",&x);
//
//
//    result = asin(x);
//    printf("Inverse of sin(%.2f) = %.2lf in radians\n", x, result);
//
//    // converting radians to degree
//    result = asin(x)*180/PI;
//    printf("Inverse of sin(%.2f) = %.2lf in degrees\n", x, result);
//
//    // paramter not in range
////    x = 1.2;
////    result = asin(x);
////    printf("Inverse of sin(%.2f) = %.2lf", x, result);




//
//    int a,b,c;
//
//
//    printf("a= ");
//    scanf("%d",&a);
//    printf("b= ");
//    scanf("%d",&b);
//    c=a^b;
//    printf("%d ^ %d= %d",a,b,c);







//    float c,f;
//    printf("F=");
//    scanf("%f",&f);
//    f=(float)5/9*(f-32);
//    printf("C= %f",f);



//    int r;
//    float area;
//    printf("Radius= ");
//    scanf("%d",&r);
//    area=M_PI*r*r;
//    printf("Area= %f",area);




//float f;
//int i;
//
//f=1;
//i=2;
//
//printf("\nValue of float, f= %f", f);
//printf("\nValue of integer, i= %d", i);
//
//f=i;
//printf("\nValue of float, f= %f", f);
//
//return 0;
//int i,j;
//i=10;
//j=10;
////++i;
////j++;
////printf("%d %d \n",i,j);
////printf("%d %d \n",++i,j++);
////printf("%d %d \n",i++,++j);++i;
//--i;
//j--;
//printf("%d %d \n",i,j);
//printf("%d %d \n",--i,j--);
//printf("%d %d \n",i--,--j);






//
//int main()
//{
//
////    char n;
////    printf("Enter any Character: ");
////    scanf("%c",&n);
////    printf("%d",n);
////    return 0;
//
//char char1,char2;
//char1='A';
//char2='B';
//printf("ASCII value of A= %d and B= %d \n", char1,char2);
//printf("A-B=%d",char1-char2);
//return 0;
//
//}

