extern double g_add; // extern: g_add가 다른 파일에 정의된 전역 변수; extern(external)은 외부란 뜻

void addGlobal()
{
	g_add += 100.;
}