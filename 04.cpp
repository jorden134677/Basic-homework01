#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hour,minute,second;
	printf("�п�J�`�@�h�֬���:");
	scanf("%d",&second);
	hour=second/3600;
	minute=second/60%60;
	second%=60;
	printf("%d��%d��%d��\n",hour,minute,second);
	system("pause"); 
	return 0;
}
