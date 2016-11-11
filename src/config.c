/******************************************************
* Author       : fengzhimin
* Create       : 2016-11-07 12:27
* Last modified: 2016-11-09 11:38
* Email        : 374648064@qq.com
* Filename     : config.c
* Description  : 用于定义全局变量
******************************************************/

#include "config.h"

char config_type[][20] = {".conf", ".config", ".cnf", ".config.in", ".conf.in"};   //判断配置文件的类型,每个类型字符个数不超过20


int GetConfig_TypeNum()
{
	return sizeof(config_type)/sizeof(config_type[0]);
}


char note_symbol[][10] = {"#", "%", "\""};

int GetNote_SymbolNum()
{
	return sizeof(note_symbol)/sizeof(note_symbol[0]);
}