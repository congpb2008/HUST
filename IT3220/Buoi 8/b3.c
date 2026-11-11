#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

typedef struct{
    double minX, minY;
    double maxX, maxY;
    double area;
} Rectangle;

int contains(Rectangle a, Rectangle b){
    return a.minX < b.minX &&
           a.minY < b.minY &&
           a.maxX > b.maxX &&
           a.maxY > b.maxY;
}

int main(){
    Rectangle a[MAX];
    int n = 0;
    char line[256];

    // Nhap du lieu
    while(fgets(line, sizeof(line), stdin) != NULL){
        // Kiem tra ket thuc
        if(strcmp(line, "end\n") == 0 || strcmp(line, "end") == 0 || strcmp(line, "end\r\n") == 0){
            break;
        }
        double x1, y1, x2, y2;
        if(sscanf(line, "%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != 4){
            continue;
        }
        // Chuan hoa toa do
        a[n].minX = (x1 < x2) ? x1 : x2;
        a[n].maxX = (x1 > x2) ? x1 : x2;

        a[n].minY = (y1 < y2) ? y1 : y2;
        a[n].maxY = (y1 > y2) ? y1 : y2;

        // Tinh dien tich
        a[n].area = (a[n].maxX - a[n].minX) * (a[n].maxY - a[n].minY);
        n++;
        if(n >= MAX)
            break;
    }
    if(n == 0)
        return 0;
    int best = 0;
    int maxCount = -1;

    // Tim hinh chu nhat bao duoc nhieu hinh nhat
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            // Khong xet chinh no
            if(i == j)
                continue;

            if(contains(a[i], a[j])){
                count++;
            }
        }
        // So sanh ket qua
        if(count > maxCount){
            maxCount = count;
            best = i;
        }
        else if(count == maxCount && a[i].area < a[best].area){
            best = i;
        }
    }
    // In ket qua
    printf("%.0f %.0f %.0f %.0f, %d\n", a[best].minX, a[best].minY, a[best].maxX, a[best].maxY, maxCount);
    return 0;
}

