
#include <stdio.h>

int main(void)
{
    int input_number;
    long total = 0;
    long long current_number;

    scanf("%d", &input_number);

    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }

    for (current_number = 1; ; current_number++)
    {
        // 入力された数を超えたら、繰り返しを終了する
        if (current_number > input_number)
        {
            break;
        }

        // 3または5の倍数の場合、加算せずに次へ進む
        if (current_number % 3 == 0 ||
            current_number % 5 == 0)
        {
            continue;
        }

        total += current_number;
    }

    printf("%ld", total);

    return 0;
}
