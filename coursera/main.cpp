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
    int vomule = 20000, h, r;
    float water;
    cout << "请输入小圆桶的深H和底面半径R" << endl;
    cin >> h >> r;
    water = vomule / (M_PI * r * r * h);
    cout << ceil(water) << endl;
}


