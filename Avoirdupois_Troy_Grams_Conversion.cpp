#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

/*
• 1 dram = 1.7718451953125 grams
• 1 dram = 1/256 Avoirdupois pound2
• 1 dram = 1/96 Troy (apothecaries) pound
*/

class Mass {
private:
  double massinDrams;

public:
  void setMassAvoirdupoisPounds();
  void setMassTroyPounds();
  void setMassMetricGrams();

  void getMass();
};

void clearKeyboardBuffer(){ //function that clears keyboard buffer
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void Mass::getMass() {
  cout << endl << "The conversions are: " << endl;
  cout << "Mass in Avoirdupois pounds is " << massinDrams / 256 << endl;
  cout << "Mass in Troy pounds is " << massinDrams / 96 << endl;
  cout << "Mass in grams is " << massinDrams * 1.7718451953125 << endl << endl;
}

void Mass::setMassAvoirdupoisPounds() {
  double input;
  cout << "Please enter a mass in Avoirdupois pounds: ";
  cin >> input;
  while (input == 0){
    clearKeyboardBuffer();
    cout << endl << "Mass must be a number." << endl;
    cout << "Please enter a mass in Avoirdupois pounds: ";
    cin >> input;
  }
  massinDrams = input * 256;
}
void Mass::setMassTroyPounds() {
  double input;
  cout << "Please enter a mass in Troy pounds: ";
  cin >> input;
  while (input == 0){
    clearKeyboardBuffer();
    cout << endl << "Mass must be a number." << endl;
    cout << "Please enter a mass in Avoirdupois pounds: ";
    cin >> input;
  }
  massinDrams = input * 96;
}
void Mass::setMassMetricGrams() {
  double input;
  cout << "Please enter a mass in grams: ";
  cin >> input;
  while (input == 0){
    clearKeyboardBuffer();
    cout << endl << "Mass must be a number." << endl;
    cout << "Please enter a mass in Avoirdupois pounds: ";
    cin >> input;
  }
  massinDrams = input / 1.7718451953125;
}

int main() {
  int input;
  Mass Mass;
  cout << "Conversions: " << endl;

  do {
    cout << "Please enter 1 for Avoirdupois pounds, 2 for Troy "
            "pounds, 3 for grams, or 0 to exit: ";
    cin >> input;

    switch (input) {
    case 1: {
      Mass.setMassAvoirdupoisPounds();
      Mass.getMass();
      break;
    }
    case 2: {
      Mass.setMassTroyPounds();
      Mass.getMass();
      break;
    }
    case 3: {
      Mass.setMassMetricGrams();
      Mass.getMass();
      break;
    }
    }
  } while (input != 0);

  cout << "Thanks for using the mass conversion program!";
    return 0;
}
