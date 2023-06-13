#include <iostream>
using namespace std;

#include "monster.h"
#include "Thanos.h"
int main(int argc, char* argv[]) {
  monster *p=new monster("Infinity Gaurdian 3",30,50);
  monster A("Infinity Gaurdian 1",100,10), B("Infinity Gaurdian 2",50,20);
  A.print();
  B.print();
  p->print();

  Thanos T;
  int n;
  //cout<<"How many monsters?";
  //cin>>n;

  monster *m=new monster[n]; //make sure they have hp
 
  /* Add some story*/
  cout << "=================" << endl;
  cout<< "Thanos has arrived at the gates of Infinity Stones. The gaurdians immediately rush in to defend the stones."<<endl;
  cout<< "However, Thanos has prepare a mind controlling device which erase the gaurdians' mind and make them attack each other."<<endl;
  cout<< "As a result of this, Thanos sneaks past the door to get the stones."<<endl;
  cout << "=================" << endl;
  cout<< "Round 1!"<<endl;
  B.Attack(A);
  B.heal();
  p->Attack(A);
  ++T;
  A.print();
  B.print();
  p->print();
  cout<<"Thanos just got a stone!"<<endl;
  T.snap_finger(m,n);
  cout << "=================" << endl;
  cout<<"Round 2!"<<endl;
  B.Heavy_Attack(A);
  A.Attack(*p);
  B.Attack(*p);
  B.heal();
  ++T;
  ++T;
  A.print();
  B.print();
  p->print();
  T.snap_finger(m,n);
  cout<<"Thanos just got 2 more stones"<<endl;
  cout<<"Thanos now has 3 stones!"<<endl;
  cout << "=================" << endl;
  cout<<"Round 3!"<<endl;
  p->Heavy_Attack(B);
  A.Heavy_Attack(B);
  p->heal();
  A.print();
  B.print();
  p->print();
  ++T;
  ++T;
  ++T;
  T.snap_finger(m,n);
cout << "=================" << endl;
  int i;
  for(i=0;i<n;i++)
      m[i].print();
  

  delete [] m;

}
  
  