#include <iostream>
using namespace std;

int sumArr(int arr[], int n)
{
    if (n <= 0)
        throw 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    try
    {
        int arr[] = {3, 2, 1, 5, 6, 7};
        cout << sumArr(arr, -1);
    }
    catch (int a)
    {
        cout << "Exception occured" << endl;
        cout << "Code: " << a << endl;
    }
    catch(const char* a){
        cout << "Exception occured" << endl;
        cout << "Code: " << a << endl;

    }
    catch(...){
        cout << "Exception occured" << endl;
        cout << "Default handler" << endl;
    }
    return 0;
}