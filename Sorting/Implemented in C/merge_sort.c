/* Merge sort algorithm --
1.Let's create an array
2.If the array contains one or less elements, then the array is already sorted
3.place the first half elements of the array called [A] in the left array. and merge the left array
4.place the first Second elements of the array called [A] in the right array. and merge the right array
5.merge left and right array both

this also called as divide and conquer.
*/

//Merge [A] array
//left- is the first index of elements
//right- is the last index of elements
void merge_sort(int A[], int left,int right){
    if(left >= right){
        //if this condition is true then we can say this array is already sorted.
        //so we return from function.
        
        return;
    }
    
    //as we need to split the array, so we will find the middle index.
    //first half of the array will be left to mid.
    //Second half of the array will be mid+1 to right.
    
    int mid = left + (right - left) / 2;
    
    //lets call merge_sort function and merge first half of the [A] array (A[left] to A[right])
    merge_sort(A, left, right);
    
    //lets call merge_sort function and merge second half of the [A] array (A[mid+1] to A[right])
    merge_sort(A, mid+1, right);
    
    
}

int main(){

}
