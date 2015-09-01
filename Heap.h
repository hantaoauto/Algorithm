#pragma once
class HeapElement
{
public:
	HeapElement(){}
	HeapElement(int i):index(i){}
	~HeapElement(){}

	int Parent(){return index/2;}
	int Left(){return index*2;}
	int Right(){return 2*index+1;}

	int index;
private:

};

class Heap
{
public:
	Heap(void);
	~Heap(void);
};

