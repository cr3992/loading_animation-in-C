#include<stdio.h>
#include<windows.h>
void loading_animation(){
	int i;
	printf("Loading.");
	
	for(i=0;i<30;i++){
		printf("\b.");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		
		printf("\b ");
		Sleep(500);
		printf("\b\b ");
		Sleep(500);
		printf("\b\b ");
		Sleep(1500);
	}
}
int main()
{
	loading_animation();
	printf("\n\n\n\n");
	
}
