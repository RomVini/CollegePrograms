#include <stdio.h>

void rowColLagest(int,int,int [*][*]);

void rowColLargest(int x,int y,int arr[x][y]) {
    int row[x],col[y];
    
    //for rows
    int r_max=0,ir=0;
    for(int i=0;i<x;i++) {
        r_max=arr[i][0];
        for(int j=0;j<y;j++) {
            if(arr[i][j]>r_max)
            r_max=arr[i][j];
        }
        row[ir]=r_max;
        ir++;
    }

    //for columns
    int c_max=0,ic=0;
    for(int j=0;j<y;j++) {
        c_max=arr[0][j];
        for(int i=0;i<x;i++) {
            if(arr[i][j]>c_max)
            c_max=arr[i][j];
        }
        col[ic]=c_max;
        ic++;
    }

    //printing
    printf("Maximum elements of rows:");
    for(int i=0;i<x;i++)
    printf("%d ",row[i]);
    printf("\n");
    printf("Maximum elements of columns:");
    for(int i=0;i<y;i++)
    printf("%d ",col[i]);
}

int main() {
    printf("Enter dimensions of array:\n");
    int r=0,c=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the elements:\n"); 
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    rowColLargest(r,c,a);
    return (0);
}
