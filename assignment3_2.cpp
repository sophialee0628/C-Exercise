// Seung Eun Lee
// 2018-07-02
//Cindy uses the services of a brokerage firm to buy and sell stocks. 
//The firm charges 1.5% service charges on the total amount for each transaction, buy or sell. 
//When Cindy sells stocks, she would like to know if she gained or lost on a particular investment. 
//Write a program that allows Cindy to input the number of shares sold, the purchase price of each share, and the selling price of each share. The program outputs the amount invested, the total service charges, amount gained or lost, and the amount received after selling the stock.
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
