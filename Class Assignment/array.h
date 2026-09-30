#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int* array;
	int size;
} Array;

//如果在上面的结构体的Array前面加一个星号，那么这里的a就是个指针
// 但是缺点在于在写一个函数时，调用不了a，而是会凭空创造一个
//Array a;

Array array_create(int init_size);
void array_free(Array* a);
int array_size(const Array* a);
int* array_at(Array *a, int index);
void array_inflate(Array* a, int more_size);

#endif