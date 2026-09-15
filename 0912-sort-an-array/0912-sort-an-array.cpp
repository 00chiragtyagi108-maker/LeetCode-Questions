class Solution {
public:
    void mergeSort(vector<int> &arr , int low ,int high){

        if(low >= high)
           return ;
            
        int mid = (low + high)/2 ;
        mergeSort(arr , low , mid) ;
        mergeSort(arr , mid+1 , high) ;

        Merge(arr , low , mid , high) ;
    }

    void Merge(vector<int> &arr, int low, int mid , int high )  {

        vector<int> temp ;

        int i = low ;
        int j = mid + 1 ;     

        while(i <= mid && j<= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]) ;
                i++ ;
            }
            else{
                temp.push_back(arr[j]) ;
                j++ ;
            }
        } 

        while(i <= mid ){
                temp.push_back(arr[i]) ;
                i++ ;
            }
        
        while(j <= high ){
                temp.push_back(arr[j]) ;
                j++ ;
            }

        for(int i = 0;i < temp.size(); i++) {
            arr[low+i] = temp[i] ;
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size() ;

        mergeSort(nums,0, n-1 ) ;

        return nums ;
    }
};