class Heap{
    //Min Heap
    int[] heapArray = new int[50];
    private int completelevel = 0 ;
    int size = 0 ;
    public void insert(int value){
        if(size == 0 ) heapArray[completelevel] = value;
        
        completelevel++;
    }
}