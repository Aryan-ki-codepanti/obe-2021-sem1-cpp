#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f1("fileV.txt");
    ofstream f2("fileD.txt");
    ofstream f3("fileRest.txt");

    f1 << "fileV.txt: ";
    f2 << "fileD.txt: ";
    f3 << "fileRest.txt: ";

    string s;
    cin >> s;
    while (!cin.eof())
    {

        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
            f1 << s << " ";

        else if (s[0] >= '0' && s[0] <= '9')
            f2 << s << " ";

        else
            f3 << s << " ";

        cin >> s;
    }

    return 0;
}