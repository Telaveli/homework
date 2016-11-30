#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//**************************(prog1)***************************************<<
int prog1() {
char string_file[20];
	cout << "\tფაილის სახელი: ";
	cin >> string_file;
	ifstream in_stream(string_file);
if (!in_stream){
    cout << "ფაილი ვერ მოიძებნა: " << string_file << '\n';
    return 1;
	}
const int ROWS  = 50;
string strings1[ROWS];
int i = 0;
while (i<ROWS && getline(in_stream, strings1[i])){
	   i++;
	}
for (int n=0; n<i; ++n)
    cout << strings1[n] << '\n';
in_stream.close();
}
//***************************************************************************
//***************************(calculator)**********************************<<

void calculator(float x, float y);
        float a, b, result;
        char nishani;


void calculator(float x, float y) {
        a=x;
        b=y;
        switch (nishani) {
                case '+': result = x + y;
                          break;
                case '-': result = x-y;
                          break;
                case '*': result = x*y;
                          break;
                case '/': result = x/y;
                          break;
                default: cout << "EROR" << endl;
        }
}

//****************************************************************************
int main()
{
int mnuItem = 0;
while (true) {
  std::cout<<"\n\t╒══════════════════════════════════╕" << std::endl;
  std::cout << "\t│ამოირჩიე პროგრამა                 │" << std::endl;
  std::cout << "\t╞══════════════════════════════════╡" << std::endl;
  std::cout << "\t│1. ხსნის ფაილს                    │" << std::endl;
  std::cout << "\t│2. კალკულატორი                    │" << std::endl;
	cout<< "\t│0. გამოსვლა                       │" << endl;
  std::cout << "\t╘══════════════════════════════════╛" << std::endl;
	cout <<"\t:";
  std::cin >> mnuItem;
  switch (mnuItem) {
	case 0: {cout << "\t\nგამოსვლა\n" << endl;break;}
	case 1: {cout << "\t\nვხსნი ფაილს\n" << endl;break;}
	case 2: {cout << "\t\n მაგ. 47*19\n" << endl; break;}
	default: {cout <<"\t\nსწორად ამოირჩიე?\n" << endl;break;}
  }
if (mnuItem == 1) {
	prog1 ();
	}
if (mnuItem == 2) {

	cin >>a>>nishani>>b;
	calculator(a,b);
	cout<<"\t"<<a<<nishani<<b<<"="<<result<<endl;
	}
if (mnuItem == 0) return 0;
  }

}
