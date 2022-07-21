#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap){
        cout << "we cant insert" << endl;
        return n;
    }
    int index = pos-1;
    for(int i=n-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = x;
    return n+1;
}

int main(){
    int array[10] = {1,2,3,4,6,7,8};
    int number = 7;
    int size = 10;
    int x = 5;
    int pos = 5;

    int newnumber = insert(array,number,x,size,pos);
    for(int i=0; i<newnumber; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;

}

