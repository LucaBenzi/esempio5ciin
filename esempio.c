#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc >= 2)
		printf("Ciao GIT dalla %sCIIN", argv[1]);
	else
		printf("non saluto alcuna classe");
		
	return 0;
}


