//Matt McMenamin
//Lab4

#include "VectorDriver.h"
#include <iostream>
#include "algorithm"

using namespace std;
int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(0);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  
  fill_vector(sample_vector);
  add_numbers(sample_vector);
  //add_numbers(sample_vector);
  

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  print_even(sample_vector);
 //cout << "even elements of the vector: <" << print_even(sample_vector) << ">" << endl;

  cout << "enter a number and I will tell you if it is in the vector, a 1 indicates that it IS in there, a 0 means it is NOT" << endl;
  int input;
  cin >> input;
  cout << is_present(sample_vector,input) << endl;

  //creates a new vector with 5 variables that are random then sorts them

  vector<short> new_vector;
  for (int i = 1; i <= 5; i++)
  {
	  new_vector.push_back(rand());
  }
  std::sort(new_vector.begin(), new_vector.end());
  print(new_vector);



  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}


