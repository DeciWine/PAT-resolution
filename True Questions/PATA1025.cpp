//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//
//
//struct GradeOfStudents {
//	int locationNumber;
//	char*registrtionNumber;
//	int score;
//	GradeOfStudents(int a,char*b,int c):locationNumber(a),registrtionNumber(b),score(c)
//	{}
//	GradeOfStudents() {}
//}gradeOfStudents[30000];
//
//bool compareTowGrades(GradeOfStudents a, GradeOfStudents b) {
//	if (a.score != b.score) return a.score > b.score;
//	else return strcmp(a.registrtionNumber, b.registrtionNumber)<0;
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int allStudentsNum = 0;
//	for (int i = 0; i < N; i++) {
//		int studentsNum;
//		scanf("%d", &studentsNum);
//		for (int j = 0; j < studentsNum; j++) {
//			char*registrationNum;
//			registrationNum = new char[14];
//			int score;
//			scanf("%s", registrationNum);
//			scanf("%d", &score);
//			gradeOfStudents[allStudentsNum] = GradeOfStudents(i + 1, registrationNum, score);
//			allStudentsNum++;
//		}
//	}
//	sort(gradeOfStudents, gradeOfStudents + allStudentsNum, compareTowGrades);
//	int rankOfAll = 1;
//	int* rankOfEachLocation=new int[N];
//	int* currentScore = new int[N];
//	int* sameScoreNum = new int[N];
//	for (int i = 0; i < N; i++) {
//		rankOfEachLocation[i] = 0;
//		currentScore[i] = 0;
//		sameScoreNum[i] = 1;
//	}
//	printf("%d\n", allStudentsNum);
//	currentScore[gradeOfStudents[0].locationNumber - 1] = gradeOfStudents[0].score;
//	rankOfEachLocation[gradeOfStudents[0].locationNumber - 1]++;
//	printf("%s %d %d %d", gradeOfStudents[0].registrtionNumber, rankOfAll, gradeOfStudents[0].locationNumber, rankOfEachLocation[gradeOfStudents[0].locationNumber - 1]);
//	
//	for (int i = 1; i < allStudentsNum; i++) {
//		if (gradeOfStudents[i].score != gradeOfStudents[i - 1].score) rankOfAll=i+1;
//
//		if (gradeOfStudents[i].score != currentScore[gradeOfStudents[i].locationNumber - 1]) {
//			currentScore[gradeOfStudents[i].locationNumber - 1] = gradeOfStudents[i].score;
//			rankOfEachLocation[gradeOfStudents[i].locationNumber - 1]= rankOfEachLocation[gradeOfStudents[i].locationNumber - 1]+sameScoreNum[gradeOfStudents[i].locationNumber - 1];
//			sameScoreNum[gradeOfStudents[i].locationNumber - 1] = 1;
//		}
//		else {
//			sameScoreNum[gradeOfStudents[i].locationNumber - 1]++;
//		}
//		printf("\n%s %d %d %d", gradeOfStudents[i].registrtionNumber, rankOfAll, gradeOfStudents[i].locationNumber, rankOfEachLocation[gradeOfStudents[i].locationNumber - 1]);
//	}
//
//}