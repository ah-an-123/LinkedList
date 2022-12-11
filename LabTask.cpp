#include<iostream>
using namespace std;
class Node{
	private:
		int object;
		Node * nextNode;
	public:
		// This is for getting object(value)
	int get(){
		return object;
	}
	// This is for setting value of object
	void set(int object){
		this->object=object;
	}
	Node* getNext(){
		return nextNode;
	}
	void setNext(Node * nextNode){
		this->nextNode=nextNode;
	}
};
class List{
	private:
		Node *headNode;
		Node * currentNode;
		Node * lastcurrentNode;
		int size;
		public:
			List(){
				headNode=new Node();
				headNode->setNext(NULL);
				currentNode=NULL;
				size=0;
				
			}
		
		void add(int addObject){
			Node* newNode=new Node;
			newNode->set(addObject);
			if(currentNode!=NULL){
				newNode->setNext(currentNode->getNext());
				currentNode->setNext(newNode);
				lastcurrentNode=headNode;
				currentNode=newNode;
			}
			else{
				newNode->setNext(NULL);
                headNode->setNext(newNode);
                lastcurrentNode=headNode;
                currentNode=newNode;
			}
			size++;
		}
};
int main(){
	
}