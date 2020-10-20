/*#include <iostream>
#include <unistd.h>
#include <stdio.h>

using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int val):val(val), next(nullptr){};
};

ListNode* Reverse(ListNode * head, int M, int N){
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *pre = dummy;
    ListNode *cur = head;
    for(int i = 1; i < M; i++){
        pre = pre->next;
        cur = cur->next;
    }
    for(int i = M; i < N; i++){
        ListNode *temp = cur->next;
        cur->next = temp->next;
        temp->next = pre->next;
        pre->next = temp;
    }
    return dummy->next;
}

int main() {
    ListNode *head, *temp;
    head = temp = new ListNode(0);
    for(int i = 1; i <= 9; i++){
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    temp->next = nullptr;
    int M = 1;
    int N = 7;
    ListNode *result = Reverse(head, M, N);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
class Data{
public:
    int a;
    int b;
    vector<pair<int, int>> v;
};
class CExample
{
private:
    int a;
    int b;
    Data data;
public:
    CExample(int a, int b, Data data){
        this->a = a;
        this->b = b;
        this->data = data;
        printf("constructor is called\n");
    }
    CExample(const CExample &c)
    {
        a=c.a;
        //b=c.b;
        printf("copy constructor is called\n");
    }
    ~CExample()
    {
        cout<<"destructor is called\n";
    }
    void Show()
    {
        cout<<a<<'\t'<<b<<endl;
    }
};
union Test{
    int a;
    float b;
};
int main()
{
    vector<pair<int, int>> v{{1, 2}, {2, 3}};
    Data data;
    data.a = 1;
    data.b = 2;
    data.v = v;
    CExample A(100, 50, data);
    CExample B=A;
    B.Show();
    Test t;
    t.a = 1;
    t.b = 1.0;
    cout << t.a << '\t' << t.b << endl;

    cout << "Test right value" << endl;
    int x = 10;
    int &&y = move(x);
    cout << x << '\t' << y << endl;
    return 0;
}*/
#include<iostream>
#include <cstring>

using namespace std;

class Base{
public:
    Base() {}
    ~Base() {}
    void print() {
        std::cout << "I'm Base" << endl;
    }

     virtual void i_am_virtual_foo() {}
};

class Sub: public Base{
public:
    Sub() {}
    ~Sub() {}
    void print() {
        std::cout << "I'm Sub" << endl;
    }

    void i_am_virtual_foo() {}
};
int main() {
    cout << "Sub->Base" << endl;
    Sub * sub = new Sub();
    sub->print();
    Base* sub2base = dynamic_cast<Base*>(sub);
    if (sub2base != nullptr) {
        sub2base->print();
    }
    cout << "<sub->base> sub2base val is: " << sub2base << endl;


    cout << endl << "Base->Sub" << endl;
    Base *base = new Base();
    base->print();
    Sub *base2sub = dynamic_cast<Sub*>(sub2base);
    if (base2sub != nullptr) {
        base2sub->print();
    }
    cout <<"<base->sub> base2sub val is: "<< base2sub << endl;
    delete sub;
    delete base;
    return 0;
}
