#include <iostream>

using namespace std;
fillArray(int list[], int listSize);

int main() {
  int Array_Size;
  cin >> Array_Size;

  int listA[Array_Size] = {0};
  
  fillArray(listA, Array_Size);
  cout << "Display Array A";
  printArray(listA, Array_Size);
}

void fillArray(int list[], int listSize){

  cout << "Enter " << listSize << " integers: ";

  int index;

  for(index = 0; index < listSize; index++){
    cin >> list[index];
    
  }
  
  return;
}

void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index ++)
    cout << list[index] << " ";

  cout << endl;
  return;
}