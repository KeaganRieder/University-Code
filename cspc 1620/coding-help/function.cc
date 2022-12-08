

#include <iostream>
#include <cmath>

using namespace std;

//function prototypes
int isTriangle (double,double,double);
void VoidTest (double&, double&,double&);



int main() {
  double side1 = 9, side2 = 1000, side3=2;
  string runAgain;

  cout << "before void function side1 = " <<side1 << " side2 =" << side2 << " side3 = " << side3<< endl;

  //passing side1, side2, side3 into the function to be modifed. and through using a double& any modifications made to
  //any varibles (where theirs a & beside the varible declaerer like double), in the function will carry on throughout
  //the code
  VoidTest (side1, side2, side3);

  cout << "after void function side1 = " <<side1 << " side2 = " << side2 << " side3 = " << side3<< endl;

  //isTriangle(side1, side2, side3)
  //function name ( paramiters that you want a pass to the function )
  //in the case of isTriangle it has three paramiters it requires inorder to run
  // that being side1, side2 and side3 all of which are doubles
  if (isTriangle(side1, side2, side3)) {
    cout<< "\ntrue";
  }

  return 0;
}

//function definitions
/*purpose: checks if sides make triangle
paramiters: inputs --side1,side2,side3 -- all  doubles
ruturns: ture if it's a triangle, otherwise false
*/
int isTriangle (double side1, double side2, double side3) {
  if (((side1 + side2) > side3 && (side1 + side3) > side2 && (side3 + side2) > side1)) {
    return true;
  }
  else
  {
    return false;
  }
}


void VoidTest (double& side1, double& side2, double& side3)
{
  //switching the values for anytime they are called fallowing when this function is called, eiether in the int main or other functions.
  side1 = 12.5;
  side2 =16.2;
  side3 = 12.5;
}
