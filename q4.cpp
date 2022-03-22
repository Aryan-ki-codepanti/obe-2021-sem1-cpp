#include <iostream>
using namespace std;

bool isNumber(string s){
    for (auto &&i : s)
    {
        if(!isdigit(i))
            return false;
    }
    return true;
}

int main(int c, char** args)
{

    string s;
    int count = 0;
    for (int i = 0; i < c; i++)
    {
        s = args[i];
        count += isNumber(s);
    }
    
    cout << "Count : " << count << endl;
    return 0;
}