#include<stdio.h>
#include<stdlib.h>
void quick_sort(char* str, int l, int r) {
    if (l < r) {
        int left = l;
        int right = r;
        char x = *str;

        while (left < right) {
            while (left < right && *(str+right) > x)
                right--;
            if (left < right)
                *(str+(left++)) = *(str+right);
            while (left < right && *(str+left) < x)
                left++;
            if (left < right)
                *(str+(right--)) = *(str+left);
        }

        *(str+left) = x;
        quick_sort(str, l, left-1);
        quick_sort(str, right+1, r);    
    }
}

main() {
    char* str = (char*)malloc(sizeof(char)*100);

    printf("please input a string: ");
    scanf("%s", str);
    printf("the original string is: %s\n", str);
    quick_sort(str, 0, strlen(str)-1);
    printf("the sorted string is: %s\n",str);

    free(str); 
    system("pause");
    
}

