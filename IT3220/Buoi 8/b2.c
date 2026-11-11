#include <stdio.h>

int M;
int board[1000][1000];
int best = 0;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

// Kiem tra co the dat quan ma tai (x, y)
int check(int x, int y){
    for(int k = 0; k < 8; k++){
        int nx = x + dx[k];
        int ny = y + dy[k];
        if(nx >= 0 && nx < M && ny >= 0 && ny < M){
            if(board[nx][ny] == 1)
                return 0;
        }
    }
    return 1;
}

// Ham quay lui
void backtrack(int pos, int count){
    // Cap nhat ket qua
    if(count > best)
        best = count;

    // Da xet het cac o
    if(pos == M * M)
        return;

    // Cat nhanh: so o con lai khong du de vuot best
    if(count + M * M - pos <= best)
        return;

    int x = pos / M;
    int y = pos % M;

    // TH1: Dat quan ma
    if(check(x, y)){
        board[x][y] = 1;
        backtrack(pos + 1, count + 1);
        // Quay lui
        board[x][y] = 0;
    }

    // TH2: Khong dat quan ma
    backtrack(pos + 1, count);
}

int main(){
    scanf("%d", &M);
    backtrack(0, 0);
    printf("%d\n", best);
    return 0;
}

