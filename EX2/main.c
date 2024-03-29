#include <stdio.h>

int main() {
    FILE* fp;
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    fp = fopen("a.bin", "wb+");
    if (fp == NULL) {
        printf("無法開啟檔案\n");
        return 1;
    }
    fwrite(a, sizeof(int), sizeof(a) / sizeof(int), fp);
    fwrite(b, sizeof(char), sizeof(b) / sizeof(char), fp);
    fwrite(c, sizeof(float), sizeof(c) / sizeof(float), fp);
    fclose(fp);
    fp = fopen("a.bin", "rb");
    if (fp == NULL) {
        printf("無法開啟檔案\n");
        return 1;
    }
    fread(a, sizeof(int), sizeof(a) / sizeof(int), fp);
    fread(b, sizeof(char), sizeof(b) / sizeof(char), fp);
    fread(c, sizeof(float), sizeof(c) / sizeof(float), fp);
    fclose(fp);
    printf("陣列 a: %d %d %d\n", a[0], a[1], a[2]);
    printf("字串 b: %s\n", b);
    printf("陣列 c: %.2f %.2f %.2f\n", c[0], c[1], c[2]);

    return 0;
}
