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
		// For adding an element 
		void add(int addObject){
			Node* newNode=new Node();
			newNode->set(addObject);
			if(currentNode!=NULL){
				newNode->setNext(currentNode->getNext());
				currentNode->setNext(newNode);
				lastcurrentNode=currentNode;
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
// For getting an element 
		int get(){
			if(currentNode!=NULL){
				return currentNode->get();
			}
		}

        bool next(){
			if(currentNode==NULL) {
				
				return false;}
			else{
			
			lastcurrentNode=currentNode;
			currentNode=currentNode->getNext(); 
			// cout<<"Current Node is "<<currentNode<<endl;
            if(currentNode==NULL ||size==0)
			{ 
				return false;
				}
			else
			{
				return true;
			}
			}
		}
		// For starting an array 
		void start(){
			lastcurrentNode=headNode;
			currentNode=headNode;
		}
void remove(){
	
}
int length(){
	return size;
}

};
int main(){
List abc;
abc.add(12);
abc.add(34);
abc.add(43);
while (abc.next())
{
	cout<<"List Elements : "<<abc.get()<<" ";
}

}
