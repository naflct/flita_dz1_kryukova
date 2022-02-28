#include <stdio.h>

int main(void) {
    int n, mn1[50], i;
    int o, mn2[50], k;
    
    printf("Задание множества #1\n"); 
    printf("Введите количество элементов множества #1: "); 
    scanf("%d", &n);
    i=0;
    
    while(i < n)
    {
        printf("Введите элемент # %d => ", i+1);
        scanf("%d", &mn1[i]);
        i++;
    }
    
    printf("Элементы множества #1: ");
    for (i = 0; i < n; i++){
        printf("%d  ", mn1[i]);
    }
    printf("\n");
    printf("\n");
    
    
    printf("Задание множества #2\n"); 
    printf("Введите количество элементов множества #2: "); 
    scanf("%d", &o);
    k=0;
    
    while(k < o)
    {
        printf("Введите элемент # %d => ", k+1);
        scanf("%d", &mn2[k]);
        k++;
    }
    
    printf("Элементы множества #2: ");
    for (k = 0; k < o; k++){
        printf("%d  ", mn2[k]);
    }
    printf("\n");
    printf("\n");
    
    
    int d1, d2, z1, z2, s1, s2, l;
    
    printf("Удаление элемента из множества #1\n");
    printf("Введите номер элемента, удаляемого из множества #1 => ");
    scanf("%d", &d1);
    l = d1-1;
    mn1[l]=0;
    printf("\n");
    printf("Элементы множества #1: ");
    for (i = 0; i < n; i++){
    printf("%d  ", mn1[i]);
    }
    printf("\n");
    printf("\n");
    
    printf("Удаление элемента из множества #2\n");
    printf("Введите номер элемента, удаляемого из множества #2 => ");
    scanf("%d", &d2);
    l = d2-1;
    mn2[l]=0;
    printf("\n");
    printf("Элементы множества #2: ");
    for (k = 0; k < o; k++){
        printf("%d  ", mn2[k]);
    }
    printf("\n");
    printf("\n");


    printf("Замена элемента множестве #1\n");
    printf("Введите номер элемента, заменяемого в множестве #1 => ");
    scanf("%d", &z1);
    printf("Введите новое значение заменяемого элемента => ");
    scanf("%d", &s1);
    l=z1-1;
    mn1[l]=s1;
    printf("\n");
    printf("Элементы множества #1: ");
    for (i = 0; i < n; i++){
    printf("%d  ", mn1[i]);
    }
    printf("\n");
    printf("\n");
    
    printf("Замена элемента множестве #2\n");
    printf("Введите номер элемента, заменяемого в множестве #2 => ");
    scanf("%d", &z2);
    printf("Введите новое значение заменяемого элемента => ");
    scanf("%d", &s2);
    l=z2-1;
    mn2[l]=s2;
    printf("\n");
    printf("Элементы множества #2: ");
    for (k = 0; k < o; k++){
        printf("%d  ", mn2[k]);
    }
 
    return 0;
}