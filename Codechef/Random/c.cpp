#include "stdio.h"

int main() {
  char line[100], s1[100], s2[100], s3[100], s4[100], s5[100];
  char l1[100], l2[100];
  int i, j, k, n, q;
  
  fgets(line, 100, stdin);
  sscanf(line, "%d", &n);
  
  for (i = 0; i < n; i += 1) {
    s1[0] = 0;
    s2[0] = 0;
    s3[0] = 0;
    s4[0] = 0;
    s5[0] = 0; 

    fgets(line, 100, stdin);
    
    for (j = 0, k = 0, q = 0; 1; j += 1, k += 1, q += 1) {
      if (line[j] == '<') {
        break;
      }
      s1[k] = line[j];
      l1[q] = line[j];      
    }
    s1[k] = 0;
    j += 1;
    
    for (k = 0; 1; j += 1, k += 1, q += 1) {
      if (line[j] == '>') {
        break;
      }
      s2[k] = line[j];
      l1[q] = line[j];      
    }
    s2[k] = 0;
    j += 1;

    for (k = 0; 1; j += 1, k += 1, q += 1) {
      if (line[j] == '<') {
        break;
      }
      s3[k] = line[j];
      l1[q] = line[j];      
    }
    s3[k] = 0;
    j += 1;
    
    for (k = 0; 1; j += 1, k += 1, q += 1) {
      if (line[j] == '>') {
        break;
      }
      s4[k] = line[j];
      l1[q] = line[j];      
    }
    s4[k] = 0;
    j += 1;
    
    for (k = 0; 1; j += 1, k += 1, q += 1) {
      if (line[j] == '0' || line[j] == '\n') {
        break;
      }
      s5[k] = line[j];
      l1[q] = line[j];      
    }
    s5[k] = 0;
    l1[q] = 0;
    
    fgets(line, 100, stdin);
    
    for (j = 0; 1; j += 1) {
      if (line[j] == '.') {
        break;
      }
      l2[j] = line[j];
    }
    l2[j] = 0;
    
    printf("%s\n", l1);
    printf("%s%s%s%s%s\n", l2, s4, s3, s2, s5);   
  }

  return 0;
}
