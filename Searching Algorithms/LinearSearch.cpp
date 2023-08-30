#include <iostream>
using namespace std;
int LinearSearch(int array[], int size, int element);
int main()
{
    int array[6];
    int size = sizeof(array)/sizeof(int);
    cout << "Enter Array Elements: ";
    for(int i = 0; i < size; i++){ //User input
        cin >> array[i];
    }
    cout << "Enter Element Number: ";
    int element; cin >> element;
    int search = LinearSearch(array, size, element);
    cout << "Element " << element << " Found at Index " << search<< endl;

}
int LinearSearch(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}

//With Decleared Array
//#include <iostream>
//using namespace std;
//int LinearSearch(int array[], int size, int element);
//int main(){
//    int array[5] = {6,8,9,4,30};
//    int size = sizeof(array)/sizeof(int);
//    int element;
//    cout << "Enter Element number you want to Find: ";
//    cin >> element;
//    int search = LinearSearch(array, size, element);
//    cout << "The Element " << element << " was found at index " << search;
//
//}
//int LinearSearch(int array[], int size, int element){
//    for(int i = 0; i < size; i++){
//        if(array[i] == element){
//            return i;
//        }
//    }
//    return -1;
//}
