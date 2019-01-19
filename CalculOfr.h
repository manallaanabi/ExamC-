//
// Created by Yasmine on 19/01/2019.
//

#ifndef UNTITLED3_YIELDTOMATURITY_H
#define UNTITLED3_YIELDTOMATURITY_H

#endif //UNTITLED3_YIELDTOMATURITY_H
void Cal(){
int r,a,b,i;

    a=1;
    b=2;
    for (i=0; i<=10; i=i+1) {
        r=a;
        r=b;
        r = b - (a - (b - a)) / (b - a);

    }
    cout << "rate: "  <<  r << "\n";
}

