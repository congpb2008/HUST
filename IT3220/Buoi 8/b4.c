#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Student{
    char mssv[11];
    char name[31];
    float cpa;

    struct Student *prev;
    struct Student *next;
} Student;

Student *head = NULL;
Student *tail = NULL;

// Tach ho ten thanh cac tu
void splitName(char name[], char words[][31], int *n){
    char temp[31];
    strcpy(temp, name);
    *n = 0;
    char *token = strtok(temp, " ");
    while(token != NULL){
        strcpy(words[*n], token);
        (*n)++;
        token = strtok(NULL, " ");
    }
}

// So sanh hai chuoi khong phan biet hoa thuong
int compareWord(char a[], char b[]){
    int i = 0;
    while(a[i] && b[i]){
        int x = tolower((unsigned char)a[i]);
        int y = tolower((unsigned char)b[i]);
        if (x != y)
            return x - y;
        i++;
    }
    return tolower((unsigned char)a[i]) -
           tolower((unsigned char)b[i]);
}

// So sanh ho ten theo thu tu:
// Ten -> ten dem -> ho
int compareName(char name1[], char name2[]){
    char a[31][31], b[31][31];
    int n1, n2;
    splitName(name1, a, &n1);
    splitName(name2, b, &n2);
    int i = 0;
    // So sanh tu cuoi cung (ten) ve dau
    while(i < n1 && i < n2){
        int cmp = compareWord(a[n1 - 1 - i], b[n2 - 1 - i]);
        if (cmp != 0)
            return cmp;
        i++;
    }

    // Neu cac tu da so sanh bang nhau
    if(n1 < n2) return -1;
    if(n1 > n2) return 1;
    return 0;
}

// Kiem tra MSSV da ton tai
int checkMSSV(char id[]){
    Student *p = head;
    while(p != NULL){
        if(strcmp(p->mssv, id) == 0)
            return 1;
        p = p->next;
    }
    return 0;
}

// Them sinh vien vao danh sach
void insert(char id[], char name[], float cpa){
    // Khong them neu MSSV bi trung
    if(checkMSSV(id))
        return;
    Student *p = (Student*)malloc(sizeof(Student));

    strcpy(p->mssv, id);
    strcpy(p->name, name);
    p->cpa = cpa;

    p->prev = NULL;
    p->next = NULL;

    // Danh sach rong
    if(head == NULL){
        head = tail = p;
        return;
    }

    Student *cur = head;

    // Tim vi tri can chen
    while(cur != NULL && compareName(cur->name, name) <= 0){
        cur = cur->next;
    }

    // Chen vao cuoi danh sach
    if(cur == NULL){
        p->prev = tail;
        tail->next = p;
        tail = p;
    }

    // Chen vao dau danh sach
    else if(cur == head){
        p->next = head;
        head->prev = p;
        head = p;
    }

    // Chen vao giua danh sach
    else{
        p->next = cur;
        p->prev = cur->prev;
        cur->prev->next = p;
        cur->prev = p;
    }
}

// In sinh vien theo CPA
void print(float target){
    Student *p = head;
    int found = 0;
    while(p != NULL){
        if (p->cpa >= target - 0.01 && p->cpa <= target + 0.01){
            printf("%s, %s, %.2f\n", p->mssv, p->name, p->cpa);
            found = 1;
        }
        p = p->next;
    }
    if(!found) printf("Not found\n");
}

// Giai phong bo nho
void freeList(){
    Student *p = head;
    while(p != NULL){
        Student *temp = p;
        p = p->next;
        free(temp);
    }
    head = tail = NULL;
}

int main(){
    char line[256];
    while(fgets(line, sizeof(line), stdin) != NULL){
        line[strcspn(line, "\r\n")] = '\0';
        if (strcmp(line, "end") == 0)
            break;
        // Lenh insert
        if(strncmp(line, "insert ", 7) == 0){
            char id[11];
            char name[31];
            float cpa;
            char *p = line + 7;

            // Doc MSSV
            char *comma1 = strchr(p, ',');
            if(comma1 == NULL) continue;

            *comma1 = '\0';
            strcpy(id, p);

            // Doc ho ten va CPA
            char *nameStart = comma1 + 1;
            while(*nameStart == ' ') nameStart++;
            char *comma2 = strrchr(nameStart, ',');
            if(comma2 == NULL) continue;
            *comma2 = '\0';

            // Xoa khoang trang cuoi ten
            int len = strlen(nameStart);
            while(len > 0 && nameStart[len - 1] == ' ') nameStart[--len] = '\0';
            strcpy(name, nameStart);
            cpa = atof(comma2 + 1);
            insert(id, name, cpa);
        }

        // Lenh print
        else if(strncmp(line, "print ", 6) == 0){
            float target = atof(line + 6);
            print(target);
        }
    }
    freeList();
    return 0;
}
