#include <cstdio> //ǥ�� ����� �������
#include<cstdlib> //ǥ�� ���̺귯�� �������
#include<ctime> //time�� ���õ� �������

int main()
{
	clock_t start, finish; //���۽ð�, ������ �ð�
	double duration;  //�ɸ� �ð�

	start = clock();  //���� �ð��� strat�� ����
	//����ð��� �����ϰ��� �ϴ� �ڵ� �Է�
	int a = 10 + 20;
	//...

	finish = clock(); //����ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //(double)�� ����ؼ� �ڷ����� �ٲ��ִ� ����(clock_t������ doble������ �ٲ���), CLOCKS_PER_SEC �� ���(��ǻ�� �ð��� �츮�� ���� �ʷ� �����ֱ�)
	printf("%f �� �ɷȽ��ϴ�.\n", duration);//�ڷ����� double�� �ٲ��� %f�� ����Ѱ���.
	return 0;
}