/*
 * DynamicArray.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: venci
 */

#ifndef DYNAMICARRAY_HPP_
#define DYNAMICARRAY_HPP_

#include <iostream>

template<class T>
class DynamicArray {
private:

	/*	The array we are working with	*/
	T* array;

	/*	The total length of the array	*/
	size_t totalLenght;

	/*	The used length of the array	*/
	size_t usedLenght;

	/*	Function for copying data from one array to another	*/
	void CopyFrom(DynamicArray const &);

	/*	Resize the array so that the new size can be used	*/
	void Reallocate(size_t NewSize);

public:

	/*	Constructor	*/
	DynamicArray();

	/*	Copy Constructor	*/
	DynamicArray(const DynamicArray& otherArray);

	/*	 assignment operator -> assigns a value to the specified index	*/
	DynamicArray& operator=(const DynamicArray  & otherArray);

	/*	Destructor	*/
	~DynamicArray();

	/*	Clears the array	*/
	void Clear();

	/*	Adds a new Element at the end of the array if necessary expand the array	*/
	void PushBack(T value);

	/* Function for accessing the array's elements*/
	T GetAt(size_t index) const;
	void SetAt(size_t index,T value);

	/*	Function for accessing the array's usedLength	*/
	size_t GetLength() const;

	/*	Returns the length of the array	*/
	T size() const;

	/*	Prints the array data	*/
	void Print() const;

	/*	Operator for concatenating another array	*/
	DynamicArray operator+(DynamicArray const& otherArray) const;

	/*	Used to get the total allocated Size	*/
	size_t GetAllocatedSize() const;

};

template<class T>
DynamicArray<T>::DynamicArray() {
	array = nullptr;
	totalLenght = 0;
	usedLenght = 0;
}

template<class T>
DynamicArray<T>::DynamicArray(DynamicArray const & otherArray) {
	CopyFrom(otherArray);
}

template<class T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray& otherArray) {
	if (this != &otherArray) {
		Clear();
		CopyFrom(otherArray);
	}

	return *this;
}
template<class T>
DynamicArray<T>::~DynamicArray() {
	std::cout << "Constructor has run for " << this << "array\n";
	Clear();
}

template<class T>
void DynamicArray<T>::CopyFrom(const DynamicArray& otherArray) {
	array = new int[otherArray.totalLenght];

	for (size_t i = 0; i < otherArray.usedLenght; i++) {
		array[i] = otherArray.array[i];
	}
	totalLenght = otherArray.totalLenght;
	usedLenght = otherArray.usedLenght;
}

template<class T>
void DynamicArray<T>::Clear() {
	delete[] array;
	array = nullptr;
	totalLenght = 0;
	usedLenght = 0;
}

template<class T>
void DynamicArray<T>::Reallocate(size_t newLenght) {
	int* arrayTemp = new int[newLenght];

	size_t limit = std::min(totalLenght, newLenght);

	for (size_t i = 0; i < limit; i++)
		arrayTemp[i] = array[i];

	delete[] array;

	array = arrayTemp;
	totalLenght = newLenght;
}

template<class T>
void DynamicArray<T>::PushBack(T value) {

	if (usedLenght >= totalLenght) {
		size_t NewSize;
		if (totalLenght == 0) {
			NewSize = 2;
		} else {
			NewSize = totalLenght * 2;
		}
		Reallocate(NewSize);
	}
	array[usedLenght++] = value;
}

template<class T>
T DynamicArray<T>::size() const {
}

/*	Used to get the total allocated Size	*/
template<class T>
size_t DynamicArray<T>::GetAllocatedSize() const {
	return totalLenght;
}

/*	Used for getting the used length	*/
template<class T>
size_t DynamicArray<T>::GetLength() const {
	return usedLenght;
}

/*	iterator for getting specific elements at an index	*/
template<class T>
T DynamicArray<T>::GetAt(size_t index) const {
	return array[index];
}

template<class T>
void DynamicArray<T>::Print() const {
	std::cout << "Dynamic Array at memory address 0x" << this << std::endl
			<< ", buffer at memory address 0x" << array << std::endl
			<< ", total size: " << totalLenght << std::endl << ",  used size:  "
			<< usedLenght << std::endl;

}

template<class T>
DynamicArray<T> DynamicArray<T>::operator +(const DynamicArray& otherArray) const {
	DynamicArray temp(*this);

	for (size_t i = 0; i < otherArray.GetLength(); i++) {
		temp.PushBack(otherArray.GetAt(i));
	}

	return temp;
}

template<class T>
void DynamicArray<T>::SetAt(size_t index, T value) {
	array[index] = value;
}


#endif /* DYNAMICARRAY_HPP_ */
