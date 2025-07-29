#include<stdio.h>
void main()
{
    int ary[50],i,n;
    printf("enter ary size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }
for(i=0;i<n;i++){
    printf("%d\n",ary[i]);
}
printf("\n");
for(i=n-1;i>=0;i--){
    printf("%d\n",ary[i]);
}









}
