#include <iostream>
using namespace std;

class NewFloat{
    float floatData;
public:
    NewFloat(){
        floatData = 0;
    }

    NewFloat(float a){
        floatData = a;
    }

    inline void printData(){
        cout << floatData << endl;
    }

    float deciData(){
        return floatData - int(floatData);
    }

    NewFloat operator++(int){
        NewFloat tmp = *this;
        this->floatData++;
        return tmp;
    }

    bool operator<(NewFloat obj){
        return floatData < obj.floatData;
    }

    operator int() const {
        return int(floatData);
    }

};

int main()
{
    int m;
    cin >> m;
    const int a= m; 
}
