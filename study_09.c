#include <stdio.h>
#include <stdlib.h>

#define N 256 // 1行の最大文字数(バイト数)

int main(void) {
	FILE *fpa,*fpb; // FILE型構造体
	char ca[N], cb[N];
  int ia, ib;
  int count = 13;
  int list_a[count],list_b[count];

	fpa = fopen("study_09_a.inp", "r"); // ファイルを開く。失敗するとNULLを返す。
  fpb = fopen("study_09_b.inp", "r"); // ファイルを開く。失敗するとNULLを返す。

  for(int i=1; i<=count ; i++){
      fscanf(fpa, "%d", &(list_a[i]) );     /*  1行読む  */
  }

  for(int i=1; i<=count ; i++){
      fscanf(fpb, "%d", &(list_b[i]) );     /*  1行読む  */
  }

  for (int i = 1; i <= count; i++) {
    if (list_a[i]>list_b[i]) {
      printf("study_09_a.inp\n");
    }else{
      printf("study_09_b.inp\n");
    }
  }

	fclose(fpa); // ファイルを閉じる
  fclose(fpb); // ファイルを閉じる

	return 0;
}
