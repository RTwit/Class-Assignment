#include<stdio.h>
#include<stdlib.h>
#include"node.h"

typedef struct _list {
	Node* head;
	//Node* tail;
}List;

void add(Node* head, int number);
void print(List *pList);

int main(int argc, char const* argv[]) {
	//Node* head = NULL;
	List list;
	list.head = NULL;
	//list.head = list.tail = NULL;
	int number;
	do {
		scanf_s("%d", &number);
		if (number != -1) {
			//head = add(&list, number);
			add(&list, number);
		}
	} while (number != -1);

	//通过函数输出
	print(&list);

	//搜索
	//循环遍历
	scanf_s("%d", &number);
	Node* p;
	int isFound = 0;
	for (p->list.head; p ; p=p->next)
	{
		if (p->value == number)
		{
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}
	if (!isFound) {
		printf("没找到\n");
	}

	//找到后删除
	//循环遍历
	Node* q;
	for (q=NULL, p->list.head; p; q=p p = p->next)
	{
		if (p->value == number)
		{
			if (q) {
				q->next = p->next;
			}
			else {
				list.head = p->next;
			}
			free(p);
			break;
		}
	}

	return 0;
}

//可以将函数改成Node* ，然后返回head。上面就head=add()
/*或者使用二级指针Node** pHead，phead是指针的指针，* phead就是获取指针的指针所指向的内容，该内容就是指针head
void add(Node** pHead, int number)
Node* last = pHead;
*/
//还能定义一个结构

void add(List* pList, int number) {
	//add to linked-list
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//find the last
	//通过遍历去寻找
	// 然后定义一个Node结构的last指针，指向head，第一个if进不去，因为head是空的指针，让head指向第一个p指针的那块空间。
	// 首先，head指针指向null，然后进入循环创建一个Node结构的p指针，里面存入值和下一个指针，赋值为NULL是为了last定位到还没链接的尾节点
	//先判断链表是不是空链表，如果last=head说明是空链表

	//head里存的是地址
	Node* last = pList->head;

	//如果last不是NULL的话才执行下面的步骤
	if (last) {
		while (last->next) {
			last = last->next;
		}
		//attach
		last->next = p;
	}
	else {
		pList->head = p;//相当于让head资深的地址值改变
	}
}

void print(List* pList)
{
	//输出所有东西
	//以下是链表中的经典写法
	Node* p;
	for (p = pList->head; p; p = p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
}