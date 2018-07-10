// Seung Eun Lee
// 2018-07-02
//
#include <iostream>

using namespace std;

int main()
{
    double serviceCharge = 0.015;
    int sharesSold;
    double purchasePrice;
    double salePrice;
    double totalCharges;//total service charges
    double invested; //amount invested
    double amountGL; // amount Gained or Lost
    double amountReceived;
    
    cout << "How many shares did you sell? ";
    cin >> sharesSold;
    cout << "What was the purchasing price for each share? ";
    cin >> purchasePrice;
    cout << "What was the selling price of the share? ";
    cin >> salePrice;
    
    invested = (sharesSold * purchasePrice)*(1+serviceCharge);
    totalCharges = serviceCharge*(sharesSold*purchasePrice+sharesSold*salePrice);
    amountGL =sharesSold*salePrice-sharesSold*purchasePrice-totalCharges;
    amountReceived= (sharesSold*salePrice)-sharesSold*salePrice*serviceCharge;
    
    cout << "Amount invested: " << invested << endl;
    cout << "Service charges: " << totalCharges << endl;
    cout << "Amount gained or lost: " << amountGL << endl;
    cout << "Amount you received: " << amountReceived << endl;
    
    return 0;
}
