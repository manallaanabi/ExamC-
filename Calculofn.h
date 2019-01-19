//
// Created by Yasmine on 19/01/2019.
//

#ifndef UNTITLED3_CALCULOFN_H
#define UNTITLED3_CALCULOFN_H
void Calcul(){
    int n;
    double r,PV,PMT,val;

    cout << " Please provide the interest rate r : " << endl;
    cin >> r;

    while (r<=0)  {
        cout << " Please provide a strictly positive number for the interest rate r : " << endl;
        cin >> r;
    }

    cout << "Please provide the present value pv : " << endl;
    cin >> PV;

    while (PV<=0)  {
        cout << " Please provide a strictly positive number for PV: " << endl;
        cin >> r;
    }



    cout << "Please provide the payment PMT: " << endl;
    cin >> PMT;
    while ( PMT<= r*PV ) {
        cout << "r*PV: " << PV*r<< "\n";
        cout << " Please provide a number stricly greater than r*PV for the instalment PMT: " << endl;
        cin >> PMT;
    }

    cout << "n: " << log(PMT/(PMT-r*PV))/log(1+r) << "\n";


}
#endif //UNTITLED3_CALCULOFN_H
