#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    ifstream inp("file1.txt");
    ofstream out("file2.txt");

    string word;
    while(!inp.eof()){
        inp >> word;
        out << word;
    }    
    return 0;
}