#include <cstdio> //표준 입출력 헤더파일
#include<cstdlib> //표준 라이브러리 헤더파일
#include<ctime> //time과 관련된 헤더파일

int main()
{
	clock_t start, finish; //시작시간, 끝나는 시각
	double duration;  //걸린 시간

	start = clock();  //현재 시각을 strat에 저장
	//실행시간을 측정하고자 하는 코드 입력
	int a = 10 + 20;
	//...

	finish = clock(); //현재시각을 finish에 저장
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //(double)을 사용해서 자료형을 바꿔주는 거임(clock_t형에서 doble형으로 바꿔줌), CLOCKS_PER_SEC 는 상수(컴퓨터 시간을 우리가 보는 초로 나눠주기)
	printf("%f 초 걸렸습니다.\n", duration);//자료형이 double로 바껴서 %f를 사용한거임.
	return 0;
}