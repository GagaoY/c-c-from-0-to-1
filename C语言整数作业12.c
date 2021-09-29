#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  srand(time(0)); // 播下随机种子

  int result[52]; // 存放已生成的不重复的随机数
  memset(result,0,sizeof(result));

  int ii,jj;

  int pos=0;
  
  for (ii=0;ii<52;ii++)
  {
      int itmp=rand()%52+1;
        
      // 除去重复数字
      for (jj=0;jj<52;jj++)
        if (itmp==result[jj]) break;  // 找到了重复的数,就跳出循环，每次itmp生成的数跟result[jj]比较，
    
        if (jj<52) continue; //循环次数没够，继续找
    
      // 以下代码表示的是新的不重复的数
      printf ("%d ",itmp);
      result[pos]=itmp;  // 不同的数就存到result[pos]里
      pos++;
  }

    printf("\n");
  
    for (ii=0;ii<52;ii++)
  {
      printf("%d ",result[ii]);  
  }
  
  printf("\n");
}
