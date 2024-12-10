#include <stdio.h>

int kiemTraSoHoanHao(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (kiemTraSoHoanHao(a)) {
        printf("%d la so hoan hao\n", a);
    } else {
        printf("%d khong phai la so hoan hao\n", a);
    }

    if (kiemTraSoHoanHao(b)) {
        printf("%d la so hoan hao\n", b);
    } else {
        printf("%d khong phai la so hoan hao\n", b);
    }

    return 0;
}

