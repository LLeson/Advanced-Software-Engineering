#ifndef _LINKLIST_H_
#define _LINKLIST_H_
typedef struct DataNode
{
	char *cmd;
	char *info;
	int (*handler)();
	struct DataNode *next;
}tDataNode;
tDataNode *FindCmd(tDataNode *head,char *cmd);
int ShowAllCmd(tDataNode *head);
#endif
