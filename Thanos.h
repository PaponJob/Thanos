#include"monster.h"

class Thanos {
private:
	int stones;
	int hp; //extra hp;
public:
	/* constructor and destructor */
  void Attack(monster &);
  Thanos(int=0,int=1000);
  
  ~Thanos();

	void snap_finger(monster[],int); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};

Thanos::Thanos(int a, int b){
  stones=a;
  hp=b;
  cout<<"Number of Stone Thanos has:"<<stones<<endl;
  cout<<"Amount of HP Thanos has:"<<hp<<endl;
}
void Thanos::operator++(){
  stones++;
}

void Thanos::snap_finger(monster m[], int n){
  if(stones<6){ 
    cout<<"Thanos snap his fingers!"<<endl;
    cout<<"Not enough stones"<<endl;
  }
  else {cout<<"Thanos snap finger"<<endl;
        cout<<"Thanos:Reality can be whatever I want..."<<endl;
      
       }
      //m[i].hp=0; //<--make sure to have another function to do this
    }
  Thanos::~Thanos() { 
    cout<<"Thanos finally got all the infinity stones and succeed in snapping his fingers, some of the gaurdians can feel their body disappearing."<<endl;
    cout<<"However, the stones is proven to be too strong for Thanos."<<endl;
    cout << "Thus, Thanos dies" << endl; }
void monster::print();