#include <stdio.h>

void transpose_mat(int mat[4][4]) {
	int trans[4][4];
	//転置行列に変換
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			trans[j][i] = mat[i][j];
		}
	}
	//転置行列を出力
	for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	printf("%d ",trans[i][j]);
	}
	putchar('\n');
	}
}

int main(void)
{
	FILE *fp;
	int mat[4][4], trans[4][4];
	int i,j;
	fp = fopen("study_10.inp","r");

	if(fp == NULL){
		printf("エラー\n");
		return -1;
	}
	//行列を読み込む
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			fscanf(fp,"%d",&mat[i][j]);
		}
	}
	//転置行列化関数を実行
	transpose_mat(mat);

	fclose(fp);
	return 0;
}
