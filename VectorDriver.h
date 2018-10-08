/* File: VectorDriver.cpp
 Matt McMenamin
 Lab4.cpp
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}


// adds all of the values in the vector and outs random values in
//I limited the values to BELOW 10

void add_numbers(vector<short> &data)
{
	for (int i = 0; i <= 9; i++)
	{
		data.push_back(rand() % 10);
	}
}


void print_even(const vector<short> &data) 
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "EVENS : <" ;
		for (ulong i = 0; i<data.size(); i+=2) 
		{
			cout << data.at(i) << ", ";
		}
		cout << ">\n";
	}
}

// IF THE value the user enters is present this will output a 1.
// a 0 if not present
bool is_present(const vector<short> &data, short input)
{
	//std::vector<short>::const_iterator it = data.begin();
	for (std::vector<short>::const_iterator it = data.begin(); it != data.end(); ++it)
	{
		if (input == *it)
		{
			return 1;
		}

	}
	return 0;
}






// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function
