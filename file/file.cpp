#include <iostream> // შეტანა /გამოტანა
#include <fstream> // ფაილებთან მუშაობა
#include <iomanip> // შეტანა/გამოტანის მანიპულაციები
#include <cmath>  // მათემატკური ფუნკციები
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "geo");

    // ოფიექტს ვაკავშირებთ ფაილთან, ამასთანავე ფაილს ვხნით მასში ჩაწერის რეჟიმით და ყველაფერს ვშლით მასში
    ofstream fout("data_types.txt", ios_base::out | ios_base::trunc);

    if (!fout.is_open()) // თუ ფაილი არ გაიხსნა
    {
     cout << "ფაილი არ იხსნება" << endl; // დაბეჭდავს შესაბამის შეტყობინებას
     return 1; // გამოვა პროგრამიდან კოდით 1
    }

        fout << "     data type      "   << "byte"                      << "      "    << "    max value  " << endl  // заголовки столбцов
             << "bool-ის ზომა                =  " << sizeof(bool)                << "         " << fixed << setprecision(2)          << (pow(2,sizeof(bool) * 8.0) - 1)        << endl;
        fout.close(); // პროგრამას როცა არ სჭირდება ფაილი, უნდა დაიხუროს
    cout << "მონაცემები ჩაიწერა ფაილში data_types.txt" << endl;
    system("pause");
    return 0;
}
