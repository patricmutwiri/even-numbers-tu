#include <iostream>

using namespace std;

int main()
{
    // even between 10 n 50
    int i=10;
    while(i <= 50) {
        if((i%2) == 0) {
            cout<<i<<" is even\n";
        }
        i++;
    }

    return 0;
}
