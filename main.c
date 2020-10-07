#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(){
    srand(time(0));
    int b = 4;
    int num = 2;
    int password = 0;
    int guessword = 0;
    for (; 2 > 1  ; ) {
        for (int i = 0; i < 10000000; i++) {
            int a = rand() % 9 + 1;
            printf("%d", a);
            password = a + password * 10;
            if (i == num){
                num = num + b++;
                fflush(stdout);
                _sleep(1000);
                printf("    \r");
                printf("请输入:");
                scanf("%d", &guessword);
                if (guessword == password) {
                    printf("正确\n");
                    password = 0;
                }
                else {
                    printf("错误,正确的密码为%d", password);
                    break;
                }
            }
           }
        return 0;
        }


    }
//asdaiodhahaoa





















