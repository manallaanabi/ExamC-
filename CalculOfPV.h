//
// Created by Yasmine on 19/01/2019.
//

#ifndef UNTITLED3_CALCULOFPV_H
#define UNTITLED3_CALCULOFPV_H
void CalculPV(){
    int n;
    double r,PV,PMT;

    cout << " Please provide the interest rate r : " << endl;
    cin >> r;

    while (r<=0)  {
        cout << " Please provide a positive integer for the interest rate r : " << endl;
        cin >> r;
    }

    cout << "Please provide the number of periods n : " << endl;
    cin >> n;

    while (n<0)  {
        cout << " Please provide the number of periods n : " << endl;
        cin >> r;
    }

    cout << "Please provide the payment PMT: " << endl;
    cin >> PMT;

    cout << "PV: " << PMT/(r * (1+ (1/(pow(1+r,n) -1))))<< "\n";


}
#endif //UNTITLED3_CALCULOFPV_H
