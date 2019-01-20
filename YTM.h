//
// Created by Manal on 19/01/2019.
//

#ifndef UNTITLED3_YTM_H
#define UNTITLED3_YTM_H
//in this section we will calculate r by approximating the YTM by using the secant method as it provides the best approximation of true YTM,
//We will use f(r)=(PMT/(1+1/((1+r)^n-1))-PV 

void YTM(){
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

#endif //UNTITLED3_YTM_H
