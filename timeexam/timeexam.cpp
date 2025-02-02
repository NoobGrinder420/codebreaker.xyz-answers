#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;

  long long mins = N%60;
  long long hours = (N - mins)/60;
  hours = hours%24;

  if (hours < 10) {
    cout << "0";
    cout << hours;
  } else if (hours == 0) {
    cout << "00";  
  } else {
    cout << hours;
  }

  if (mins < 10) {
    cout << "0";
    cout << mins;
  } else if (mins == 0) {
    cout << "00";  
  } else {
    cout << mins;
  }

  return 0;
}