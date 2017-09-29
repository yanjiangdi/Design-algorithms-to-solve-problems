#include <stdio.h>
 #include <string.h>
  
 int pivot[26] = {
     2,3,5,7,11,
     13,17,19,23,29,
     31,37,41,43,47,
     53,59,61,67,71,
     73,79,83,89,97,
 };
  
 int str2num(char* str, int* array)
 {
     char *p = NULL, *q = NULL;
     char tmp[5];
     int k = 0;
     for (p = str, q = tmp; *p != '\0'; ++p)
     {
         if (*p == ',')
         {
             *q = '\0';
             q = tmp;
             sscanf(tmp, "%d", &array[k++]);
             continue;
         }
         else
             *q++ = *p;
     }
     *q = '\0';
     sscanf(tmp, "%d", &array[k++]);
     return k;
 }
  
 void printSum(int *a, int m, int * b, int n)
 {
     int sum[26] = {0};
     int k = m > n ? m : n;
  
     m--; n--; k--;
     int flag = 0, i = 0, j = k;
     while (m >= 0 && n >= 0)
     {
         flag += a[m--] + b[n--];
         sum[j--] = flag % pivot[i];
         flag /= pivot[i++];
     }
    while (m >= 0)
      {
          flag += a[m--];
          sum[j--] = flag % pivot[i];
          flag /= pivot[i++];
      }
  
      while (n >= 0)
      {
          flag += b[n--];
          sum[j--] = flag % pivot[i];
          flag /= pivot[i++];
      }
  
       if (flag)
       {
           printf("%d,", flag);
       }
  
        for (i = 0; i < k; ++i)
        {
            printf("%d,", sum[i]);
        }
        printf("%d\n", sum[k]);
 }
  
  void printArray(int* a, int n)
 {
     int i = 0;
     for (i = 0; i < n; i++)
     {
         printf("%d ", a[i]);
     }
     printf("\n");
 }
  
  int main(void)
  {
      int a[26], b[26];
      int m, n;
      char str1[53], str2[53];
  
      while (1)
      {
          scanf("%s%s", str1, str2);
          m = str2num(str1, a);
          n = str2num(str2, b);
          if (strcmp(str1, "0") == 0 && strcmp(str2, "0") == 0)
              break;
          printSum(a, m, b, n);
      }
      return 0;
  }


