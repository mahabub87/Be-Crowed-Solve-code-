#include<stdio.h>
void main()
{
int i,j,ary[3][4]={{2,4,5,6},{3,4,2,8},{3,3,5,6}};
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d ",ary[i][j]);
    }
    printf("\n");
}


}
