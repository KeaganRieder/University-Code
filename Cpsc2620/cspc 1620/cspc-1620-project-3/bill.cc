//keagan rieder

//program purpose: read in data from a file to and use to compute,
// and display results
//bill.in is file used for testing

//declearing which library taht are being used
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//declearing constants
const double GST_MULTIPLE = 0.05; // used in caculating GST
const int LINE_SPACEING = 20; // making a base value for spaces in output

int main(){
  ifstream inData;
  string billName;
  double itemQuantity, unitPrice, itemTotal,itemNum =1
  double totalGST, GrandTotal;

  //promting user to input the name of file to open
  cout << "please input the name of the file name you'd like opened >";
  cin >> billName;

  inData.open(billName);

  //displaying output header
  cout << "Item Number ----- Unit Price ----- Quantity ----- itemTotal \n\n";

  //processing file
  inData >> unitPrice >> itemQuantity; //teling code where to start pulling from file

  while (!inData.eof()) {//run until end of file.
    itemTotal = itemQuantity * unitPrice;
    GrandTotal += itemTotal;

    //output
    cout << setprecision(0)<< setw(5) << right << itemNum <<setw(LINE_SPACEING) << right
    << setprecision(2) <<right <<fixed << unitPrice << setw(LINE_SPACEING) << right
    << setprecision(0)<< itemQuantity << setw(LINE_SPACEING) << right
    << setprecision(2) << fixed << itemTotal << endl;

    inData >> unitPrice >> itemQuantity;

    itemNum ++;
  }

  totalGST = GrandTotal * GST_MULTIPLE;
  GrandTotal += totalGST;

  cout << setw(LINE_SPACEING) << right << "GST: " << setprecision(2) << right << fixed << totalGST <<endl; //outputing gst to user
  cout << setw(LINE_SPACEING) << right << "GrandTotal:  " <<setprecision(2) << right << fixed << GrandTotal;

  inData.close();//closing file

  return 0;//telling program end

}
