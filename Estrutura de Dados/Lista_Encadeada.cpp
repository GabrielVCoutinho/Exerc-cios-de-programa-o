#include <iostream>
#include <locale>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() {
        head = NULL;
        size = 0;
    }

    bool isEmpty() {
        return head == NULL;
    }

    int getSize() {
        return size;
    }

    int getValue(int position) {
        if (position < 1 || position > size) {
            cout << "Posição inválida" << endl;
            return -1;
        }

        Node* current = head;
        for (int i = 1; i < position; i++) {
            current = current->next;
        }
        return current->data;
    }

    void setValue(int position, int value) {
        if (position < 1 || position > size) {
            cout << "Posição inválida" << endl;
            return;
        }

        Node* current = head;
        for (int i = 1; i < position; i++) {
            current = current->next;
        }
        current->data = value;
    }

    void insert(int position, int value) {
        if (position < 1 || position > size + 1) {
            cout << "Posição inválida" << endl;
            return;
        }

        Node* newNode = new Node;
        newNode->data = value;

        if (position == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 1; i < position - 1; i++) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }

        size++;
    }

    void remove(int position) {
        if (position < 1 || position > size) {
            cout << "Posição inválida" << endl;
            return;
        }

        Node* toDelete;
        if (position == 1) {
            toDelete = head;
            head = head->next;
        } else {
            Node* current = head;
            for (int i = 1; i < position - 1; i++) {
                current = current->next;
            }
            toDelete = current->next;
            current->next = toDelete->next;
        }

        delete toDelete;
        size--;
    }

    void printList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

private:
    Node* head;
    int size;
};

int main() {

    LinkedList lista;

    lista.insert(1, 5);
    lista.insert(2, 10);
    lista.insert(3, 15);
    lista.insert(2, 20);

    cout << "Lista:" << endl;
    lista.printList();

    cout << "Valor na posicao 3: " << lista.getValue(3) << endl;

    lista.setValue(1, 25);

    cout << "Lista apos modificar o valor na posicao 1:" << endl;
    lista.printList();

    lista.remove(2);

    cout << "Lista apos remover o segundo elemento:" << endl;
    lista.printList();

    cout << "Tamanho da lista: " << lista.getSize() << endl;

    return 0;
}