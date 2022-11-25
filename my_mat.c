//
// Created by Moshe Nahshon on 23/11/2022.
//
#include <stdio.h>
#include "my_mat.h"
#include <limits.h>
int mat[10][10] = {    {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
                       {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 }  };


int min(int x, int y);

void functionA(){

    int g;
    for(int i = 0; i < 10; i++) {
        for(int j = 0;j < 10;j++) {
            scanf("%d",&mat[i][j]);  
        }
    }
    // make the buffer jump from ' ' (space) to the next letter.
    scanf("%d",&g);
    //make all the empty places max num' (except the \).
       
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i != j) && (mat[i][j] == 0))

                mat[i][j] = SHRT_MAX;
        }
    }
    //:Floyd–Warshall_algorithm
    for(int k = 0;k < 10;k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                mat[i][j] = min(mat[i][j],mat[i][k] + mat[k][j]);
            }
        }
    }

}
int min(int x,int y){
    if(x < y)
        return x;
    else
        return y;
}

void functionB(){
    int i,j;
        scanf("%d %d",&i,&j);
            if((mat[i][j] != SHRT_MAX) && (i != j))
                printf("true\n");
            else
                printf("false\n");
    // make the buffer jump from ' ' (space) to the next letter.
    scanf("%d",&i);
}

void functionC() {
    // x = i , y = j.
        int x, y;
        while (scanf("%d %d", &x, &y) != 2);
        if (mat[x][y] != SHRT_MAX && mat[x][y] != 0)
            printf("%d\n", mat[x][y]);
        else
                printf("-1\n");
    // make the buffer jump from ' ' (space) to the next letter.
    scanf("%d",&x);
}
