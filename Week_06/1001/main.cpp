#include <iostream>
#include "queue.h"
#include "card.h"
using namespace std;
 
int main() {
  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x = 0;
    Card c;
    cin >> x;
    c.printCard(x);
  }
  return 0;
}
