#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {  //�ܼ����Ḯ��Ʈ�� ��� ���� ����
    char data[10];
    struct ListNode* link;
} listNode;

typedef struct {   //����Ʈ�� ��� ����� ���� ����
    listNode* head;
} linkedList_h;

//���� ���Ḯ��Ʈ ���� ����
linkedList_h* createLinkedList_h(void);


//����Ʈ�� ù��° ��� ���� ����
void insertFirstNode(linkedList_h* L, char* x);


// pre �ڿ� ��带 �����ϴ� ����
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);


//����Ʈ�� ������ ��� ���� ����
void insertLastNode(linkedList_h*, char*);


//����Ʈ�� ������ ��� ���� ����
void deleteLastNode(linkedList_h*);


// ����Ʈ���� ��� p�� �����ϴ� ����
void deleteNode(linkedList_h* L, listNode* old);


// ����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(linkedList_h* L, char* x);


// ����Ʈ���� x ����� �� ��带 Ž���ϴ� ����
listNode* searchPreNode(linkedList_h* L, char* x);


//����Ʈ ��ü �޸� ���� ����
void freeLinkedList_h(linkedList_h*);


//����Ʈ ���Ҹ� �������� ��ȯ�ϱ�
void reverse(linkedList_h*);


//��� ������� ����Ʈ�� ����ϴ� ����
void printList(linkedList_h*);


int main()
{
    linkedList_h* L;
    listNode* old;
    listNode* pre;

    L = createLinkedList_h();
    printf("(1) ���� ����Ʈ �����ϱ�! \n");
    printList(L); getchar();   // L = ()

    printf("(2) ����Ʈ�� 3���� ���('ȭ','��','��') �߰��ϱ�! \n");
    insertLastNode(L, "ȭ");
    insertLastNode(L, "��");
    insertLastNode(L, "��");
    printList(L); getchar();  // L = ( ȭ, ��, ��)

    printf("(3) ù��° ��忡 '��' ����! \n");
    insertFirstNode(L, "��");
    printList(L); getchar();  // L = (��, ȭ, ��, ��)

    printf("(4) 'ȭ', '��' ���̿� '��' �߰� ��� ����! \n");
    pre = searchPreNode(L, "��");
    insertMiddleNode(L, pre, "��");
    printList(L); getchar(); // L = (��, ȭ, ��, ��, ��)

    printf("(5) ������ ��� '��' ����! \n");
    insertLastNode(L, "��");
    printList(L); getchar(); // L = (��, ȭ, ��, ��, ��, ��)

    printf("(6) ������ ��� '��' ����! \n");
    deleteLastNode(L);
    printList(L); getchar();  // L = (��, ȭ, ��, ��, ��)

    printf("(7) ����Ʈ���� �߰� ��� '��' ��� ����! \n");
    old = searchNode(L, "��");
    deleteNode(L, old);
    printList(L); getchar();  // L = (��, ȭ, ��, ��)

    //printf("(8) ����Ʈ ���Ҹ� �������� ��ȯ�ϱ�! \n");
    //reverse(L);
    //printList(L); getchar();   // L = (��, ��, ȭ, ��, ��)

    printf("(8) ����Ʈ ������ �����Ͽ�, ���� ����Ʈ ���·� �����! \n");
    freeLinkedList_h(L);
    printList(L);   // L = ()

    getchar();

    return 0;
}


linkedList_h* createLinkedList_h(void) {  //���� ���Ḯ��Ʈ ���� ����

    linkedList_h* L;

    L = (linkedList_h*)malloc(sizeof(linkedList_h)); //��� ���(����Ʈ �̸�) �Ҵ�
    L->head = NULL; //���� ����Ʈ�̹Ƿ� NULL ����

    return L;
}


void insertFirstNode(linkedList_h* L, char* x) { //����Ʈ�� ù��° ��� ���� ����

    listNode* newNode;

    newNode = (listNode*)malloc(sizeof(listNode)); //������ �� ��� �Ҵ�
    strcpy(newNode->data, x); //�� ����� ������ �ʵ忡 x ����  newNode->data = "��";

    newNode->link = L->head;

    L->head = newNode;

}



