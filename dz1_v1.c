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
    
    
    int destroy1, destroy2, des1[50], des2[50], j;
    
    printf("Удаление элемента из множества #1\n");
    printf("Введите количество элементов, удаляемых из множества #1: ");
    scanf("%d", &destroy1);
    i=0;
    if (destroy1 != 0 && destroy1 <= n) {
        while(i < destroy1) {
            printf("Введите номер удаляемого элемента # %d => ", i+1);
            scanf("%d", &des1[i]);
            for (j = i; j < n; j++) 
                mn1[j] = mn1[j+1];  
            i++;
            n--;
            printf("\n");
            printf("Элементы множества #1: ");
            for (j = 0; j < n; j++)
                printf("%d  ", mn1[j]);
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #1: ");
        for (i = 0; i < n; i++) 
            printf("%d  ", mn1[i]);
    printf("\n");
    }
    printf("\n");
    
    
    printf("Удаление элемента из множества #2\n");
    printf("Введите количество элементов, удаляемых из множества #2: ");
    scanf("%d", &destroy2);
    i=0;
    if (destroy2 != 0 && destroy2 <= n) {
        while(i < destroy2) {
            printf("Введите номер удаляемого элемента # %d => ", i+1);
            scanf("%d", &des2[i]);
            for (j = i; j < o; j++) 
                mn2[j] = mn2[j+1];  
            i++;
            o--;
            printf("\n");
            printf("Элементы множества #2: ");
            for (j = 0; j < o; j++)
                printf("%d  ", mn2[j]);
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #2: ");
        for (i = 0; i < o; i++)
            printf("%d  ", mn2[i]);
    printf("\n");
    }
    printf("\n");



    int zamena1, zamena2, s1, s2, zn1, zn2;

    printf("Замена элементов множестве #1\n");
    printf("Введите количество элементов, заменяемых в множестве #1 => ");
    scanf("%d", &zamena1);
    if (zamena1 != 0) {
        for (j = 0;j < zamena1;j++) {
            printf("Введите номер %d заменяемого элемента => ", j+1);
            scanf("%d", &s1);
            printf("Введите новое значение заменяемого элемента => ");
            scanf("%d", &zn1);
            mn1[s1-1] = zn1;
            s1 = 0;
            printf("\n");
            printf("Элементы множества #1: ");
            for (i = 0; i < n; i++) 
                printf("%d  ", mn1[i]);
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #1: ");
        for (i = 0; i < n; i++) 
            printf("%d  ", mn1[i]);
        printf("\n");
    }
    printf("\n");
    
    
    printf("Замена элементов множестве #2\n");
    printf("Введите количество элементов, заменяемых в множестве #1 => ");
    scanf("%d", &zamena2);
    if (zamena2 != 0) {
        for (j = 0;j < zamena2;j++) {
            printf("Введите номер %d заменяемого элемента => ", j+1);
            scanf("%d", &s2);
            printf("Введите новое значение заменяемого элемента => ");
            scanf("%d", &zn2);
            mn2[s2-1] = zn2;
            s2 = 0;
            printf("\n");
            printf("Элементы множества #1: ");
            for (i = 0; i < o; i++) 
                printf("%d  ", mn2[i]);
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #1: ");
        for (i = 0; i < o; i++) 
            printf("%d  ", mn2[i]);
        printf("\n");
    }
    printf("\n");
    
    
    int dobavka1, dobavka2, dob1, dob2;
    
    printf("Добавление элементов в множество #1\n");
    printf("Введите количество элементов, добавляемых в множество #1: ");
    scanf("%d", &dobavka1);
    if (dobavka1 != 0) {
        for(j = 0; j < dobavka1; j++) {
            printf("Введите значение добавляемого элемента #%d  => ", j+1);
            scanf("%d", &dob1);
            mn1[n] = dob1;
            n++;
            printf("\n");
            printf("Элементы множества #1: ");
            for (i = 0; i < n; i++) 
                printf("%d  ", mn1[i]);
            printf("\n");
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #1: ");
        for (i = 0; i < n; i++) 
            printf("%d  ", mn1[i]);
        printf("\n");
    }
    printf("\n");
    
    
    
    printf("Добавление элементов в множество #2\n");
    printf("Введите количество элементов, добавляемых в множество #2: ");
    scanf("%d", &dobavka2);
    if (dobavka2 != 0) {
        for(j = 0; j < dobavka2; j++) {
            printf("Введите значение добавляемого элемента #%d  => ", j+1);
            scanf("%d", &dob2);
            mn2[o] = dob2;
            o++;
            printf("\n");
            printf("Элементы множества #1: ");
            for (i = 0; i < o; i++) 
                printf("%d  ", mn2[i]);
            printf("\n");
            printf("\n");
        }
    }
    else {
        printf("\n");
        printf("Элементы множества #1: ");
        for (i = 0; i < o; i++) 
            printf("%d  ", mn2[i]);
        printf("\n");
    }
    printf("\n");
    

 return 0;
}
