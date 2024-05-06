#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int bil [N];
    
    for (int i = 0; i < N; i++){
        cin >> bil [i];
    }
    
    for (int i = 0; i < N; i++){
        if (bil [i] % 2 != 0){
            cout << bil [i] << " ";
        }
    }
}