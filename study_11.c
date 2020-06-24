#include <stdio.h>

#define PERSON_NUM 20

typedef struct {
    char first_name;
    char last_name;
    int math;
		int phisic;
		int chemical;
		int history;
		int geometry;
		int japanese;
} person_t;

int main(void)
{
	FILE *fp;
	fp = fopen("study_11.inp","r");

	person_t p[PERSON_NUM];

	for (int i = -1; i < PERSON_NUM; i++) {
		if (i>=0) {
			fscanf(fp,"%s%s%d%d%d%d%d%d",
			&p[i].first_name, &p[i].last_name, &p[i].math, &p[i].phisic, &p[i].chemical,
			&p[i].history, &p[i].geometry, &p[i].japanese);
		}
	}
	//データを読み込む
	for (int i = 0; i < PERSON_NUM; i++) {
		printf("%s\n", &p[i].last_name);
	}

	fclose(fp);
	return 0;
}
