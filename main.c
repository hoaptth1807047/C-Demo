#include <stdio.h>
#include<stdlib.h>

int main() {
    while (1 == 1) {
        int soluongphantu, mang[soluongphantu], findMaxValue, findMinValue;
        while (1 == 1) {
            printf("Vui lòng nhập số lượng phần tử:\n");
            scanf("%d", &soluongphantu);
            if (soluongphantu > 10) {
                printf("Vui lòng nhập số lượng phần tử nhỏ hơn bằng 10.\n");
            } else {
                break;
            }
        }

        for (int i = 0; i < soluongphantu; ++i) {
            printf("Vui lòng nhập phần tử thứ %d: \n", i + 1);
            scanf("%d", &mang[i]);
        }

        printf("Thông tin của các phần tử trong mảng: \n");
        for (int j = 0; j < soluongphantu; ++j) {
            printf("Phần tử thứ %d là: %d\n", j + 1, mang[j]);
        }

        findMaxValue = findMinValue = mang[0];
        for (int k = 0; k < soluongphantu; ++k) {
            if (findMaxValue < mang[k]) {
                findMaxValue = mang[k];
            }
            if (findMinValue > mang[k]) {
                findMinValue = mang[k];
            }
        }
        printf("Vui lòng nhập lựa chọn của bạn: \n");
        printf("1.Hiển thị giá trị lớn nhất trong mảng. \n");
        printf("2.Hiển thị giá trị nhỏ nhất trong mảng. \n");

        int luachon;
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("Giá trị lớn nhất của mảng là:%d\n", findMaxValue);
                break;
            case 2:
                printf("Giá trị nhỏ nhất của mảng là:%d\n", findMinValue);
                break;
        }

        char choice;
        printf("Bạn có muốn tiếp tục không(y/n)?");
        scanf("%s", &choice);
        if (luachon == 'n' || luachon == 'N') {
            printf("Hẹn gặp lại.");
            break;
        }
        break;
    }
    return 0;
}