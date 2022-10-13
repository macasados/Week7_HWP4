#include <iostream>

using namespace std;

void fillArray(int list[], int listSize);

const int Array_Size = 5;
  
int main() {

  int listA[Array_Size] = {0};
  
  fillArray(listA, Array_Size);

  
 
}








void fillArray(int list[], int listSize){

  cout << "Enter " << listSize << " integers: ";

  int index;

  for(index = 0; index < listSize; index++){
    cin >> list[index];
    
  }
  
  return;
}

int indexLargestElement(const int list [], int listSize){
int maxIndex = 0; //default assumption is to assume the largest value is in the largest spot

    for (int index = 1; index < listSize; index++){
      if (list[maxIndex] < list[index])
        maxIndex = index;
    }

  
  return maxIndex;
}