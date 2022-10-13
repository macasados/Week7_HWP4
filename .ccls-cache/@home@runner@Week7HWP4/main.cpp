#include <iostream>

using namespace std;

void fillArray(int list[], int listSize);
int indexSmallestElement(const int list [], int listSize);

const int Array_Size = 5;
  
int main() {

  int listA[Array_Size] = {0};
  
  fillArray(listA, Array_Size);

 int indSmall = indexSmallestElement(listA, Array_Size);

  cout << indexSmallestElement(listA, Array_Size) << endl;
}


void fillArray(int list[], int listSize){

  int index;

  for(index = 0; index < listSize; index++){
    cin >> list[index];
    
  }
  
  return;
}

int indexSmallestElement(const int list [], int listSize){
int maxIndex = 0;

    for (int index = 1; index < listSize; index++){
      if (list[maxIndex] > list[index])
        maxIndex = index;
    }

  
  return maxIndex;
}