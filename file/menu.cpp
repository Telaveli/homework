/*
░ 2591 ▒ 2592 ▓ 2593 │ 2502 ┤ 2524 ╡ 2561 ╢ 2562 ╖ 2556	╕ 2555	╣ 2563	║ 2551	╗ 2557	╝ 255D	╜ 255C	╛ 255B	┐ 2510
└ 2514	┴ 2534	┬ 252C	├ 251C	─ 2500	┼ 253C	╞ 255E	╟ 255F	╚ 255A	╔ 2554	╩ 2569	╦ 2566	╠ 2560	═ 2550	╬ 256C	╧ 2567
╨ 2568	╤ 2564	╥ 2565	╙ 2559	╘ 2558	╒ 2552	╓ 2553	╫ 256B	╪ 256A	┘ 2518	┌ 250C	█ 2588	▄ 2584	▌ 258C	▐ 2590	▀ 2580

ფსევდო გრაფიკა და მისი კოდები
*/
#include <iostream>
using namespace std;


int menu()
{
    int mnuItem;
      // ვხატავთ მენიუს
    cout  << endl;
    cout << "╒══════════════════════════════════╕" << endl;
    cout << "│ამოირჩიე მენიუ                    │" << endl;
    cout << "╞══════════════════════════════════╡" << endl;
    cout << "│0. გამოსვლა                       │" << endl;
    cout << "│1. პირველი მენიუ                  │" << endl;
    cout << "╘══════════════════════════════════╛" << endl;

    cin >>  mnuItem;
    return  mnuItem;


}
int main(int argc, char const *argv[]) {
  int mnuItem;
  while (true) { // იხსნება უსასრულო ციკლი, პრორამიდან გამოსვლა მოხდება მენიუს დახმარებით
    switch (mnuItem = menu()) {
      case 0: {std::cout << "გამოსვლა.." << std::endl;break;}
      case 1:{std::cout << "პირველი მენიუ" << std::endl;break;}
      default: {std::cout << "ყურადღებით! უნდა ამოირჩიო მენიუს პუნქტის შესაბამისი ციფრი" << std::endl;break;} //აქ წამოვა თუ არჩევანი განსხვავებულია 0-ის და 1-სგან
    }
    if (mnuItem==0) {return 0; }
  }

}