void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) // pre �ڿ� ��带 �����ϴ� ����
{
    listNode* newNode;

    newNode = (listNode*)malloc(sizeof(listNode));

    strcpy(newNode->data, x);

    if (L == NULL)
    {
        L->head = newNode;
        newNode->link = newNode;
    }
    else
    {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}



void insertLastNode(linkedList_h* L, char* x) { //����Ʈ�� ������ ��� ���� ����

    listNode* newNode;
    listNode* temp;

    newNode = (listNode*)malloc(sizeof(listNode)); //������ �� ��� �Ҵ�
    strcpy(newNode->data, x); //�� ����� ������ �ʵ忡 x ����  newNode->data = "��";

    newNode->link = NULL;

    if (L->head == NULL) {    //���� ����Ʈ�� ������ ��� : ù ���
        L->head = newNode;  //����Ʈ �̸��� ���ε�(ù �ε�) ����Ų��.

        return;
    }

    temp = L->head;
    while (temp->link != NULL) //������ ��带 ã�� �ݺ���, ���������� ��ũ�ʵ尪 NULL
    {
        temp = temp->link;
    }
    temp->link = newNode;
}



void deleteLastNode(linkedList_h* L) { //����Ʈ�� ������ ��� ���� ����

    listNode* pre;
    listNode* old;
    listNode* temp;

    if (L->head == NULL) return;  //���� ����Ʈ�� ���, ���� ���� �ߴ�

    if (L->head->link == NULL) {   //����Ʈ�� ��尡 �� ���� �ִ� ���,
        free(L->head);                    //ù ��° ��带 �޸� �����ϰ�
        L->head = NULL;                 //����Ʈ ���� �����͸� null�� �����Ѵ�.

        return;
    }
    else  //����Ʈ�� ��尡 ���� �� �ִ� ���,
    {
        pre = L->head;
        temp = L->head->link;
        old = L->head->link;

        if (old == NULL) return; //���࿡ pre�� ������ ��忩�� ������ ��尡 ������ return

        while (temp->link != NULL)
        {
            pre = temp;
            temp = temp->link;
        }

        old = temp;
        free(old);

        pre->link = NULL;
    }
}



void deleteNode(linkedList_h* L, listNode* old) // ����Ʈ���� ��� old�� �����ϴ� ����
{
    listNode* pre;		      // ������ ����� ������ ��带 ��Ÿ�� ������

    if (L->head == NULL) return;    // ���� ����Ʈ��� ���� ���� �ߴ�

    if (L->head->link == NULL) {    // ����Ʈ�� ��尡 �� ���� �ִ� ���
        free(L->head);		     // ù ��° ��带 �޸𸮿��� �����ϰ�
        L->head = NULL;	     // ����Ʈ ���� �����͸� NULL�� ����
        return;
    }
    else if (old == NULL) return;    // ������ ��尡 ���ٸ� ���� ���� �ߴ�	
    else {			     // ������ ��� p�� ������ ��带 ������ pre�� �̿��� ã��
        pre = L->head;
        while (pre->link != old) {
            pre = pre->link;
        }
        pre->link = old->link;	   // ������ ��� p�� ������ ���� ���� ��带 ����
        free(old);		   // ���� ����� �޸� ����	 		
    }
}



listNode* searchNode(linkedList_h* L, char* x) // ����Ʈ���� x ��带 Ž���ϴ� ����
{
    listNode* temp;

    temp = L->head;
    while (temp != NULL) {
        if (strcmp(temp->data, x) == 0) return temp;
        else temp = temp->link;
    }

    return temp;
}


listNode* searchPreNode(linkedList_h* L, char* x) // ����Ʈ���� x ����� �� ��带 Ž���ϴ� ����
{
    listNode* temp;

    temp = L->head;
    while (temp != NULL) {
        if (strcmp(temp->data, x) == 0) return temp->link;
        else temp = temp->link;
    }

    return temp->link;
}

void freeLinkedList_h(linkedList_h* L) {  //����Ʈ ��ü �޸� ���� ����

    listNode* p;

    while (L->head != NULL) {
        p = L->head;

        L->head = L->head->link;

        free(p);

        p = NULL;
    }
}


void reverse(linkedList_h* L) {  //����Ʈ�� ��� ������ �������� �ٲٴ� ����

    listNode* p;
    listNode* q;
    listNode* r;

    p = L->head;
    q = NULL;
    r = NULL;

    while (p != NULL) { //����� ������ �ݴ�� �ٲٱ�
        r = q;
        q = p;
        p = p->link;
        q->link = r;
    }
    L->head = q;

}



void printList(linkedList_h* L) {   //��� ������� ����Ʈ�� ����ϴ� ����

    listNode* p;

    printf("L = (");

    p = L->head;
    while (p != NULL) {
        printf("%s", p->data);

        p = p->link;

        if (p != NULL) printf(", ");
    }
    printf(") \n");
}