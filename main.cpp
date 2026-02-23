#include <iostream>
#include <limits>
#include <vector>
#include "src/raining.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

string input_valid();

int main() {
  cout<<"Welcome to the String Sorting Program"<<endl<<endl;
  bool cont;
  vector<string> v;
  string input;
  do {
    cout<<"Enter a string to sort: ";
    input = input_valid();
    cin.clear();
    v = sort_list(v,input);
    cout<<"\n\nYour sorted list is as follows:"<<endl<<endl;
    for (int i = 0; i < v.size(); i++) {
      cout<<'\t'<<v[i]<<endl;
    }
    cout<<"\nWould you like to input another string? ";
    input = input_valid();
    cin.clear();
    if (input == "y" || input == "Y" || input == "yes" || input == "Yes") {
      cont = true;
    } else {
      cont = false;
    }
  } while (cont);
  cout<<"Thank you for using the String Sorting Program."<<endl;
}

string input_valid() {
  string input;
  bool good_input = false;
  do {
    getline(cin,input);
    if (cin.fail()) {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      good_input = false;
      cout << "Invalid input. Enter a valid string: ";
    }
    else {
      good_input = true;
      cout << endl;
    }
  } while (!good_input);
  return input;
}
