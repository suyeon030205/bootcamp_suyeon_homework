/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int score;
    scanf("%d",&score);
    
    if (score>=90)
        printf("A");
    else if (score>=80)
        printf("B");
    else if (score>=70)
        printf("C");
    else if (score>=60)
        printf("D");
    else
        printf("F");
    return 0;
    }