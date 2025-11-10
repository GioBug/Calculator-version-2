#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
double answer; //user answer

//Addition

for (int num1 {1}; num1 <= 10; ++num1){
  for (int num2 {1}; num2 <= 10; ++num2){
     cout << num1 << "+" << num2 << "=" << endl;
     cin >> answer;
       while(answer != num1 + num2){
          cout << "try again!" << endl; 
          cin >> answer;
     }
}
cout << "---------------" << endl;
}

cout << "You did it!" << endl;
cout << "---------------" << endl;

//Subtraction
  
for (int num1 {1}; num1 <= 10; ++num1){
  for (int num2 {1}; num2 <= 10; ++num2){
     cout << num1 << "-" << num2 << "=" << endl;
     cin >> answer;
       while(answer != num1 - num2){
         cout << "try again!" << endl; 
         cin >> answer;
     }
}
cout << "---------------" << endl;
}

cout << "You did it!" << endl;
cout << "---------------" << endl;

//Multiplication

for (int num1 {1}; num1 <= 10; ++num1){
  for (int num2 {1}; num2 <= 10; ++num2){
     cout << num1 << "*" << num2 << "=" << endl;
     cin >> answer;
       while(answer != num1 * num2){
         cout << "try again!" << endl; 
         cin >> answer;
     }
 }
cout << "---------------" << endl;
}

cout << "You did it!" << endl;
cout << "---------------" << endl;

//Division
  
for (double num1 {1}; num1 <= 10; ++num1){
  for (double num2 {1}; num2 <= 10; ++num2){
     cout << num1 << "/" << num2 << "=" << endl;
     cin >> answer;
       while(fabs(answer - (num1 / num2)) > 0.001){
         cout << "try again!" << endl; 
         cin >> answer;
     }
}
cout << "---------------" << endl;
}

cout << "You did it!" << endl;
cout << "---------------" << endl;

  return 0;
}