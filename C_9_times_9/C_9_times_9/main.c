//
//  main.c
//  C_9_times_9
//
//  Created by Xiao Xiang on 16/2/24.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>

int main(){
    int i = 9;
    int j = 1;
    int result;
    for (i = 9; i > 0; i--) {
        for (j = 1; j <= i; j++) {
            result = i * j;
            printf("%d*%d=%d ", i, j, result);
        }
        printf("\n");
    }
}