#include <iostream>
#include <typeinfo>
using namespace std;

int linearSearch(int target,int *array,int length){
    for(int i=0;i<length;i++){
        if(target==array[i]){
            return i;
        }
    }
    return -1;

}
int main() {
    int array[]={1,3,4,2,5,6,7,8,9,0,12,46,32,11};
    int b;
    int &a=b;

    cout<<"Index:"<<linearSearch(12,array, sizeof(array)/ sizeof(*array));

    return 0;
}