#include <stdio.h>
#include <string.h>

void main(void)
{
  char src[] = "The worst things to eat before you sleep";//[]: 글자의 갯수에 맞게 문자열 크기 자동 지정 
  char dst[100];
  
  strcpy(dst, src);

  printf("copied string : %s\n", dst);

  system("PAUSE");	
  return 0;
}
