/*************************************************************************
    > File Name: static.c
    > Author: David Max
    > Mail: 2740031215@qq.com
    > Created Time: Sun 17 Mar 2019 20:36:02 PM PDT
 ************************************************************************/
#include <stdio.h>

void func1(void);

static int count = 10;

int main(int argc, char const *argv[]) {
  while (count--) {
    func1();
  }
  return 0;
}

/**
 * Plus and print
 * @method fuc1
 * @param thingy {int} It's fuc1's local variable, only initialize once
 * @notice  The value of 'func1' thingy' does not reset every time the function is called
 */
void func1(void) {
  static int thingy = 5;
  thingy++;
  printf("thingy is %d, count is %d\n", thingy, count);
}
