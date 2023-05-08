#include <iostream>

using namespace std;

int main(){
    //-----------------
    /* ARRAY BASIC */
    //-----------------

    //initialization and decln
    int a[5] = {1,2,3,4,5};

    //size of complete array
    cout<<"sizeOf array is"<<sizeof(a)<<endl;

    //For-each loop to iterate the array
    for(int x:a){
        cout<<x<<endl;
    }

    cout<<"Heello";
    return 0;


}
