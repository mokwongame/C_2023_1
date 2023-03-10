#include <stdio.h> /* <...> VS C++ 컴파일러가 사용하는 폴더(경로)를 검색 */
// #include: 컴파일러 지시자 혹은 전처리 지시자(#)

// 명령형 프로그래밍(imperative programming): 일일이 컴파일러에게 지시; 프로그래머가 귀찮은 작업을 많이 함; 생성되는 코드는 효율적임
// 함수 정의
void main() // main: 함수명, 함수 식별자; main()은 C 컴파일러가 사용
{
	puts("목원대 게임SW공학과1"); // put string; 문자열 넣기(스트림)
	printf("목원대 게임SW공학과2: "); // 포맷(형식, format) 이용한 출력

	char ch; // 변수 선언: 자료형 변수명(변수 식별자): 자료형 char를 변수명 c로 선언; char: 문자(character)
	ch = 'b'; // = 할당; 'a': 문자 하나, "abc": 문자열, 문자 여러 개
	printf(" %c ", ch); // %: 포맷 규격(format spec.); %c: 문자 포맷(char: 문자)
	printf(" %d ", ch);
	//printf(" %d ", sizeof(ch)); // %d: 십진수(정수) 포맷(decimal: 십진수의); sizeof(변수명): 변수명의 저장 크기(바이트 단위); char의 저장 크기는 1 바이트(ASCII 저장 공간)
	printf(" %d ", (int)sizeof(ch)); // (int): sizeof()의 반환값을 int로 강제로 변환; type casting

	int i; // 변수 선언: 자료형 변수명: 자료형 int(정수, integer)
	i = 10; // 상수 10을 i에 할당: 왼쪽값(l-value) = 오른쪽값(r-value): l-value(변수: 저장 공간) = r-value(일반적인 값)
	int j = 20; // 변수 선언: 자료형 변수명 = 값(초기화를 위한 값)
	printf(" %d %d ", i, j);
	printf(" %d ", (int)sizeof(int)); // sizeof(자료형): 자료형의 저장 크기(바이트 단위): int의 저장 공간은 4 바이트
}