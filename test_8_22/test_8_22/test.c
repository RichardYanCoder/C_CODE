#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int arr[num] = {0};
//    int* ptr = NULL;
//    ptr = (int*)malloc(num * sizeof(int));
//    if (NULL != ptr)
//    {
//        int i = 0;
//        for (i = 0; i < num; i++)
//        {
//            *(ptr + i) = 0;
//        }
//    }
//    free(ptr);
//    ptr = NULL;
//    return 0;
//}
//int main()
//{
//    int* p = (int*)calloc(10, sizeof(int));
//    if (NULL != p)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", *(p + i));
//        }
//    }
//    free(p);
//    p = NULL;
//
//    int* ptr = (int*)malloc(100);
//    if (ptr == NULL)
//    {
//        return 1;
//    }
//    int* tmp = NULL;
//    tmp = realloc(ptr, 1000);
//    if (tmp != NULL)
//    {
//        ptr = tmp;
//    }
//    free(ptr);
//    ptr = NULL;
//    return 0;
//}
//typedef struct st_type
//{
//    int i;
//    int a[];
//}type_a;
//int main()
//{
//    type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//    p->i = 100;
//    for (int i = 0; i < 100; i++)
//    {
//        p->a[i] = i;
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
//typedef struct st_type
//{
//    int i;
//    int* p_a;
//}type_a;
//int main()
//{
//    type_a* p = (type_a*)malloc(sizeof(type_a));
//    p->i = 100;
//    p->p_a = (int*)malloc(p->i * sizeof(int));
//    for (int i = 0; i < 100; i++)
//    {
//        p->p_a[i] = i;
//    }
//    free(p->p_a);
//    p->p_a = NULL;
//    free(p);
//    p = NULL;
//    return 0;
//}
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, sizeof(int), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, sizeof(int), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("myfile.txt", "w");
//    if (pFile != NULL)
//    {
//        fputs("fopen example", pFile);
//        fclose(pFile);
//    }
//    return 0;
//}
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}
/* ftell example : getting size of a file */
//int main()
//{
//    FILE* pFile;
//    long size;
//    pFile = fopen("myfile.txt", "rb");
//    if (pFile == NULL)
//        perror("Error opening file");
//    else
//    {
//        fseek(pFile, 0, SEEK_END);
//        size = ftell(pFile);
//        fclose(pFile);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}
/* rewind example */
//int main()
//{
//    int n;
//    FILE* pFile;
//    char buffer[27];
//
//    pFile = fopen("myfile.txt", "w+");
//    for (n = 'A'; n <= 'Z'; n++)
//        fputc(n, pFile);
//    rewind(pFile);
//
//    fread(buffer, 1, 26, pFile);
//    fclose(pFile);
//
//    buffer[26] = '\0';
//    printf(buffer);
//    return 0;
//}
//int main(void)
//{
//    int c;
//    FILE* fp = fopen("test.txt", "r");
//    if (!fp) {
//        perror("File opening failed");
//        return EXIT_FAILURE;
//    }
//    while ((c = fgetc(fp)) != EOF)
//    {
//        putchar(c);
//    }
//    if (ferror(fp))
//        puts("I/O error when reading");
//    else if (feof(fp))
//        puts("End of file reached successfully");
//    fclose(fp);
//}
//enum { SIZE = 5 };
//int main(void)
//{
//    double a[SIZE] = { 1.,2.,3.,4.,5. };
//    FILE* fp = fopen("test.bin", "wb");
//    fwrite(a, sizeof * a, SIZE, fp);
//    fclose(fp);
//
//    double b[SIZE];
//    fp = fopen("test.bin", "rb");
//    size_t ret_code = fread(b, sizeof * b, SIZE, fp);
//    if (ret_code == SIZE)
//    {
//        puts("Array read successfully, contents: ");
//        for (int n = 0; n < SIZE; ++n)
//            printf("%f ", b[n]);
//        putchar('\n');
//    }
//    else
//    {
//        if (feof(fp))
//            printf("Error reading test.bin: unexpected end of file\n");
//        else if (ferror(fp))
//        {
//            perror("Error reading test.bin");
//        }
//    }
//    fclose(fp);
//}
//#include <windows.h>
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    fputs("abcdef", pf);
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    Sleep(10000);
//    printf("刷新缓冲区\n");
//    fflush(pf);
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    Sleep(10000);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}