// file.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    ofstream fout("cppstudio.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    fout << "Работа с файлами в С++"; // запись строки в файл
    fout.close(); // закрываем файл
    system("pause");
    return 0;
}
