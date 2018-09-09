#include <iostream>

using namespace std;

int main()
{
    int a[] = {2,1,2,3,4};
    int n = 0;
    for(int i = 0; i < sizeof(a)/sizeof(a[1]); i++){
        for(int j = 0; j < sizeof(a)/sizeof(a[1]); j++){
            if(i == j){
                continue;
            }else {
                if(a[i] == a[j]){
                    n++;
                }else {
                    ;
                }
            }
        }
    }
    cout << n;
    return 0;
}
