/*************************************************************************
	> File Name: oj_168.cpp
	> Author: EuanXu
	> Mail: 
	> Created Time: Thu 18 Mar 2021 07:33:30 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

void dictionary(char *a) {
   int i = 0;
   while (a[i]) {
      if (a[0] >= 'a' && a[0] <= 'z') 
      a[0] -= 32;
      i++;
      if (a[i] >= 'A' && a[i] <= 'Z') 
      a[i] += 32;
   }
  //printf("%s\n", a);
}

 void swap(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
 }

int main() {
   int n;
   int i = 0;
   scanf("%d", &n);
   char str[100][100];
  for (i = 0; i < n ;i++) {
        scanf("%s", str[i]);
        //printf("%s\n", str[i]);     
    }
   for (i = 0; i < n ;i++) {
      dictionary(str[i]);
    }
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if (strcmp(str[i],str[j]) > 0) {
            swap(str[i], str[j]);
         }
      }
   }
   for(i = 0; i < n; i++) {
      printf("%s\n", str[i]);
   }
   return 0;
}


