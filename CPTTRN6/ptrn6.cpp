//Abhishek Singh Thakur
//programmercave.blogspot.com

#include <iostream>
#include <cstdio>

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int l, c, h, w;
    scanf("%d %d %d %d", &l, &c, &h, &w);
    int vertical_length = h * (l+1) + l;
    int horizontal_lenght = w * (c+1) + c;

    for(int i = 1; i <= vertical_length; i++)
    {
      for(int j = 1; j <= horizontal_lenght; j++)
      {
        if(i % (h+1) == 0 && j % (w+1) == 0)
        {
          printf("+");
        }
        else if(j % (w+1) == 0)
        {
          printf("|");
        }
        else if(i % (h+1) == 0)
        {
          printf("-");
        }
        else
        {
          printf(".");
        }
      }
      printf("\n");
    }
  }
}
