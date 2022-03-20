#include <iostream>
using namespace std;

string convertDate(int m, int d, int y)
{
    string res;
    string db[] = {"January", "February",
                   "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


    try{
        if(m < 1 || m > 12)
            throw "Not a valid month";
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d < 1 || d > 31))
            throw "Not a valid day";
        
        if ((m == 4 || m == 6 || m == 9 || m == 11 || m == 8 || m == 10 || m == 12) && (d < 1 || d > 30))
            throw "Not a valid day";
        
        if (m == 2 && d == 29){
            if(y % 100 != 0 && y % 4 != 0)
                throw "Not a leap year";
            if(y%100 == 0 && y % 400 != 0)
                throw "Not a leap year";
        }
        res += db[m - 1];
        res += " ";
        res += to_string(d);
        res += ", ";
        res += to_string(y);
        return res;
    }

    catch(const char* err){
        cout << "An exception occured" << endl;
        cout << err << endl;
        exit(1);
    }
    return "Error";
};

int main()
{
    int m, d, y;
    cin >> m >> d >> y;
    cout << convertDate(m, d, y);

    return 0;
}