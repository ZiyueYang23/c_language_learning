#ifndef __CONTACTS_HEAD__
#define __CONTACTS_HEAD__

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define PEOPLE 100
#define MAX_NAME 100
#define MAX_SEX 8
#define MAX_TELE 15
#define MAX_ADDR 20
#define FUN_NUM 6
#define STA_NUM 5
#define ADD_NUM 5

typedef struct pInformation
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
} pInformation;

// 动态版本
typedef struct contacts
{
    pInformation *data; // ！这个地方错了一次
    int counter;
    int capacity; // 记录容量
} contacts;

// 静态版本
//  typedef struct contacts
//  {
//      pInformation data[PEOPLE]; // ！这个地方错了一次
//      int counter;
//  } contacts;

void menu(void);
// 初始化结构体
int initContact(contacts *ps);
// 释放
void DestroyContact(contacts *ps);
// 显示
void show(const contacts *ps);
// 增加
void add(contacts *ps);
// 删除
void del(contacts *ps);
// 查找
void fin(contacts *ps);
// 更改
void edi(contacts *ps);
// 排序
void sort(contacts *ps);

int cmpPinformationByName(const void *e1, const void *e2);

// 函数内使用的找到
int discover(const char ret[], const contacts *ps);

#endif