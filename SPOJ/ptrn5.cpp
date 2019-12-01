//programmercave0.github.io
//https://www.spoj.com/problems/CPTTRN5/
#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int l, c, s;
    scanf("%d %d %d", &l, &c, &s);
    const int breadth = (c * (s + 1)) + 1;
    const int height = (l * (s + 1)) + 1;
    for(int i = 0; i < height; i++)
    {
      for(int j = 0; j < breadth; j++)
      {
        if(i % (s+1) == 0 || j % (s+1) == 0)
        {
          printf("*");
        }
        else if((i/(s+1) + j/(s+1)) % 2 == 0)
        {
          if(i % (s+1) == j % (s+1))
          {
            printf("\\");
          }
          else
          {
             printf(".");
          }
        }
        else
        {
          if(i % (s+1) == (s+1) - (j % (s+1)))
          {
            printf("/");
          }
          else
          {
            printf(".");
          }
        }
      }
      printf("\n");
    }
    printf("\n");
   }
}
