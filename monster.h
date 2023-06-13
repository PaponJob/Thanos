#ifndef monster_h
#define monster_h

class monster {
private:
  string name;
  int hp, potion;

public:
  bool operator==(monster x);
  void operator++() { hp++; };
  void operator+=(int a) { hp += a; }
  void Attack(monster &);
  void Heavy_Attack(monster &);
  void heal();
  void print(); // to print all data
  monster(string = "za", int = 0, int = 0);
  ~monster(); // declare this first!
};
void monster::Attack(monster &b) {
  cout << name << " attack " << b.name << endl;
  if (b.hp > 10)
    b.hp -= 10;
  else {
    b.hp = 0;
    cout << b.name << " is dead" << endl;
  }
}
void monster::Heavy_Attack(monster &b){
  cout << name << " heavy attack " << b.name << endl;
  if (b.hp > 30)
    b.hp -= 30;
  else {
    b.hp = 0;
    cout << b.name << " is dead" << endl;
  }
}
void monster::heal(){
  hp+=10;
  potion-=5;
  cout<<name<<" use potion and is now restored!"<<endl;
}
  
   
void monster::print() {
  cout << "Name:" << name << endl;
  cout << "HP:" << hp << endl;
  cout << "potion" << potion << endl << endl;
}
bool monster::operator==(monster x) {
  return hp == x.hp && potion == x.potion && name == x.name;
}
monster::monster(string n, int a, int b) {
  name = n;
  hp = a;
  potion = b;
}
// alt+126 = ~
monster::~monster() { cout << name << " is destroyed"<< endl; }
void monster::print();

#endif