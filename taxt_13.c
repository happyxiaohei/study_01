#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//题目:
// 在美国的体积测量系统中,一品脱等于两杯水,一杯等于八盎司,一盎司等于两大汤匙, 一大汤匙等于3茶勺.
// 编写一个程序,提示用户输入杯数,
// 并以品脱,盎司,汤匙,茶勺为单位显示等价容量,
// 思考对于该程序,为何使用浮点类型比整数类型更适合?
//



int main13(void)

{
	//先声明变量
	float cup, pint, ounce, spoon, teaspoon;
		//杯子 品脱  盎司   大汤勺  茶勺
	printf("请输入杯数\n");
	scanf("%f", &cup);
	pint = cup / 2;//品脱等于两杯水
	ounce = cup *8;//8盎司等于一杯水
	spoon = ounce * 2;//一盎司等于两汤勺
	teaspoon = spoon * 3;//三茶勺等于一汤勺

	


	printf("cup水:%.2f\npint品脱:%.2f\nounce盎司:%.2f\nspoon大汤勺:%.2f\nteaspoon茶勺:%.2f\n",cup,pint,ounce,spoon,teaspoon);
	/*printf("pint:%f\n,cup:%f\n,ounce:%f\n,spoon:%f\n,teaspoon:%f\n",pint,cup,ounce,spoon,teaspoon);*/

	getchar();

	return 0;

}