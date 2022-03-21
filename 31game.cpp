#include <iostream>
#include <chrono>
using namespace std;
 
int main(void) {
 
 srand((unsigned int)time(NULL));
 
 int nowNumber = 0;
 bool isContinue = true;
 while (isContinue) {
  // User's turn
  int userSaying;
  cout << "개수를 입력하세요: ";
  cin >> userSaying;
 
  cout << "사용자가 부른 숫자! " << endl;
  for (int i = 0; i < userSaying; i++) {
   nowNumber++;
   cout << nowNumber << endl;
   if (nowNumber == 31) {
    cout << "게임 종료! 컴퓨터의 승리입니다. " << endl;
    isContinue = false;
    break;
   }
  }
 
  if (!isContinue) {
   break;
  }
 
  // Computer's turn
  int temp = rand();
  int comSaying = temp % 3 + 1;
 
  cout << "컴퓨터가 부른 숫자! " << endl;
  for (int i = 0; i < comSaying; i++) {
   nowNumber++;
   cout << nowNumber << endl;
   if (nowNumber == 31) {
    cout << "게임 종료! 플레이어의 승리입니다. " << endl;
    isContinue = false;
    break;
   }
  }
 }
}