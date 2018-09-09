#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,0};
    for(int i = sizeof(a)/sizeof(a[0])-1; i > 0; i--) {
        if(a[i] != 9){
            a[i] = a[i]+1;
            break;
        } else {
            a[i] = 0;
            continue;
        }
    }
    for(int i = 0; i < 3; i++){
        cout << a[i];
    }
    return 0;
}
