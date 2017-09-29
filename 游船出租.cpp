#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
const int maxn = 101;
const int inf = 0x3f3f3f3f;
int ship[maxn];
 
int main() {
  int ship_index;
  int total_time = 0, rent_time = 0;
  bool exi = false;
  char flag;
  int hours, mins;
  while (1) {
    exi = false;
    total_time = rent_time = 0;
    memset(ship, 0x3f, sizeof ship);
    while (scanf("%d", &ship_index)) {
      getchar();
      if (!ship_index) {
        scanf("%c %d:%d", &flag, &hours, &mins);
        printf("%d %d\n", rent_time,
               rent_time ? (int)((float)total_time / rent_time + 0.5f) : 0);
        break;
      } else if (ship_index == -1) {
        exi = true;
        break;
      }
      scanf("%c %d:%d", &flag, &hours, &mins);
      if (flag == 'S')
        ship[ship_index] = hours * 60 + mins;
      else if (ship[ship_index] != inf) {
        total_time += hours * 60 + mins - ship[ship_index];
        ++rent_time;
        // ship[ship_index] = inf;
      }
    }
    if (exi)
      break;
  }
  return 0;
}

