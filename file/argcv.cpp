/*
პროგრამა მთლიანად ეძღვნება არგუმენტებს რომელიც მას გადაეცემა
*/
#include <iostream>
#include <fstream> //ფაილებთან სამუშაოდ
using namespace std;

int printArgvs (int argc, char const *argv[]) {

  std::cout << argc << std::endl; // დაბეჭდოს არგუმენტების რაოდენობა
  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl; // გამოიტანს ყველა პარამეტრს, რაც მითითებული იქნება
  }

}


int main(int argc, char const *argv[]) {

  if (argc > 1) { // თუ რაიმე არგუმენტი მიეთითება, მაშინ შესრულდება ეს ბლოკი
      printArgvs (argc,  argv);

  }
  else { // თუ პროგრამას უბრალოდ გაუშვებენ, პარამეტრების გაეშე, მაშინ მიიღებენ ამ შეტყობინებას
    std::cout << "პროგრამის სახელია "  << argv[0] << " და მას არცერთი პარამეტრი არ გადაეცემა" << std::endl;
  }

  return 0;
}
