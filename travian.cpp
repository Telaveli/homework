#include <iostream>
#include <cstdlib>
using namespace std;
// მენიუ
int menu() {
  int mnuItem ;
    // ვხატავთ მენიუს
  cout  << endl;
  cout << "╒══════════════════════════════════╕" << endl;
  cout << "│ამოირჩიე მენიუ                    │" << endl;
  cout << "╞══════════════════════════════════╡" << endl;
  cout << "│1. Clubswingers (დუბინები)        │" << endl;
  cout << "│2. Axefighter (ტაპორშიკი)         │" << endl;
  cout << "╞══════════════════════════════════╡" << endl;
  cout << "│0.Exit(გასვლა)                    │" << endl;
  cout << "╘══════════════════════════════════╛" << endl;
  cout << ": ";
  cin >>  mnuItem;
  // cin.ignore();
  // cin.get();
  return  mnuItem;
}
// დუბინშიკი
int char_Clubswinger () {
  int  clubswinger_num(0);
  int wood, clay, iron, damage; // res wood[0] clay[1] iron[2]
  wood = 85; clay = 65;  iron = 30; damage = 40;
  int  res[3] = { wood , clay , iron } ;
    cout << "Enter Clubswinger Number: ";
      cin >> clubswinger_num;
        cout << "Clubswingers: " << clubswinger_num << endl;
        cout << "Damage: " << damage * clubswinger_num<< endl;
        cout << "Wood: " << res[0] * clubswinger_num <<"| Clay: " << res[1] * clubswinger_num <<
                                                       "| Iron: " << res[2] * clubswinger_num<<
                                                       "| Resources: " << (res[1] + res[2] + res[0]) * clubswinger_num<<endl;
}
// ტაპორშიკი
int char_Axefighter () {
  int  axefighter_num(0);
  int wood, clay, iron, damage; // res wood[0] clay[1] iron[2]
  wood = 80; clay = 65;  iron = 130; damage = 60;
  int  res[3] = { wood , clay , iron } ;
    cout << "Enter Axefighter Number: ";
      cin >> axefighter_num;
        cout << "Clubswingers: " << axefighter_num << endl;
        cout << "Damage: " << damage * axefighter_num<< endl;
        cout << "Wood: " << res[0] * axefighter_num <<"| Clay: " << res[1] * axefighter_num <<
                                                       "| Iron: " << res[2] * axefighter_num<<
                                                       "| Resources: " << (res[1] + res[2] + res[0]) * axefighter_num<<endl;
}



int main(int argc, char const *argv[]) {
  int mnuItem;
  //vs(void char_Axefighter());
    while (true) {
      switch (mnuItem=menu()) {
          case 1: {char_Clubswinger(); cout << "Press eny key to continiu.."<<endl; cin.ignore(); cin.get(); break; }
          case 2: {char_Axefighter(); cout << "Press eny key to continiu.."<<endl; cin.ignore(); cin.get(); break; }
          case 0: {cout << "EXIT(გასვლა) "<<endl; break;}
          default : { cout << "Error! " << endl;}
        }
            if (mnuItem==0) {return 0;}
} 
std::cout  << '\n';
}
