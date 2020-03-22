// CURL_Example.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "CURL_Example.h"
#include "curl/curl.h"

using namespace std;

int main()
{
	cout << "Hello CMake!." << endl;
	curl_global_init(CURL_GLOBAL_DEFAULT);

	return 0;
}
