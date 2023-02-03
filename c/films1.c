//
// Created by wang_ on 2023/2/2.
// films1.c --使用一个结构数组

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE   45  /* 存储影片名的数组大小 */
#define FMAX    5   /* 影片的最大数量 */

struct film {
    char title[TSIZE];
    int rating;
};
char * s_gets(char *st, int n);
int main(void){
    struct film movies[FMAX];
    int i = 0;
    int j;
    puts("Enter first movie title.");
    while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0') {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
    }
    if (i == 0)
        printf("No data entered.");
    else
        printf("Here is the movie list:\n");

    for (j = 0; j < i; j++) {
        printf("Movie: %s Rating: %d\n", movies[j].title,movies[j].rating);
    }
    printf("Bye!\n");

    return EXIT_SUCCESS;
}

char * s_gets(char *st, int n){
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin); // fgets()不会丢弃换行符
    if (ret_val) {
        find = strchr(st, '\n'); // 查找换行符
        if (find)                        // 如果地址不是NULL
            *find = '\0';                // 在此处放置一个空字符
        else                             // 如果输入的字符数大于n,则fgets()函数读取后，输入行中还有字符
            while (getchar() != '\n')
                continue;                // 处理输入行中fgets()读取后剩余的字符，全部读取并丢弃
    }
    return ret_val;
}
