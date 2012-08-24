/*---Start of C file------*/

#include<stdio.h>

#include "testmycall.h"

int main(void)

{

printf("%d\n", syscall(__NR_mycall(15)));

}

/*---End of C file------*/
