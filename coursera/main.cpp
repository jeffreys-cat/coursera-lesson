//
//  main.cpp
//  coursera
//
//  Created by Jian Hu on 27/12/2017.
//  Copyright © 2017 Jian Hu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int ary[6];
    int oddMax = 0, evenMin = 100, result;
    //    input
    for (int i = 0; i < 6; i++) {
        cin >> ary[i];
    }
    // 分出奇偶数
    for (int i = 0; i < 6; i++) {
        if (ary[i] % 2 == 0) {
            if (evenMin > ary[i]) {
                evenMin = ary[i];
            }
        } else if (ary[i] % 2 == 1) {
            if (ary[i] > oddMax) {
                oddMax = ary[i];
            }
        }
    }
    result = abs(oddMax - evenMin);
    //    print
    cout << result << endl;
}

