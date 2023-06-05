#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {  //단순연결리스트의 노드 구조 정의
    char data[10];
    struct ListNode* link;
} listNode;

typedef struct {   //리스트의 헤드 노드의 구조 정의
    listNode* head;
} linkedList_h;

//공백 연결리스트 생성 연산
linkedList_h* createLinkedList_h(void);


//리스트의 첫번째 노드 삽입 연산
void insertFirstNode(linkedList_h* L, char* x);


// pre 뒤에 노드를 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);


//리스트의 마지막 노드 삽입 연산
void insertLastNode(linkedList_h*, char*);


//리스트의 마지막 노드 삭제 연산
void deleteLastNode(linkedList_h*);


// 리스트에서 노드 p를 삭제하는 연산
void deleteNode(linkedList_h* L, listNode* old);


// 리스트에서 x 노드를 탐색하는 연산
listNode* searchNode(linkedList_h* L, char* x);


// 리스트에서 x 노드의 앞 노드를 탐색하는 연산
listNode* searchPreNode(linkedList_h* L, char* x);


//리스트 전체 메모리 해제 연산
void freeLinkedList_h(linkedList_h*);


//리스트 원소를 역순으로 변환하기
void reverse(linkedList_h*);


//노드 순서대로 리스트를 출력하는 연산
void printList(linkedList_h*);


int main()
{
    linkedList_h* L;
    listNode* old;
    listNode* pre;

    L = createLinkedList_h();
    printf("(1) 공백 리스트 생성하기! \n");
    printList(L); getchar();   // L = ()

    printf("(2) 리스트에 3개의 노드('화','목','금') 추가하기! \n");
    insertLastNode(L, "화");
    insertLastNode(L, "목");
    insertLastNode(L, "금");
    printList(L); getchar();  // L = ( 화, 목, 금)

    printf("(3) 첫번째 노드에 '월' 삽입! \n");
    insertFirstNode(L, "월");
    printList(L); getchar();  // L = (월, 화, 목, 금)

    printf("(4) '화', '목' 사이에 '수' 중간 노드 삽입! \n");
    pre = searchPreNode(L, "월");
    insertMiddleNode(L, pre, "수");
    printList(L); getchar(); // L = (월, 화, 수, 목, 금)

    printf("(5) 마지막 노드 '일' 삽입! \n");
    insertLastNode(L, "일");
    printList(L); getchar(); // L = (월, 화, 수, 목, 금, 일)

    printf("(6) 마지막 노드 '일' 삭제! \n");
    deleteLastNode(L);
    printList(L); getchar();  // L = (월, 화, 수, 목, 금)

    printf("(7) 리스트에서 중간 노드 '목' 노드 삭제! \n");
    old = searchNode(L, "목");
    deleteNode(L, old);
    printList(L); getchar();  // L = (월, 화, 수, 금)

    //printf("(8) 리스트 원소를 역순으로 변환하기! \n");
    //reverse(L);
    //printList(L); getchar();   // L = (금, 월, 화, 수, 목)

    printf("(8) 리스트 공간을 해제하여, 공백 리스트 상태로 만들기! \n");
    freeLinkedList_h(L);
    printList(L);   // L = ()

    getchar();

    return 0;
}


linkedList_h* createLinkedList_h(void) {  //공백 연결리스트 생성 연산

    linkedList_h* L;

    L = (linkedList_h*)malloc(sizeof(linkedList_h)); //헤드 노드(리스트 이름) 할당
    L->head = NULL; //공백 리스트이므로 NULL 설정

    return L;
}


void insertFirstNode(linkedList_h* L, char* x) { //리스트의 첫번째 노드 삽입 연산

    listNode* newNode;

    newNode = (listNode*)malloc(sizeof(listNode)); //삽입할 새 노드 할당
    strcpy(newNode->data, x); //새 노드의 데이터 필드에 x 저장  newNode->data = "월";

    newNode->link = L->head;

    L->head = newNode;

}



void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) // pre 뒤에 노드를 삽입하는 연산
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



