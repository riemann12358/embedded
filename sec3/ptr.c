#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testing_pass_by_ref(int *ptr_var);
void testing_pass_by_val(int var);

int main()
{
    int x = 34;
    int *ptr = &x; // x's address to ptr pointer
    printf("%d\n", *ptr);
    *ptr = 10;
    printf("%d\n", *ptr);
    printf("%d\n", x);

    printf("%p\n", ptr);

    // Arithmetic
    int *just_for_fun = &x; // x is 10 now
    just_for_fun += 1;
    *just_for_fun = 100000; // crash, (maybe) ((( illigal)))
    printf("%d %d\n", *just_for_fun, *(just_for_fun - 1 ));

    // functions
    int z = 0;
    testing_pass_by_ref(&z);
    // z now is 1
    printf("z: %d\n", z);
    testing_pass_by_val(z);
    // z still 1 
    printf("z: %d\n", z);

    // array    
    int elements[10];
    int *arr = elements;
    printf("%p\n%p \n", elements, arr);
    printf("%d %d\n", *(arr + 0), arr[0]);
    for(int i= 0 ;i < 10 ; i++) 
        *(arr + i) = i;
    for(int i= 0 ;i < 10 ; i++) 
        printf("%d -> %d\n", i, arr[i]);
    
    int *elements1 = {2, 23, 324}; // similer to array but not in everything :)
    int elements2[] = {2, 34, 100, 23, 23,23 }; 
    for(int i = 0; i < 3; i++) printf("%d, ", *(elements2 + i));
    char *s = "3434"; // \0 
    // char s[] = "3434";  
    // array as arguments of functions
    printf("size of array with the stack: %d\n", sizeof(elements2) / sizeof(elements2[0]));
    print_arr(elements2);
    printf("strlen =%d\n", strlen(s));



    // pointer to struct
    struct rec  
    {
        int l;
        int w;
    } typedef rec_t;

    rec_t first_rec = {23 ,23};
    rec_t *ptr_first_rec = &first_rec;
    rec_t second_rec = *ptr_first_rec;
    int w = (*ptr_first_rec).l;
    int l = (*ptr_first_rec).w;
    // arrow operator
    ptr_first_rec->l ; (*ptr_first_rec).l;
    ptr_first_rec->w ; (*ptr_first_rec).w;
    printf("rec: %d %d\n", (*ptr_first_rec).l, (*ptr_first_rec).w);
    

    // void pointer, casting
    int *ptr_heap = malloc(sizeof(int));
    free(ptr_heap);
    // array of rec_t of size 2
    rec_t *ptr_to_struct_heap = malloc(2 * sizeof(rec_t));
    rec_t *tmp = ptr_to_struct_heap;
    printf("%d\n", tmp[1].l);   
    ptr_to_struct_heap++;
    
    free(tmp);
    printf("end\n");
    
}   
void print_arr(int arr[])
{
    //                                                  64 bit             32 bit
    printf("size of array in first function: %d\n", sizeof(arr) / sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%d, ", arr[i]);
    printf("\n");
    for(int i = 0; i < 10; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

void testing_pass_by_ref(int *ptr_var)
{
    (*ptr_var)++; 
}

void testing_pass_by_val(int var)
{
    var++;
}
