#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  srand(time(0)); // 播下随机种子

  int result[52]; // 存放已生成的不重复的随机数
  memset(result,0,sizeof(result));

  int ii;

  for (ii=0;ii<52;ii++)
  {
      int itmp=rand()%52+1;
      printf("%d ",itmp)  
      result[ii]=itmp;
  }

    printf("\n");
  
    for (ii=0;ii<52;ii++)
  {
      printf("%d ",result[ii])  
  }
  
  printf("\n");
}
