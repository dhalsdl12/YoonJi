/*
함수

int aaa (int a, int b);		->함수 선언

int main()
{
	int a = 1, b = 2;
	aaa(a, b);				->함수 사용
}

int aaa(int a, int b)		->함수 정의(내용)
{
	~~~
	~~~
}

*/

//factorial 나오면 사용하기
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
