#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

  srand(time(0)); // 播下随机种子

  int result[52]; // 存放已生成的不重复的随机数
  memset(result,0,sizeof(result));

  int ii,jj;

  int pos=0; // 已生成随机数的个数

  while (1)
  {
      int itmp=rand()%52+1;

      // 除去重复数字
      for (jj=0;jj<52;jj++)
      {
      }
        if (jj<52) continue; //如果jj<52,表示上面的循环是跳出的。没有执行完

      // 以下代码表示的是新的不重复的数
      printf ("%d ",itmp);
      result[pos]=itmp;  // 不同的数就存到result[pos]里
      pos++;

      if (pos==52) break;
  }

    printf("\n");

    for (ii=0;ii<52;ii++)
  {
      printf("%d ",result[ii]);
  }

  printf("\n");
}
