#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    string f1 , f2 , word;

    cout << "Enter names of source and destination files" << endl;
    cin >> f1 >> f2;

    ifstream inp(f1);
    ofstream out(f2);

    while(!inp.eof()){
        inp >> word;
        out << word;
    }    
    return 0;
}