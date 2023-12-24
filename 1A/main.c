#include <stdio.h>
#include <stdlib.h>

int main()
{

//    int n,m,t;
//    scanf("%d%d%d",&n,&m,&t);
//
//    if((n*m)>((a-1)*(a-1)&&(n*m)<(a*a))(
//    printf("%d",a)
//    );
//    else a++;
//    int a=1;
//    while((n*m)>((a-1)*2)&&(n*m)<(a*a)){
//            printf("%d",a);
//            a++;
//         }
    long long int x,y,z,a,b;
    scanf("%lld%lld%lld",&x,&y,&z);
    if(x%z==0){
        a=(x/z);
    }
    else if(x%z!=0){
        a=(x/z)+1;
    }
    if(y%z==0){
        b=(y/z);
    }
    else if(y%z!=0){
        b=(y/z)+1;
    }

    printf("%lld\n",a*b);

    return 0;
}
