
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (void){
	char input_char[10000] = {'\0'};
	char output_char[10000] = {'\0'};
	int i=0;
	int input_temp;
	FILE * input_file;
	FILE * output_file;
/*�N�����*/
	printf("LeetConverter -beta ver0.99\n���L���E�X�y�[�X�E���s��Ή��E�������̂ݑΉ�\n");
	printf("\n���o�b�t�@�I�[�o�[�t���[�΍����������Ă��܂���\n");
/*�ϊ��O�̃t�@�C��*/
input_file= fopen("input.txt","rt");
output_file= fopen("output.txt","a+");
if(input_file == NULL){
printf("input.txt��ǂݍ��߂܂���ł���\ninput.txt�t�@�C�����v���O�����Ɠ����ꏊ�ɒu���Ă��������B\n");
return 1;}

while ((input_temp = fgetc(input_file))!= EOF){
if(input_char[i] == ' '){strcat(output_char,"\n");}
input_char[i] = (char)input_temp;
/*�ϊ����*/
if(input_char[i]=='a'){strcat(output_char,"4");}
else if(input_char[i]=='b'){strcat(output_char,"I3");}
else if(input_char[i]=='c'){strcat(output_char,"[");}
else if(input_char[i]=='d'){strcat(output_char,")");}
else if(input_char[i]=='e'){strcat(output_char,"3");}
else if(input_char[i]=='f'){strcat(output_char,"|=");}
else if(input_char[i]=='g'){strcat(output_char,"(_+");}
else if(input_char[i]=='h'){strcat(output_char,"#");}
else if(input_char[i]=='i'){strcat(output_char,"1");}
else if(input_char[i]=='j'){strcat(output_char,"_|");}
else if(input_char[i]=='k'){strcat(output_char,"X");}
else if(input_char[i]=='l'){strcat(output_char,"[]_");}
else if(input_char[i]=='m'){strcat(output_char,"|v|");}
else if(input_char[i]=='n'){strcat(output_char,"^/");}
else if(input_char[i]=='o'){strcat(output_char,"0");}
else if(input_char[i]=='p'){strcat(output_char,"|*");}
else if(input_char[i]=='q'){strcat(output_char,"()_");}
else if(input_char[i]=='r'){strcat(output_char,"I2");}
else if(input_char[i]=='s'){strcat(output_char,"5");}
else if(input_char[i]=='t'){strcat(output_char,"7");}
else if(input_char[i]=='u'){strcat(output_char,"(_)");}
else if(input_char[i]=='v'){strcat(output_char,"|/");}
else if(input_char[i]=='w'){strcat(output_char,"(n)");}
else if(input_char[i]=='x'){strcat(output_char,"><");}
else if(input_char[i]=='y'){strcat(output_char,"`/");}
else if(input_char[i]=='z'){strcat(output_char,"7_");}
else{strcat(output_char,input_char);}
i=i+1;}
/*�t�@�C���̏I�[*/
		input_char[i] = 0;
		printf("\n\n");
		printf("�ϊ��O�̕�����\n%s\n", input_char);
		printf("\n�ϊ���̕�����\n%s\n", output_char);
		fprintf(output_file, "%s\n\n" , output_char);
fclose(input_file);
fclose(output_file);

printf("\n\n�I������ꍇ�ɂ̓G���^�[�L�[�������Ă�������");
scanf("%*c");
return 0;}
