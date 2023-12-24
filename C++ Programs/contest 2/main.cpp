#include <iostream>

using namespace std;

int lcm(int n)
{
    int  max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM  " << max;
            break;
        }
        else
            ++max;
    }
    while (true);

    return 0;
}

int main()
{


    return 0;
}

//    int arr[100];
//    int index[1000];
//
//    int i, j, size, count = 0;
//
//    /* Input size of array */
//    printf("Enter size of the array : ");
//    scanf("%d", &size);
//
//    /* Input elements in array */
//    printf("Enter elements in array : ");
//    for(i=0; i<size; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    /*
//     * Find all duplicate elements in array
//     */
//    for(i=0; i<size; i++)
//    {
//        for(j=i+1; j<size; j++)
//        {
//            /* If duplicate found then increment count by 1 */
//            if(arr[i] == arr[j])
//            {
//                index[count]=i;
//                index[count+1]=j;
//                count++;
//                break;
//            }
//        }
//    }

//printf("\nTotal number of duplicate elements found in array = %d", count);
