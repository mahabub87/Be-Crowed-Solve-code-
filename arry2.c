#include<stdio.h>
void main(){
int ary1[50],ary2[50],i,n;
printf("Enter Array size:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&ary1[i]);
     printf("ARRAY 1:%d\n",ary1[i]);

}
 //printf("ARRAY 1:%d\n",ary1[i]);
 printf("\n");
 for(i=n-1;i>0;i--){
    ary2[i]=ary1[1];
 }
 printf("Array 2:%d",ary2[i]);
















}
