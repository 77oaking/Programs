#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//1 hour			3600 seconds
//1 day			86400 seconds
//1 week			604800 seconds
//1 month (30.44 days)	2629743 seconds
//1 year (365.24 days)	31556926 seconds



 epoch(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   long long int t=final_date*86400+final_month*2629743+final_year*31556926;
   printf("Epoch of your time: %lli",t);

}


int main(){
    int month,day,year;
    int p_month,p_day,p_year;

    printf("Enter current month (1-12): ");
    scanf("%d",&p_month);
    printf("Enter current day: ");
    scanf("%d",&p_day);
    printf("Enter current year: ");
    scanf("%d",&p_year);
    printf("Enter your birth month (1-12): ");
    scanf("%d",&month);
    printf("Enter your birth day: ");
    scanf("%d",&day);
    printf("Enter your birth year: ");
    scanf("%d",&year);


    epoch(p_day,p_month,p_year,day,month,year);

    return 0;
}




////// function to calculate current age
////void findAge(int current_date, int current_month,
////             int current_year, int birth_date,
////             int birth_month, int birth_year)
////{
////    // days of every month
////    int month[] = { 31, 28, 31, 30, 31, 30, 31,
////                          31, 30, 31, 30, 31 };
////
////    // if birth date is greater then current birth
////    // month then do not count this month and add 30
////    // to the date so as to subtract the date and
////    // get the remaining days
////    if (birth_date > current_date) {
////        current_date = current_date + month[birth_month - 1];
////        current_month = current_month - 1;
////    }
////
////    // if birth month exceeds current month, then do
////    // not count this year and add 12 to the month so
////    // that we can subtract and find out the difference
////    if (birth_month > current_month) {
////        current_year = current_year - 1;
////        current_month = current_month + 12;
////    }
////
////    // calculate date, month, year
////    int calculated_date = current_date - birth_date;
////    int calculated_month = current_month - birth_month;
////    int calculated_year = current_year - birth_year;
////
////    // print the present age
////    printf("Present Age\nYears: %d  Months: %d  Days:"
////           " %d\n", calculated_year, calculated_month,
////                                      calculated_date);
////}
////
////// driver code to check the above function
////int main()
////{
////    // current dd// mm/yyyy
////    int current_date = 7;
////    int current_month = 12;
////    int current_year = 2017;
////
////    // birth dd// mm// yyyy
////    int birth_date = 16;
////    int birth_month = 12;
////    int birth_year = 2009;
////
////    // function call to print age
////    findAge(current_date, current_month, current_year,
////            birth_date, birth_month, birth_year);
////    return 0;
////}
