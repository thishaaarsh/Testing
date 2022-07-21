#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {0,1,0,3,5};
    for(int i=0; i<5; i++){
        if(arr[i] == 0){
            for(int j=i+1; j<5; j++){
                if(arr[j] != 0)
                    swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}