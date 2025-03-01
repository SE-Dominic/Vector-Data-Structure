#include <iostream>
#include "headfile.h"
int main() {
  Vector<int> vec;
  cout << "Inserting..." << endl;
  vec.insert(7);
  vec.insert(23);
  vec.insert(14);
  vec.insert(34);
  vec.insert(21);
  vec.insert(8);

  cout << "Insert 22 at index 3: " << endl;
  vec.insert_at(22, 3);
  vec.displayVector();
  cout << endl;
  
  cout << "Remove elements: " << endl;
  vec.remove_at(2);
  vec.pop_back();
  vec.displayVector();
  cout << endl;
  cout << "At index (3): " << vec.at(3);
}
