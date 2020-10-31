#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Ana are mere.";                 ///se declara stringul
    ///getline(cin,str);       ///citire string    ( std::cin>>, string str)

    cout << "Sirul initial este: ";         ///cu cout se afiseaza sirul
    cout << str << "\n";

    ///push.back();
    str.push_back('#');         ///adaug la finalul stringului caracterul 's'

    cout << "String dupa pusb_back este: ";
    cout << str << "\n";

    ///pop_back();
    str.pop_back();             ///se sterge ultimul caracter din string

    cout << "String dupa pop_back este: ";
    cout << str << "\n";

    ///**************************************///
    cout << "///**************************************///\n";


    str = "geeksforgeeks is for geeks";

    cout << "Sirul initial este: ";
    cout << str << "\n";

    ///resize();
    str.resize(13);         ///sirul isi schimba marimea pana la 13 caractere

    cout << "Sirul dupa resize: ";
    cout << str << "\n";


    cout << "Capacitatea stringului este: ";
    cout << str.capacity() << "\n";         ///afiseaza capacitatea stringului


    ///lenght();
    cout << "lungimea stringului este: " << str.length();
    cout <<"\n";


    ///shrink_to_fit();
    str.shrink_to_fit();        ///scade capacitatea aditionala a strigului pt a salva memoria nefolosita

    cout << "Noua capacitate a stringului: ";
    cout << str.capacity() << "\n";

    ///**************************************///
    cout << "///**************************************///\n";

    str = "geeksforgeeks";

    string::iterator it;            ///declar iterator
    string::reverse_iterator it1;   ///declar invers iterator

    cout << "String daca se foloseste forward(inainte) iterator: ";
    for( it = str.begin(); it != str.end(); it++ )
        cout << *it;

    cout << "\n";

    cout << "String daca se foloseste reverse(inapoi) iterator: ";
    for( it1 = str.rbegin(); it1 != str.rend(); it1++ )
        cout << *it1;

    cout << "\n";

    ///**************************************///
    cout << "///**************************************///\n";

    string str1 = "geeksforgeeks is for geeks";
    string str2 = "geeksforgeeks rocks";


    char ch[80];

    str1.copy(ch,13,5);     ///copiaza in ch din string n=13 caractere, incepand cu pozitia pos=5

    cout << ch << "\n";

    cout << "str1 = " << str1 << "\n";
    cout << "str2 = " << str2 << "\n";

    str1.swap(str2);        ///schimba un string cu celalalt

    cout << "new str1 = " << str1 << "\n";
    cout << "new str2 = " << str2 << "\n";

    return 0;
}
