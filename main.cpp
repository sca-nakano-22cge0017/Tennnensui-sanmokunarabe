#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
  int x,y; //先攻後攻
  int player = 0;  //手番
  bool win; //勝敗が決まったかどうか
  char a='-',b='-',c='-',d='-',e='-',f='-',g='-',h='-',i='-'; //盤面初期化 
  
  cout << "123" << "\n" << "456" << "\n" << "789" << endl;

  while (player < 10 && win == false)
    {
      cout << "どこに入力しますか。";
      if (player % 2 == 0)
      {
      cout << "Oの番です。";
      cin >> x;
      switch(x)
      {
        case 1: a = 'O'; break;
        case 2: b = 'O'; break;
        case 3: c = 'O'; break;
        case 4: d = 'O'; break;
        case 5: e = 'O'; break;
        case 6: f = 'O'; break;
        case 7: g = 'O'; break;
        case 8: h = 'O'; break;
        case 9: i = 'O'; break;
      }
      }
      if (player % 2 == 1)
      {
      cout << "Xの番です。";
      cin >> y;
      switch(y)
      {
        case 1: a = 'X'; break;
        case 2: b = 'X'; break;
        case 3: c = 'X'; break;
        case 4: d = 'X'; break;
        case 5: e = 'X'; break;
        case 6: f = 'X'; break;
        case 7: g = 'X'; break;
        case 8: h = 'X'; break;
        case 9: i = 'X'; break;
      }
      }
  cout << a << b << c << "\n" << d << e << f << "\n" << g << h << i  << endl;
  player += 1; 
      
  if (a == 'O' && b == 'O' && c == 'O')
  {
    cout << "Oの勝利です。" << endl;
    win = true;
  }
  }
} 