void insertLastNode(linkedList_h* L, char* x) { //리스트의 마지막 노드 삽입 연산

    listNode* newNode;
    listNode* temp;

    newNode = (listNode*)malloc(sizeof(listNode)); //삽입할 새 노드 할당
    strcpy(newNode->data, x); //새 노드의 데이터 필드에 x 저장  newNode->data = "월";

    newNode->link = NULL;

    if (L->head == NULL) {    //현재 리스트가 공백인 경우 : 첫 노드
        L->head = newNode;  //리스트 이름이 새로드(첫 로드) 가르킨다.

        return;
    }

    temp = L->head;
    while (temp->link != NULL) //마지막 노드를 찾는 반복문, 마지막노드는 링크필드값 NULL
    {
        temp = temp->link;
    }
    temp->link = newNode;
}



void deleteLastNode(linkedList_h* L) { //리스트의 마지막 노드 삭제 연산

    listNode* pre;
    listNode* old;
    listNode* temp;

    if (L->head == NULL) return;  //공백 리스트인 경우, 삭제 연산 중단

    if (L->head->link == NULL) {   //리스트에 노드가 한 개만 있는 경우,
        free(L->head);                    //첫 번째 노드를 메모리 해제하고
        L->head = NULL;                 //리스트 시작 포인터를 null로 설정한다.

        return;
    }
    else  //리스트에 노드가 여러 개 있는 경우,
    {
        pre = L->head;
        temp = L->head->link;
        old = L->head->link;

        if (old == NULL) return; //만약에 pre가 마지막 노드여서 삭제할 노드가 없으면 return

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



void deleteNode(linkedList_h* L, listNode* old) // 리스트에서 노드 old를 삭제하는 연산
{
    listNode* pre;		      // 삭제할 노드의 선행자 노드를 나타낼 포인터

    if (L->head == NULL) return;    // 공백 리스트라면 삭제 연산 중단

    if (L->head->link == NULL) {    // 리스트에 노드가 한 개만 있는 경우
        free(L->head);		     // 첫 번째 노드를 메모리에서 해제하고
        L->head = NULL;	     // 리스트 시작 포인터를 NULL로 설정
        return;
    }
    else if (old == NULL) return;    // 삭제할 노드가 없다면 삭제 연산 중단	
    else {			     // 삭제할 노드 p의 선행자 노드를 포인터 pre를 이용해 찾음
        pre = L->head;
        while (pre->link != old) {
            pre = pre->link;
        }
        pre->link = old->link;	   // 삭제할 노드 p의 선행자 노드와 다음 노드를 연결
        free(old);		   // 삭제 노드의 메모리 해제	 		
    }
}



listNode* searchNode(linkedList_h* L, char* x) // 리스트에서 x 노드를 탐색하는 연산
{
    listNode* temp;

    temp = L->head;
    while (temp != NULL) {
        if (strcmp(temp->data, x) == 0) return temp;
        else temp = temp->link;
    }

    return temp;
}


listNode* searchPreNode(linkedList_h* L, char* x) // 리스트에서 x 노드의 앞 노드를 탐색하는 연산
{
    listNode* temp;

    temp = L->head;
    while (temp != NULL) {
        if (strcmp(temp->data, x) == 0) return temp->link;
        else temp = temp->link;
    }

    return temp->link;
}

void freeLinkedList_h(linkedList_h* L) {  //리스트 전체 메모리 해제 연산

    listNode* p;

    while (L->head != NULL) {
        p = L->head;

        L->head = L->head->link;

        free(p);

        p = NULL;
    }
}


void reverse(linkedList_h* L) {  //리스트의 노드 순서를 역순으로 바꾸는 연산

    listNode* p;
    listNode* q;
    listNode* r;

    p = L->head;
    q = NULL;
    r = NULL;

    while (p != NULL) { //노드의 연결을 반대로 바꾸기
        r = q;
        q = p;
        p = p->link;
        q->link = r;
    }
    L->head = q;

}



void printList(linkedList_h* L) {   //노드 순서대로 리스트를 출력하는 연산

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