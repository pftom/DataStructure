//
//  main.cpp
//  data_structure
//
//  Created by Tom on 2017/8/110.
//  Copyright © 2017年 Tom. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <cstdio>

int revereList(int arr[]) {
    int i;

    int low = arr
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int *cpointer = revereList(arr);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", cpointer[i]);
    }
    
    return 0;
}
