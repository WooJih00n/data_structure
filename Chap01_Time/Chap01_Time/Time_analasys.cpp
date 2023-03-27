#include <cstdio> //ǥ�� ����� �������
#include<cstdlib> //ǥ�� ���̺귯�� �������
#include<ctime> //time�� ���õ� �������
int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}
int sum_of_N2(int n)
{
	return(n * (n + 1)) / 2;
}
int main()
{
	clock_t start, finish; //���۽ð�, ������ �ð�
	double duration;  //�ɸ� �ð�

	start = clock();  //���� �ð��� strat�� ����
	//����ð��� �����ϰ��� �ϴ� �ڵ� �Է�
	//1.sum ofN gkatn ghcnf
	//int sum = sum_of_N(10000000);
	
	//2.sum of N2 �Լ� ȣ��
	int sum = sum_of_N2(1000000);

	int a = 10 + 20;
	//...

	finish = clock(); //����ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //(double)�� ����ؼ� �ڷ����� �ٲ��ִ� ����(clock_t������ doble������ �ٲ���), CLOCKS_PER_SEC �� ���(��ǻ�� �ð��� �츮�� ���� �ʷ� �����ֱ�)
	printf("%f �� �ɷȽ��ϴ�.\n", duration);//�ڷ����� double�� �ٲ��� %f�� ����Ѱ���.
	return 0;
}